using MauiReactor;
using SfIntApp.Controls;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SfIntApp.Pages;

partial class ButtonsPage : Component
{
    public override VisualNode Render()
    {
        return ContentPage(
            VStack(spacing: 10,
                new SfCheckBox()
                    .Text("CheckBox")
                    .IsChecked(true)
                    .OnStateChanged((sender, args) => Console.WriteLine($"CheckBox state changed to {args.IsChecked}")),

                new SfButton()
                    .Text("Button")
                    .OnClicked(() => Console.WriteLine("Button clicked"))
            )
        );
    }

}
