using MauiReactor.Internals;
using Plugin.Maui.BottomSheet.Navigation;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BottomSheetIntApp.Components;

[Scaffold(typeof(Plugin.Maui.BottomSheet.BottomSheet))]
public partial class BottomSheet
{
    protected override void OnAddChild(VisualNode widget, MauiControls.BindableObject childControl)
    {
        if (childControl is MauiControls.View childView)
        {
            Validate.EnsureNotNull(NativeControl);
            NativeControl.Content = new Plugin.Maui.BottomSheet.BottomSheetContent { Content = childView };
        }
        else
        {
            base.OnAddChild(widget, childControl);
        }
    }
};

public static class BottomSheetNavigationServiceMauiReactorExtensions
{
    public static async Task OpenBottomSheet(this IBottomSheetNavigationService bottomSheetNavigationService, Func<BottomSheet> contentRender)
    {
        var templateHost = TemplateHost.Create(contentRender());
        var bottomSheet = (Plugin.Maui.BottomSheet.IBottomSheet)templateHost.NativeElement.EnsureNotNull();

        bottomSheet.Closed += (s, e) => (templateHost as IHostElement)?.Stop();

        await bottomSheetNavigationService.NavigateToAsync(bottomSheet);
    }
}
