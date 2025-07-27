using CommunityToolkit.Controls;
using CommunityToolkit.Maui;
using CommunityToolkit.Maui.Extensions;

namespace CommunityToolkit.Components;

partial class PopupServiceTestPage : Component
{
    public override VisualNode Render()
        => ContentPage(
                ScrollView(
                    Grid(
                        Button("Show popup")
                            .OnClicked(ShowPopup)
                            .Center()
                )
                .VCenter()
                .Padding(30, 0)
            )
        );

    async Task ShowPopup()
    {
        if (ContainerPage != null)
        {
            Maui.Views.Popup? _popup = null;

            var templateHost = TemplateHost.Create(new Popup(r => _popup = r,
                    Grid("*", "* *",
                        Button("Cancel", () => _popup?.CloseAsync())
                            .CornerRadius(0),
                        Button("Done", () => _popup?.CloseAsync())
                            .CornerRadius(0)
                            .GridColumn(1)
                    )
                    .ColumnSpacing(10)
                )
                .BackgroundColor(Colors.Gray)
                .OnOpened(() =>
                {
                    // Logic to execute when the popup is opened
                    Console.WriteLine("Popup opened");
                })
                .OnClosed(() =>
                {
                    Console.WriteLine("Popup closed");
                }));

            await ContainerPage.ShowPopupAsync((Maui.Views.Popup)templateHost.NativeElement!);
        }
    }
}

