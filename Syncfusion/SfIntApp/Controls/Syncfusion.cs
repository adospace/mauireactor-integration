using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Input;
using MauiReactor;
using MauiReactor.Internals;
using Microsoft.Maui.Controls;

namespace SfIntApp.Controls;


[Scaffold(typeof(Syncfusion.Maui.Core.SfView))]
public abstract partial class SfView
{
}


[Scaffold(typeof(Syncfusion.Maui.Core.SfContentView))]
public abstract partial class SfContentView
{
}


public abstract partial class SfContentView<T>
{
    protected override void OnAddChild(VisualNode widget, BindableObject childControl)
    {
        NativeControl.EnsureNotNull();
        if (childControl is View content)
        {
            NativeControl.Content = content;
        }

        base.OnAddChild(widget, childControl);
    }

    protected override void OnRemoveChild(VisualNode widget, BindableObject childControl)
    {
        NativeControl.EnsureNotNull();
        if (childControl is View content &&
            NativeControl.Content == content)
        {
            NativeControl.Content = null;
        }


        base.OnRemoveChild(widget, childControl);
    }
}

[Scaffold(typeof(Syncfusion.Maui.Core.SfTextInputLayout))]
public partial class SfTextInputLayout 
{
}

[Scaffold(typeof(Syncfusion.Maui.Popup.SfPopup))]
public partial class SfPopup
{
    public SfPopup Content(Func<VisualNode> render)
    {
        this.Set(Syncfusion.Maui.Popup.SfPopup.ContentTemplateProperty,
            new MauiControls.DataTemplate(() => TemplateHost.Create(render()).NativeElement));

        return this;
    }
}

[Scaffold(typeof(Syncfusion.Maui.ListView.SfListView), implementItemTemplate: true)]
public partial class SfListView
{ 

}

public partial interface ISfListView
{
    Func<object, VisualNode>? GroupHeaderTemplate { get; set; }

    DataTemplate? LoadMoreTemplate { get; set; }

    ICommand? LoadMoreCommand { get; set; }
}

public partial class SfListView<T> : SfView<T>, ISfListView where T : Syncfusion.Maui.ListView.SfListView, new()
{
    Func<object, VisualNode>? ISfListView.GroupHeaderTemplate { get; set; }
    DataTemplate? ISfListView.LoadMoreTemplate { get; set; }
    ICommand? ISfListView.LoadMoreCommand { get; set; }

    class FuncDataTemplate : CustomDataTemplate
    {
        private readonly SfListView<T> _owner;
        private readonly Func<SfListView<T>, object, VisualNode> _template;
        public FuncDataTemplate(SfListView<T> owner, Func<SfListView<T>, object, VisualNode> template)
            : base(owner)
        {
            _owner = owner;
            _template = template;
        }
        public override VisualNode? GetVisualNodeForItem(object item)
        {
            return _template.Invoke(_owner, item);
        }
    }

    private FuncDataTemplate? _groupHeaderTemplate;

    partial void OnBeginUpdate()
    {
        Validate.EnsureNotNull(NativeControl);
        var thisAsIItemsView = (ISfListView)this;

        if (thisAsIItemsView.LoadMoreTemplate != null)
        {
            NativeControl.LoadMoreTemplate = thisAsIItemsView.LoadMoreTemplate;
        }

        SetPropertyValue(NativeControl, Syncfusion.Maui.ListView.SfListView.LoadMoreCommandProperty, thisAsIItemsView.LoadMoreCommand);

        if (NativeControl.ItemsSource == thisAsIItemsView.ItemsSource)
        {
            if (_groupHeaderTemplate != null)
            {
                _groupHeaderTemplate.Owner = this;

                _groupHeaderTemplate.Update();
            }
        }
        else if (thisAsIItemsView.ItemsSource != null)
        {
            if (thisAsIItemsView.GroupHeaderTemplate != null)
            {
                _groupHeaderTemplate = new FuncDataTemplate(this, (item, owner) => ((ISfListView)owner).GroupHeaderTemplate?.Invoke(item));
                NativeControl.GroupHeaderTemplate = _groupHeaderTemplate.DataTemplate;
            }
        }
        else
        {
            NativeControl.ItemsSource = null;
            NativeControl.ItemTemplate = null;
            _groupHeaderTemplate = null;
        }
    }

    protected override void OnMigrated(VisualNode newNode)
    {
        var newItemsView = ((SfListView<T>)newNode);
        newItemsView._groupHeaderTemplate = _groupHeaderTemplate;
        if (newItemsView._groupHeaderTemplate != null)
        {
            newItemsView._groupHeaderTemplate.Owner = ((SfListView<T>)newNode);
        }

        base.OnMigrated(newNode);
    }
}

public static partial class SfListViewExtensions
{
    public static T ItemsSource<T, TGroupItem, TItem>(this T itemsView,
        IEnumerable<TGroupItem> itemsSource,
        Func<TItem, VisualNode> template,
        Func<TGroupItem, VisualNode>? groupHeaderTemplate = null
        ) where T : ISfListView
    {
        itemsView.ItemsSource = itemsSource;

        itemsView.ItemTemplate = new Func<object, VisualNode>(item => template((TItem)item));
        itemsView.GroupHeaderTemplate = groupHeaderTemplate == null ? null : new Func<object, VisualNode>(item => groupHeaderTemplate((TGroupItem)item));

        return itemsView;
    }

    public static T LoadMoreTemplate<T>(this T listView, Func<VisualNode>? template) where T : ISfListView
    {
        listView.LoadMoreTemplate = new DataTemplate(() =>
        {
            var root = template.Invoke();
            var itemTemplateHost = new TemplateHost(root);
            var nativeElement = (VisualElement?)itemTemplateHost.NativeElement ?? throw new InvalidOperationException();
            return itemTemplateHost.NativeElement;
        });

        return listView;
    }

    public static T OnLoadMore<T>(this T listView, Action? action, Func<bool>? canExecute = null) where T : ISfListView
    {
        if (action == null)
        {
            if (listView.LoadMoreCommand != null)
            {
                listView.LoadMoreCommand = null;
            }
        }
        else
        {
            listView.LoadMoreCommand = canExecute != null ? new Command(action, canExecute) : new Command(action);
        }
        return listView;
    }
}
