using DevExpressIntApp.Controls;
using MauiReactor;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DevExpressIntApp.Pages;

partial class ButtonsTestPage : Component
{
    public override VisualNode Render()
    {
        return new ContentPage()
        {
            VStack(
                new DXButton()
                    .Content("Button")
                    .OnTap(async () => await ContainerPage.DisplayAlert("DXButton", "Button tapped", "OK"))
                )
            .Center()
        };
    }
}
