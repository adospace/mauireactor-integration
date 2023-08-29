using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
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