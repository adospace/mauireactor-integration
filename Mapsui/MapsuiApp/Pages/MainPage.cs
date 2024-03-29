using Mapsui;
using MapsuiApp.Controls;
using MauiReactor;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MapsuiApp.Pages;

class MainPageState
{
    public Map? Map {  get; set; } 
}

class MainPage : Component<MainPageState>
{
    protected override void OnMounted()
    {
        State.Map = new Map();
        State.Map.Layers.Add(Mapsui.Tiling.OpenStreetMap.CreateTileLayer());

        base.OnMounted();
    }

    public override VisualNode Render()
        => ContentPage(
            Grid(
                new MapControl()
                    .Map(State.Map)
            )                
        );

}
