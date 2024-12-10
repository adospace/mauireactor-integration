using DevExpressIntApp.Controls;
using MauiReactor;

namespace DevExpressIntApp.Pages;



class CollectionViewTestPage : Component
{
    public override VisualNode Render()
    {
        return new ContentPage()
        {
            new DXCollectionView()
                .ItemsSource(["Item1", "Item2"], item => new Label(item))
        };
    }
}