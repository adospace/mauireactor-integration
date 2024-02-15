using MauiReactor;
using MauiReactor.Internals;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace VirtualListViewApp.Controls;

partial interface IVirtualListView
{
    Func<object, VisualNode>? ItemTemplate { get; set; }

}

[Scaffold(typeof(MauiControls.VirtualListView))]
partial class VirtualListView
{
}

partial class VirtualListView<T>: IVirtualListView, ICustomDataTemplateOwner
{
    Func<object, VisualNode>? IVirtualListView.ItemTemplate { get; set; }
    private CustomDataTemplate? _customDataTemplate;

    public VisualNode? GetVisualNodeForItem(object item)
    {
        throw new NotImplementedException();
    }

    VisualNode? ICustomDataTemplateOwner.GetVisualNodeForItem(object item)
    {
        var thisAsIItemsView = (IVirtualListView)this;
        if (thisAsIItemsView.ItemTemplate == null)
        {
            return null;
        }

        var visualNodeForItem = thisAsIItemsView.ItemTemplate.Invoke(item);

        //_loadedForciblyChildren?.Add(new WeakReference<VisualNode>(visualNodeForItem));

        return visualNodeForItem;
    }

    partial void OnBeginUpdate()
    {
        Validate.EnsureNotNull(NativeControl);
        var thisAsIItemsView = (IVirtualListView)this;

        //_loadedForciblyChildren = null;

        if (thisAsIItemsView.Adapter != null &&
            NativeControl.Adapter == thisAsIItemsView.Adapter)
        {
            Validate.EnsureNotNull(_customDataTemplate);

            _customDataTemplate.Owner = this;

            _customDataTemplate.Update();
        }
        else if (thisAsIItemsView.Adapter != null)
        {
            _customDataTemplate = new CustomDataTemplate(this);
            NativeControl.ItemTemplate = _customDataTemplate.DataTemplate;
        }
        else
        {
            NativeControl.ClearValue(MauiControls.VirtualListView.ItemTemplateProperty);
        }
    }

    protected override void OnMigrated(VisualNode newNode)
    {
        var newItemsView = ((VirtualListView<T>)newNode);
        newItemsView._customDataTemplate = _customDataTemplate;
        if (newItemsView._customDataTemplate != null)
        {
            newItemsView._customDataTemplate.Owner = newItemsView;
        }

        base.OnMigrated(newNode);
    }
    protected override void OnUnmount()
    {
        Validate.EnsureNotNull(NativeControl);
        NativeControl.ClearValue(MauiControls.VirtualListView.ItemTemplateProperty);
        base.OnUnmount();
    }

}

static partial class VirtualListViewExtensions
{
    public static T ItemTemplate<T, TItem>(this T virtualView, Func<TItem, VisualNode> template) where T : IVirtualListView
    {
        virtualView.ItemTemplate = new Func<object, VisualNode>(item => template((TItem)item));
        return virtualView;
    }
}


[Scaffold(typeof(MauiControls.VirtualViewCell))]
partial class VirtualViewCell { }
