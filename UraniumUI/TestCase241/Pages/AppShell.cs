using MauiReactor;
using Microsoft.Maui.ApplicationModel;
using Microsoft.Maui.Storage;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UraniumUI;
using UraniumUI.Icons.MaterialSymbols;

namespace TestCase241.Pages;

class AppShell : Component
{
    record AppShellPageItem(string Title, string Icon, Func<VisualNode> RenderPageFunc);
    static readonly Dictionary<string, AppShellPageItem> _appShellItems = new()
    {
        { "Number Generator", new AppShellPageItem("Number Generator", MaterialOutlined.Casino, ()=> new NumberGeneratorPage()) },
        { "Decision Maker", new AppShellPageItem("Decision Maker", MaterialOutlined.List_alt, ()=> new NumberGeneratorPage()) },
        { "Email Generator", new AppShellPageItem("Email Generator", MaterialOutlined.Mail, ()=> new NumberGeneratorPage()) },
    };

    public override VisualNode Render()
        => Shell(
            _appShellItems.Select(_ => 
                FlyoutItem(_.Value.Title, 
                    ShellContent(_.Value.Title)
                        .RenderContent(_.Value.RenderPageFunc)
            )).ToArray())
            .FlyoutFooter(
                Label()
                    .Text($"Version: {AppInfo.Current.VersionString}")
                    .HorizontalTextAlignment(TextAlignment.Center)
            )
            .ItemTemplate(RenderItemTemplate);

    VisualNode RenderItemTemplate(MauiControls.BaseShellItem item)
        => Grid("68", "*",
            HStack(
                Image()
                    .Source(new MauiControls.FontImageSource
                    {
                        Glyph = _appShellItems[item.Title].Icon,
                        FontFamily = "MaterialOutlined",
                        Size = 32,
                        Color = Theme.CurrentAppTheme == AppTheme.Dark ? Colors.White : Colors.Black
                    })
                    .Aspect(Aspect.AspectFit),

                Label(item.Title)
                    .TextColor(Theme.CurrentAppTheme == AppTheme.Dark ? Colors.White : Colors.Black)
                    .VCenter()
                    .Margin(10, 0)
            )
        );

}


class NumberGeneratorPage : Component
{
    public override VisualNode Render()
    {
        return ContentPage("Number Generator",
            Button("Toggle Theme",
                () => MauiControls.Application.Current!.UserAppTheme = MauiControls.Application.Current?.UserAppTheme == AppTheme.Dark ? AppTheme.Light : AppTheme.Dark)
                .Center()
            );
    }
}

class DecisionMakerPage : Component
{
    public override VisualNode Render()
    {
        return ContentPage("Decision Maker");
    }
}
class EmailGeneratorPage : Component
{
    public override VisualNode Render()
    {
        return ContentPage("Email Generator");
    }
}



