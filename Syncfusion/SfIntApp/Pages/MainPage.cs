using MauiReactor;
using SfIntApp.Controls;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SfIntApp.Pages;

class MainPageState
{
    public int Counter { get; set; }
}

class MainPage : Component<MainPageState>
{
    public override VisualNode Render()
    {
        return new ContentPage
        {
            new ScrollView
            {
                new VStack
                {
                    new SfTextInputLayout
                    {
                        new Entry()
                    }
                    .Hint("Name")
                }
                .VCenter()
                .Spacing(25)
                .Padding(30, 0)
            }
        };
    }
}