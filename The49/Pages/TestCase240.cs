using MauiReactor;
using Microsoft.Maui.ApplicationModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using The49.Maui.BottomSheet;

namespace BottomSheetApp.Pages;

class TestCase240State
{
    public string FirstName { get; set; } = "Initial";
    public string LastName { get; set; } = string.Empty;

    public bool BottomSheetVisible { get; set; }
}

class TestCase240 : Component<TestCase240State>
{
    public override VisualNode Render()
        => ContentPage(
                ScrollView(
                    VStack(
                        Image("dotnet_bot.png")
                            .HeightRequest(200)
                            .HCenter()
                            .Set(MauiControls.SemanticProperties.DescriptionProperty, "Cute dot net bot waving hi to you!"),

                        Label("Hello, World!")
                            .FontSize(32)
                            .HCenter(),

                        Label("Welcome to MauiReactor: MAUI with superpowers!")
                            .FontSize(18)
                            .HCenter(),
                        Button("Open BottomSheet")
                            .OnClicked(() => ShowBottomSheet())
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
            () => VStack(spacing: 10,
                RenderMudEntry(label: "First name", text: State.FirstName, (text) => State.FirstName = text),
                RenderMudEntry(label: "Last name", text: State.LastName, (text) => State.LastName = text)
            )
            .BackgroundColor(Colors.White)
            .Padding(20),
            sheet =>
            {
                sheet.HasBackdrop = true;
                sheet.HasHandle = true;
                sheet.CornerRadius = 18;
                sheet.HandleColor = Colors.Red;
                sheet.Detents = new List<Detent>
                {
                    //new RatioDetent { Ratio = 0.58f, IsDefault = true},
                    new ContentDetent(),
                    new FullscreenDetent()
                };
            }

        );
    }

    public static VisualNode RenderMudEntry(string label, string? text, Action<string>? textChangedAction = null)
        => Render(state =>
        {
            MauiControls.Entry? _entryRef = null;
            bool isFilled = !string.IsNullOrEmpty(state.Value.Text);

            return Grid("Auto", "*",
                Entry(entryRef => _entryRef = entryRef)
                    .OnTextChanged(text =>
                    {
                        state.Set(s => (s.IsFocused, Text: text));
                    })
                    .OnCompleted((object? sender, EventArgs args) =>
                    {
                        var text = ((MauiControls.Entry?)sender)?.Text;
                        textChangedAction?.Invoke(text ?? string.Empty);
                    })
                    .Text(state.Value.Text ?? string.Empty)
                    .VCenter()
                    .OnFocused(() => state.Set(s => (IsFocused: true, s.Text)))
                    .OnUnfocused(() => state.Set(s => (IsFocused: false, s.Text))),

               Component.Label(label)
                    .OnTapped(() => _entryRef?.Focus())
                    .Margin(5, 0)
                    .HStart()
                    .VCenter()
                    .TranslationY(state.Value.IsFocused || isFilled ? -20 : 0)
                    .ScaleX(state.Value.IsFocused || isFilled ? 0.8 : 1.0)
                    .AnchorX(0)
                    .TextColor(!state.Value.IsFocused || !isFilled ? Colors.Gray : Colors.Red)
                    .WithAnimation(duration: 100)
            )
            .VCenter();
        }, (IsFocused: false, Text: text));

}
