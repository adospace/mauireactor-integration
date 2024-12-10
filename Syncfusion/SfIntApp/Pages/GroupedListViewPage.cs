using MauiReactor;
using SfIntApp.Controls;
using SfIntApp.Models;
using Syncfusion.Maui.DataSource;
using Syncfusion.Maui.DataSource.Extensions;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SfIntApp.Pages;



partial class GroupedListViewPage : Component
{
    static EmployeeRepository EmployeeRepository = new();

    public override VisualNode Render()
    {
        return ContentPage("Test SfListView",            
            new SfListView(sfListView => 
            {
                if (sfListView?.DataSource != null && sfListView.DataSource.GroupDescriptors.Count == 0)
                {
                    sfListView.DataSource.GroupDescriptors.Add(new GroupDescriptor()
                    {
                        PropertyName = nameof(Employee.Department),
                    });
                    sfListView.DataSource.GroupDescriptors.Add(new GroupDescriptor()
                    {
                        PropertyName = nameof(Employee.Designation)
                    });
                }
            })
                .ItemsSource<SfListView, object, Employee>(EmployeeRepository.Employees, 
                    item =>
                        Label(item.Name)
                            .Margin(30, 0, 0, 5),
                    group => RenderGroupHeader((GroupResult)group)
                    )
                .AllowGroupExpandCollapse(true)
            );
    }

    VisualNode RenderGroupHeader(GroupResult group)
    {
        return Grid(
            Label(group.Key)
                .VerticalTextAlignment(TextAlignment.Center)
                .FontAttributes(MauiControls.FontAttributes.Bold),
            Label(group.Count.ToString())
                .HEnd()
                .VerticalTextAlignment(TextAlignment.Center)
        )
        .BackgroundColor(group.Level == 1 ? Colors.LightBlue : Colors.LightGray)
        .Padding(10 * (group.Level - 1) + 5, 0, 10, 5);
    }
}

