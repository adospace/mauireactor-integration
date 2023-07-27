using Maui.Skeleton;
using Maui.Skeleton.Animations;
using MauiReactor;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HorusStudioIntApp.Pages;

internal class MainPageState
{
    public bool IsBusy { get; set; }
}

internal class MainPage : Component<MainPageState>
{
    public override VisualNode Render()
    {
        return new ContentPage
        {
            new VStack(spacing: 5)
            {
                new Button("Toggle", () => SetState(s => s.IsBusy = !s.IsBusy)),

                new Frame
                {
                    new Label("Label")
                }
                .BackgroundColor(Colors.Transparent)
                .Set(Skeleton.IsBusyProperty, State.IsBusy)
                .Set(Skeleton.BackgroundColorProperty, Color.FromArgb("#c6c6c5"))
                .Set(Skeleton.AnimationProperty, new FadeAnimation(500, null))
            }
        };
    }
}