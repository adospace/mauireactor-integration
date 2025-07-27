using CommunityToolkit.Controls;

namespace CommunityToolkit.Components;
class PopupHostTestPageState
{
    public bool IsShown { get; set; }

    public bool? Result { get; set; }
}

class PopupHostTestPage : Component<PopupHostTestPageState>
{
    public override VisualNode Render()
    {
        return ContentPage(
            Grid(
                Button(State.Result == null ? "Show popup" : $"Result: {State.Result.GetValueOrDefault()}")
                    .HCenter()
                    .VCenter()
                    .OnClicked(ShowPopup),

                new PopupHost()
                {
                    VStack(spacing: 10,
                        Label("Hi!"),

                        HStack(spacing: 10,
                            Button("OK", () => SetState(s =>
                            {
                                s.IsShown = false;
                                s.Result = true;
                            })),

                            Button("Cancel", ()=> SetState(s =>
                            {
                                s.IsShown = false;
                                s.Result = false;
                            }))
                        )
                    )
                }
                .IsShown(State.IsShown)
                .OnClosed(() => SetState(s =>
                {
                    s.IsShown = false;
                }))
            )
        );
    }

    private void ShowPopup()
    {
        SetState(s => s.IsShown = true);
    }
}