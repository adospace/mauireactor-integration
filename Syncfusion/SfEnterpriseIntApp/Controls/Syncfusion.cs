using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Input;
using MauiReactor;
using MauiReactor.Internals;

namespace SfEnterpriseIntApp.Controls;


[Scaffold(typeof(Syncfusion.Maui.Toolkit.TabView.SfTabView))]
public partial class SfTabView
{
    protected override void OnAddChild(VisualNode widget, BindableObject childControl)
    {
        Validate.EnsureNotNull(NativeControl);

        if (childControl is Syncfusion.Maui.Toolkit.TabView.SfTabItem tabItem)
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

        if (childControl is Syncfusion.Maui.Toolkit.TabView.SfTabItem tabItem)
        {
            NativeControl.Items.Remove(tabItem);
        }
        else
        {
            base.OnRemoveChild(widget, childControl);
        }
    }

}

public partial interface ISfTabItem
{
    VisualNode? HeaderContent { get; set; }
}


public partial class SfTabItem<T> : MauiReactor.ContentView<T>, ISfTabItem
{
    VisualNode? ISfTabItem.HeaderContent { get; set; }

}

[Scaffold(typeof(Syncfusion.Maui.Toolkit.TabView.SfTabItem))]
public partial class SfTabItem : ISfTabItem
{

    public SfTabItem(string header, params IEnumerable<VisualNode?>? children)
        :this(children)
    {
        this.Header(header);
    }

    protected override IEnumerable<VisualNode> RenderChildren()
    {
        var thisAsISfTabItem = (ISfTabItem)this;

        var children = base.RenderChildren();

        if (thisAsISfTabItem.HeaderContent != null)
        {
            children = children.Concat([thisAsISfTabItem.HeaderContent]);
        }

        return children;
    }

    protected override void OnAddChild(VisualNode widget, BindableObject childControl)
    {
        Validate.EnsureNotNull(NativeControl);

        var thisAsISfTabItem = (ISfTabItem)this;

        if (widget == thisAsISfTabItem.HeaderContent)
        {
            NativeControl.HeaderContent = (View)childControl;
            return;
        }

        base.OnAddChild(widget, childControl);
    }

    protected override void OnRemoveChild(VisualNode widget, BindableObject childControl)
    {
        Validate.EnsureNotNull(NativeControl);

        var thisAsISfTabItem = (ISfTabItem)this;

        if (widget == thisAsISfTabItem.HeaderContent)
        {
            //SfTabItem only supports not-null HeaderContent
            //NativeControl.HeaderContent = null;
            return;
        }

        base.OnRemoveChild(widget, childControl);
    }
}


public static partial class SfTabItemExtensions
{
    public static T HeaderContent<T>(this T tabItem, VisualNode content) where T : ISfTabItem
    {
        tabItem.HeaderContent = content;
        return tabItem;
    }
}