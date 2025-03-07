using MauiReactor;
using SfIntApp.Controls;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SfIntApp.Pages;
class NavigationDrawerPageState
{
    public bool IsDrawerOpen { get; set; }
}

class NavigationDrawerPage : Component<NavigationDrawerPageState>
{
    public override VisualNode Render()
    {
        return ContentPage(
            
            new SfNavigationDrawer(

                new DrawerSettings()
                    .DrawerWidth(250)
                    .DrawerHeaderHeight(200)
                    
                    .DrawerHeaderView(
                        Label("Hello Header!")
                            .Center()                    
                    )
                    .DrawerContentView(
                        Label("Hello Content!")
                            .Center()                   
                    ),


                Grid("Auto,*", "*",

                    Label("Hello World")
                        .Margin(5),

                    Button("Click me!")
                        .Center()
                        .GridRow(1)
                        .OnClicked(() => SetState(s => s.IsDrawerOpen = !s.IsDrawerOpen))
                )
            )
            .OnDrawerClosed(() => SetState(s => s.IsDrawerOpen = false, false))
            .OnDrawerOpened(() => SetState(s => s.IsDrawerOpen = true, false))
            .IsOpen(State.IsDrawerOpen)
        );
    }
}
