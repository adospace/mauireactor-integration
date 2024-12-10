using MauiReactor;
using SfIntApp.Controls;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SfIntApp.Pages;

record CarouselItem(int Index);

partial class CarouselPage : Component
{
    public override VisualNode Render()
    {
        return ContentPage(
            new SfCarousel()
                .ItemsSource(
                    Enumerable.Range(1, 7)
                        .Select(_=> new CarouselItem(_))
                        .ToList() // Required for SfCarousel to work, ie. it needs a List of objects (classess)
                        , RenderItem)
            );
    }

    Grid RenderItem(CarouselItem item)
    {
        return Grid(
            Image($"image{item.Index}.png")
                .Aspect(Aspect.AspectFill)
                .HeightRequest(200)
                .WidthRequest(200),
            Label($"Image {item.Index}")
                .Margin(0, 10, 0, 0)
                .HorizontalTextAlignment(TextAlignment.Center)
        );
    }
}
