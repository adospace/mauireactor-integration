using SkiaSharp;

namespace SkiaSharpIntApp.Components;

[Scaffold(typeof(SkiaSharp.Views.Maui.Controls.SKCanvasView))]
partial class SKCanvasView { }

class HomePageState
{
    public int Counter { get; set; }
}

partial class HomePage : Component<HomePageState>
{
    private SkiaSharp.Views.Maui.Controls.SKCanvasView? _canvasViewRef;

    public override VisualNode Render()
        => ContentPage(
                ScrollView(
                    VStack(
                        Image("dotnet_bot.png")
                            .HeightRequest(200)
                            .HCenter()
                            .Set(SemanticProperties.DescriptionProperty, "Cute dot net bot waving hi to you!"),

                        Label("Hello, World!")
                            .FontSize(32)
                            .HCenter(),

                        Label("Welcome to MauiReactor: MAUI with superpowers!")
                            .FontSize(18)
                            .HCenter(),

                        new SKCanvasView(viewRef => _canvasViewRef = viewRef)
                            .Height(40)
                            .OnPaintSurface(args=>
                            {
                                // the the canvas and properties
                                var canvas = args.Surface.Canvas;

                                // make sure the canvas is blank
                                canvas.Clear(SKColors.White);

                                // decide what the text looks like
                                using var paint = new SKPaint
                                {
                                    Color = SKColors.Black,
                                    IsAntialias = true,
                                    Style = SKPaintStyle.Fill
                                };
                                using var font = new SKFont
                                {
                                    Size = 24
                                };
                                
                                var coord = new SKPoint(args.Info.Width / 2, (args.Info.Height + font.Size) / 2);
                                canvas.DrawText($"Clicked {State.Counter} times!", coord, SKTextAlign.Center, font, paint);
                            }),

                        Button("Click me!")
                            .OnClicked(() => SetState(s =>
                            {
                                s.Counter++;
                                _canvasViewRef?.InvalidateSurface(); // refresh the canvas view
                            }))
                            .HCenter()
                )
                .VCenter()
                .Spacing(25)
                .Padding(30, 0)
            )
        );
}
