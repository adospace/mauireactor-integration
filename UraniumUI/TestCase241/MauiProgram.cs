using MauiReactor;
using Microsoft.Extensions.Logging;
using TestCase241.Pages;
using TestCase241.Resources.Styles;
using UraniumUI;


namespace TestCase241
{
    public static class MauiProgram
    {
        public static MauiApp CreateMauiApp()
        {
            var builder = MauiApp.CreateBuilder();
            builder
                .UseMauiReactorApp<AppShell>(app =>
                {
                    app.UseTheme<AppTheme>();
                })
#if DEBUG
                .EnableMauiReactorHotReload()
#endif
                .ConfigureFonts(fonts =>
                {
                    fonts.AddFont("OpenSans-Regular.ttf", "OpenSansRegular");
                    fonts.AddFont("OpenSans-SemiBold.ttf", "OpenSansSemiBold");
                    fonts.AddMaterialSymbolsFonts();
                });

#if DEBUG
        		builder.Logging.AddDebug();
#endif

            return builder.Build();
        }
    }
}
