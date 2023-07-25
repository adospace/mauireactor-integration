using MauiReactor;
using UraniumIntApp.Pages;
using UraniumUI;
using UraniumUI.Material.Resources;

namespace UraniumIntApp
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
                    app.AddResource("Resources/ColorResource.xaml", typeof(ColorResource).Assembly);
                    app.AddResource("Resources/Styles/Styles.xaml");
                    app.AddResource("Resources/StyleResource.xaml", typeof(StyleResource).Assembly);
                })
                .UseUraniumUI()
                .UseUraniumUIMaterial() // 👈 Don't forget these two lines.

#if DEBUG
            .EnableMauiReactorHotReload()
#endif
                .ConfigureFonts(fonts =>
                {
                    fonts.AddFont("OpenSans-Regular.ttf", "OpenSansRegular");
                    fonts.AddFont("OpenSans-SemiBold.ttf", "OpenSansSemiBold");
                    fonts.AddMaterialIconFonts(); // 👈 Add this line
                });

            return builder.Build();
        }
    }
}