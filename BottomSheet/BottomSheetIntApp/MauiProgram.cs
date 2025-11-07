using BottomSheetIntApp.Components;
using BottomSheetIntApp.Resources.Styles;
using MauiReactor;
using Microsoft.Extensions.Logging;
using Microsoft.Maui.Hosting;
using Plugin.Maui.BottomSheet.Hosting;

namespace BottomSheetIntApp
{
    public static class MauiProgram
    {
        public static MauiApp CreateMauiApp()
        {
            var builder = MauiApp.CreateBuilder();
            builder
                .UseMauiReactorApp<HomePage>(app =>
                {
                    app.UseTheme<ApplicationTheme>();
                },
                unhandledExceptionAction: e =>
                {
                    System.Diagnostics.Debug.WriteLine(e.ExceptionObject);
                })

                .UseBottomSheet()

                .ConfigureFonts(fonts =>
                {
                    fonts.AddFont("OpenSans-Regular.ttf", "OpenSansRegular");
                    fonts.AddFont("OpenSans-Semibold.ttf", "OpenSansSemibold");
                });


            return builder.Build();
        }
    }
}
