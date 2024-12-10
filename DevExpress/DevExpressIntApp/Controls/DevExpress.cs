using MauiReactor;


namespace DevExpressIntApp.Controls;

[Scaffold(typeof(DevExpress.Maui.CollectionView.DXCollectionViewBase))]
public partial class DXCollectionViewBase
{ }

[Scaffold(typeof(DevExpress.Maui.CollectionView.DXCollectionView), implementItemTemplate: true)]
public partial class DXCollectionView { }

[Scaffold(typeof(DevExpress.Maui.Core.Internal.DXViewElement))]
public partial class DXViewElement { }

[Scaffold(typeof(DevExpress.Maui.Core.Internal.DXViewBaseCore))]
public partial class DXViewBaseCore { }

[Scaffold(typeof(DevExpress.Maui.Core.DXViewBase))]
public partial class DXViewBase { }

[Scaffold(typeof(DevExpress.Maui.Core.DXBorder))]
public partial class DXBorder { }

[Scaffold(typeof(DevExpress.Maui.Core.DXContentPresenterBase))]
public partial class DXContentPresenterBase { }

[Scaffold(typeof(DevExpress.Maui.Core.DXContentPresenter))]
public partial class DXContentPresenter { }

[Scaffold(typeof(DevExpress.Maui.Core.DXButtonBase))]
public partial class DXButtonBase { }

[Scaffold(typeof(DevExpress.Maui.Core.DXButton))]
public partial class DXButton { }

public partial interface IDXButton
{
    object? Content { get; set; }
}

public partial class DXButton<T>
{
    object? IDXButton.Content { get; set; }

    partial void OnEndUpdate()
    {
        SetPropertyValue(NativeControl, global::DevExpress.Maui.Core.DXButton.ContentProperty, ((IDXButton)this).Content);
    }
}

public static partial class DXButtunExtensions
{
    public static T Content<T>(this T dxButton, object? content) where T : IDXButton
    {
        dxButton.Content = content;
        return dxButton;
    }
}