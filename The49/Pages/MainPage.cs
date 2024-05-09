using MauiReactor;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using The49.Maui.BottomSheet;

namespace BottomSheetApp.Pages;

static class BottomSheetManager
{
    class BottomSheetVisualContainer : ContentView
    {
        public void Unmount()
        {
            base.OnUnmount();
        }
    }


    static BottomSheet? _sheet;
    static BottomSheetVisualContainer? _bottomSheetVisualContainer;

    public static async Task ShowAsync(Func<VisualNode> contentRender, Action<BottomSheet>? configureSheet = null)
    {
        if (_sheet != null)
        {
            return;
        }

        _bottomSheetVisualContainer = new BottomSheetVisualContainer
        {
            contentRender()
        };

        _sheet = new BottomSheet
        {
            Content = (MauiControls.View)TemplateHost.Create(_bottomSheetVisualContainer).NativeElement!
        };

        configureSheet?.Invoke(_sheet);

        _sheet.Dismissed += _sheet_Dismissed;

        await _sheet.ShowAsync();
    }

    private static void _sheet_Dismissed(object? sender, DismissOrigin e)
    {
        if (_sheet == null)
        {
            return;
        }

        _bottomSheetVisualContainer?.Unmount();

        _sheet.Dismissed -= _sheet_Dismissed;
        _sheet = null;
    }

    public static async Task DismissAsync()
    {
        if (_sheet == null)
        {
            return;
        }

        await _sheet.DismissAsync();
        _sheet = null;
    }
}

class MainPage : Component
{
    public override VisualNode Render()
        => ContentPage(
                Grid(
                    VStack(
                        Button("Show")
                            .OnClicked(ShowBottomSheet)
                            .HCenter()
                    )
                    .VCenter()
                    .Spacing(25)
                    .Padding(30, 0)
            )
        );

    async void ShowBottomSheet()
    {
        await BottomSheetManager.ShowAsync(
            () => new BottomComponent(),
            sheet => sheet.HasBackdrop = true);
    }
}

class BottomComponent : Component
{
    protected override void OnWillUnmount()
    {
        System.Diagnostics.Debug.WriteLine("BottomComponent.OnWillUnmount()");
        base.OnWillUnmount();
    }

    public override VisualNode Render()
        => VStack(
            Label("Hi from bottom sheet!"),
            Button("Close").OnClicked(HideBottomSheet)
        );

    async void HideBottomSheet()
    {
        await BottomSheetManager.DismissAsync();
    }
}
