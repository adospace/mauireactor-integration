using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Input;
using AndroidX.Annotations;
using MauiReactor;
using MauiReactor.Internals;
using Microsoft.Maui.Controls;
using Syncfusion.Maui.Buttons;
using Syncfusion.Maui.Core;

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
                _groupHeaderTemplate = new FuncDataTemplate(this, (owner, item) => ((ISfListView)owner).GroupHeaderTemplate?.Invoke(item));
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

    partial void Migrated(VisualNode newNode)
    {
        var newItemsView = ((SfListView<T>)newNode);
        newItemsView._groupHeaderTemplate = _groupHeaderTemplate;
        if (newItemsView._groupHeaderTemplate != null)
        {
            newItemsView._groupHeaderTemplate.Owner = ((SfListView<T>)newNode);
        }
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

[Scaffold(typeof(Syncfusion.Maui.Carousel.SfCarousel), implementItemTemplate: true)]
public partial class SfCarousel { }


[Scaffold(typeof(Syncfusion.Maui.Buttons.ToggleButton))]
partial class ToggleButton { }


[Scaffold(typeof(Syncfusion.Maui.Buttons.SfCheckBox))]
partial class SfCheckBox { }



[Scaffold(typeof(Syncfusion.Maui.Core.ButtonBase))]
partial class ButtonBase { }



[Scaffold(typeof(Syncfusion.Maui.Buttons.SfButton))]
partial class SfButton { }


[Scaffold(typeof(Syncfusion.Maui.NavigationDrawer.SfNavigationDrawer))]
public partial class SfNavigationDrawer
{
    protected override void OnAddChild(VisualNode widget, BindableObject childControl)
    {
        Validate.EnsureNotNull(NativeControl);

        if (widget is DrawerSettings)
        {
            NativeControl.DrawerSettings = (Syncfusion.Maui.NavigationDrawer.DrawerSettings)childControl;
        }
        else if (childControl is View content)
        {
            NativeControl.ContentView = content;
        }

        base.OnAddChild(widget, childControl);
    }
}

[Scaffold(typeof(Syncfusion.Maui.Core.Internals.SfNavigationDrawerExt))]
public partial class SfNavigationDrawerExt
{
}

public partial interface IDrawerSettings
{
    VisualNode? DrawerHeaderView { get; set; }

    VisualNode? DrawerFooterView { get; set; }

    VisualNode? DrawerContentView { get; set; }

}

[Scaffold(typeof(Syncfusion.Maui.NavigationDrawer.DrawerSettings))]
public partial class DrawerSettings
{
}

public partial class DrawerSettings<T> 
{
    VisualNode? IDrawerSettings.DrawerHeaderView { get; set; }

    VisualNode? IDrawerSettings.DrawerFooterView { get; set; }

    VisualNode? IDrawerSettings.DrawerContentView { get; set; }

    protected override IEnumerable<VisualNode> RenderChildren()
    {
        var thisAsIDrawerSettings = (IDrawerSettings)this;
        if (thisAsIDrawerSettings.DrawerHeaderView != null)
        {
            yield return thisAsIDrawerSettings.DrawerHeaderView;
        }
        if (thisAsIDrawerSettings.DrawerFooterView != null)
        {
            yield return thisAsIDrawerSettings.DrawerFooterView;
        }
        if (thisAsIDrawerSettings.DrawerContentView != null)
        {
            yield return thisAsIDrawerSettings.DrawerContentView;
        }
    }

    protected override void OnAddChild(VisualNode widget, BindableObject childControl)
    {
        Validate.EnsureNotNull(NativeControl);

        if (childControl is View content)
        {
            var thisAsIDrawerSettings = (IDrawerSettings)this;
            if (widget == thisAsIDrawerSettings.DrawerHeaderView)
            {
                NativeControl.DrawerHeaderView = content;
            }
            else if (widget == thisAsIDrawerSettings.DrawerFooterView)
            {
                NativeControl.DrawerFooterView = content;
            }
            else if (widget == thisAsIDrawerSettings.DrawerContentView)
            {
                NativeControl.DrawerContentView = content;
            }
        }

        base.OnAddChild(widget, childControl);
    }

}

public static partial class DrawerSettingsExtensions
{
    public static T DrawerHeaderView<T>(this T drawerSettings, VisualNode? view) where T : IDrawerSettings
    {
        drawerSettings.DrawerHeaderView = view;
        return drawerSettings;
    }

    public static T DrawerFooterView<T>(this T drawerSettings, VisualNode? view) where T : IDrawerSettings
    {
        drawerSettings.DrawerFooterView = view;
        return drawerSettings;
    }

    public static T DrawerContentView<T>(this T drawerSettings, VisualNode? view) where T : IDrawerSettings
    {
        drawerSettings.DrawerContentView = view;
        return drawerSettings;
    }
}


[Scaffold(typeof(Syncfusion.Maui.TabView.SfTabView))]
public partial class SfTabView
{
    protected override void OnAddChild(VisualNode widget, BindableObject childControl)
    {
        Validate.EnsureNotNull(NativeControl);

        if (childControl is Syncfusion.Maui.TabView.SfTabItem tabItem)
        {
            NativeControl.Items.Add(tabItem);
        }
        else
        {
            base.OnAddChild(widget, childControl);
        }
    }

    protected override void OnRemoveChild(VisualNode widget, BindableObject childControl)
    {
        Validate.EnsureNotNull(NativeControl);

        if (childControl is Syncfusion.Maui.TabView.SfTabItem tabItem)
        {
            NativeControl.Items.Remove(tabItem);
        }
        else
        {
            base.OnRemoveChild(widget, childControl);
        }
    }

}

[Scaffold(typeof(Syncfusion.Maui.TabView.SfTabItem))]
public partial class SfTabItem
{
    public SfTabItem(string header, params IEnumerable<VisualNode?>? children)
        :this(children)
    {
        this.Header(header);
    }
}