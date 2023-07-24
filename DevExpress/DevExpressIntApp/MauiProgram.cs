using MauiReactor;
using DevExpressIntApp.Pages;
using DevExpress.Maui;
using Microsoft.Maui.Controls.Compatibility.Hosting;

namespace DevExpressIntApp;

public static class MauiProgram
{
    public static MauiApp CreateMauiApp()
    {
        var builder = MauiApp.CreateBuilder();
        builder
            .UseMauiReactorApp<MainPage>(app =>
            {
                app.AddResource("Resources/Styles/Colors.xaml");
                app.AddResource("Resources/Styles/Styles.xaml");

                app.SetWindowsSpecificAssetsDirectory("Assets");
            })
#if DEBUG
            .EnableMauiReactorHotReload()
#endif
            .UseDevExpress()
            //.UseMauiCompatibility()
            .ConfigureFonts(fonts =>
            {
                fonts.AddFont("OpenSans-Regular.ttf", "OpenSansRegular");
                fonts.AddFont("OpenSans-SemiBold.ttf", "OpenSansSemiBold");
            });

        return builder.Build();
    }
}

