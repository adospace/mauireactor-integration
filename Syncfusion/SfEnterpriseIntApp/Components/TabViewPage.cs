using MauiReactor;
using SfEnterpriseIntApp.Controls;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SfEnterpriseIntApp.Components;

partial class TabViewPage : Component
{
    public override VisualNode Render()
    {
        return ContentPage(
            new SfTabView(
                new SfTabItem(
                    Label("Tab 1").Center()
                )
                .HeaderContent(CheckBox()),
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
