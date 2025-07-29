using MauiReactor.Internals;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CommunityToolkit.Controls;

[Scaffold(typeof(global::CommunityToolkit.Maui.Views.Expander))]
partial class Expander;

partial interface IExpander
{
    VisualNode? Header { get; set; }

}

partial class Expander<T> : IExpander
{
    VisualNode? IExpander.Header { get; set; }
    protected override IEnumerable<VisualNode> RenderChildren()
    {
        var thisAsIListView = (IExpander)this;

        var children = base.RenderChildren();

        if (thisAsIListView.Header != null)
        {
            children = children.Concat([thisAsIListView.Header]);
        }

        return children;
    }

    protected override void OnAddChild(VisualNode widget, BindableObject childControl)
    {
        Validate.EnsureNotNull(NativeControl);

        var thisAsIListView = (IExpander)this;

        var childControlView = childControl as Microsoft.Maui.IView;

        if (widget == thisAsIListView.Header)
        {
            NativeControl.Header = childControlView;
        }
        else
        {
            NativeControl.Content = childControlView;
        }
    }

    protected override void OnRemoveChild(VisualNode widget, BindableObject childControl)
    {
        Validate.EnsureNotNull(NativeControl);
        var thisAsIListView = (IExpander)this;

        if (widget == thisAsIListView.Header)
        {
            NativeControl.Header = null;
            return;
        }
        else
        {
            NativeControl.Content = null;
        }
    }
}

partial class ExpanderExtensions
{
    public static T Header<T>(this T expander, VisualNode header) where T : IExpander
    {
        expander.Header = header;
        return expander;
    }
}
