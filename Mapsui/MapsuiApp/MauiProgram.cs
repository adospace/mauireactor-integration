using MapsuiApp.Pages;
using MauiReactor;
using Microsoft.Extensions.Logging;
using SkiaSharp.Views.Maui.Controls.Hosting;


namespace MapsuiApp
{
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
                })
                .UseSkiaSharp(true)
#if DEBUG
                .EnableMauiReactorHotReload()
                .OnMauiReactorUnhandledException(ex=>
                { 
                    System.Diagnostics.Debug.WriteLine(ex.ExceptionObject);
                })
#endif
                .ConfigureFonts(fonts =>
                {
                    fonts.AddFont("OpenSans-Regular.ttf", "OpenSansRegular");
                    fonts.AddFont("OpenSans-SemiBold.ttf", "OpenSansSemiBold");
                });

#if DEBUG
        		builder.Logging.AddDebug();
#endif

            return builder.Build();
        }
    }
}
