using MauiReactor;
using SfIntApp.Controls;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SfIntApp.Pages;

partial class CalendarPage : Component
{
    public override VisualNode Render()
    {
        return ContentPage(
            new SfCalendar()
                .SelectedDate(DateTime.Today.AddDays(10))
                .OnSelectionChanged((args) => Console.WriteLine($"Selected date changed to {args.NewValue}"))
            );
    }
}
