using MauiReactor;
using Microsoft.Extensions.Logging;
using Microsoft.Maui.Hosting;
using SfEnterpriseIntApp.Components;
using SfEnterpriseIntApp.Resources.Styles;
using Syncfusion.Maui.Toolkit.Hosting;

namespace SfEnterpriseIntApp
{
    public static class MauiProgram
    {
        public static MauiApp CreateMauiApp()
        {
            var builder = MauiApp.CreateBuilder();
            builder
                .ConfigureSyncfusionToolkit()
                .UseMauiReactorApp<TabViewPage>(app =>
                {
                    app.UseTheme<ApplicationTheme>();
                },
                unhandledExceptionAction: e =>
                {
                    System.Diagnostics.Debug.WriteLine(e.ExceptionObject);
                })
                .ConfigureFonts(fonts =>
                {
                    fonts.AddFont("OpenSans-Regular.ttf", "OpenSansRegular");
                    fonts.AddFont("OpenSans-Semibold.ttf", "OpenSansSemibold");
                });


            return builder.Build();
        }
    }
}
