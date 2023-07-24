using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using MauiReactor;

namespace DevExpressIntApp.Pages;

class MainPageState
{
    public int Counter { get; set; }
}

class MainPage : Component<MainPageState>
{
    public override VisualNode Render()
    {
        return new Shell
        {
            new FlyoutItem("DxCollectionView")
            {
                new DxCollectionViewPage()
            }
        }
        .ItemTemplate(RenderItemTemplate);
    }

    static VisualNode RenderItemTemplate(MauiControls.BaseShellItem item)
        => new Grid("68", "*")
        {
            new Label(item.Title)
                .VCenter()
                .Margin(10,0)
        };
}

