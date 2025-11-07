using MauiReactor.Internals;
using Plugin.Maui.BottomSheet.Navigation;
using System;
using System.Threading.Tasks;

namespace BottomSheetIntApp.Components;

internal class HomePageState
{
    public int Counter { get; set; }
}

partial class TestComponent : Component
{
    protected override void OnMounted()
    {
        base.OnMounted();
    }

    protected override void OnWillUnmount()
    {
        base.OnWillUnmount();
    }

    public override VisualNode Render()
    {
        return Label("asdasd")
            .Center();
    }
}

partial class HomePage : Component<HomePageState>
{
    [Inject]
    IBottomSheetNavigationService _bottomSheetNavigationService;

    public override VisualNode Render()
        => ContentPage(
                ScrollView(
                    VStack(

                        Button("Open bottom sheet")
                            .OnClicked(OpenBottomSheet)
                            .HCenter()
                )
                .VCenter()
                .Spacing(25)
                .Padding(30, 0)
            )
        );

    private async Task OpenBottomSheet()
    {
        await _bottomSheetNavigationService.OpenBottomSheet(() => new BottomSheet
        {
            new TestComponent()
        });
    }
}
