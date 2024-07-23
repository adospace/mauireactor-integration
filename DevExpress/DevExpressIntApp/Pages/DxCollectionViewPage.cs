using MauiReactor;

namespace DevExpressIntApp.Pages;

[Scaffold(typeof(DevExpress.Maui.CollectionView.DXCollectionView), implementItemTemplate: true)]
public partial class DXCollectionView { }

class DxCollectionViewPage : Component
{
    public override VisualNode Render()
    {
        return new ContentPage()
        {
            new DXCollectionView()
                
                .ItemsSource(new []{ "Item1", "Item2" }, item => new Label(item))
        };
    }
}