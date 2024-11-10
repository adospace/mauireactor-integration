using MauiReactor;
using SfIntApp.Controls;
using SfIntApp.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SfIntApp.Pages;



partial class ListViewPage : Component
{
    static BookInfoRepository BookInfoRepository = new();

    public override VisualNode Render()
    {
        return ContentPage("Test SfListView",            
            new SfListView()
                .ItemsSource(BookInfoRepository.BookInfo, item =>
                    VStack(
                        Label(item.BookName)
                            .FontAttributes(MauiControls.FontAttributes.Bold)
                            .Margin(0,0,0,5),
                        Label(item.BookDescription)
                        ))
                .ItemSize(100)
                .ItemsLayout(new Syncfusion.Maui.ListView.GridLayout { SpanCount = 2 })
                
            );
    }
}

