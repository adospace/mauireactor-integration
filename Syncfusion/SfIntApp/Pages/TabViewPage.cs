using MauiReactor;
using SfIntApp.Controls;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SfIntApp.Pages;

partial class TabViewPage : Component
{
    public override VisualNode Render()
    {
        return ContentPage(
            new SfTabView(
                new SfTabItem("Tab 1",
                    Label("Tab 1").Center()
                ),
                new SfTabItem("Tab 2",
                    Label("Tab 2").Center()
                ),
                new SfTabItem("Tab 3",
                    Label("Tab 3").Center()
                )
            )
        );
    }
}
