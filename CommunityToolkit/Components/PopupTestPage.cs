using CommunityToolkit.Controls;
using CommunityToolkit.Maui;
using CommunityToolkit.Maui.Extensions;

namespace CommunityToolkit.Components;

class PopupTestPageState
{ 
    public bool IsPopupVisible { get; set; } = false;
}

partial class PopupTestPage : Component<PopupTestPageState>
{
    private Maui.Views.Popup? _popup;

    public override VisualNode Render()
        => ContentPage(
                ScrollView(
                    Grid(
                        new Popup(r => _popup = r,
                                Grid("*","* *",
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
                                State.IsPopupVisible = false;
                            })
                            .IsVisible(State.IsPopupVisible),

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
        if (ContainerPage != null &&
            _popup != null &&
            !State.IsPopupVisible)
        {
            SetState(s => s.IsPopupVisible = true);
            await ContainerPage.ShowPopupAsync(_popup);
        }
    }
}

