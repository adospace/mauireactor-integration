using MauiReactor;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using The49.Maui.BottomSheet;

namespace BottomSheetApp.Pages;

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
