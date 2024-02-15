using MauiReactor;
using Microsoft.Maui.Adapters;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using VirtualListViewApp.Controls;

namespace VirtualListViewApp.Pages;

public record Person(string FirstName, string LastName, int Age, string Address);

class MainPageState
{
    public VirtualListViewAdapter<Person> Persons { get; set; } = null!;
}

class MainPage : Component<MainPageState>
{
    static List<Person> GenerateSamplePersons(int count)
    {
        var random = new Random();
        var firstNames = new[] { "John", "Jim", "Joe", "Jack", "Jane", "Jill", "Jerry", "Jude", "Julia", "Jenny" };
        var lastNames = new[] { "Brown", "Green", "Black", "White", "Blue", "Red", "Gray", "Smith", "Doe", "Jones" };
        var cities = new[] { "New York", "London", "Sidney", "Tokyo", "Paris", "Berlin", "Mumbai", "Beijing", "Cairo", "Rio" };

        var persons = new List<Person>();

        for (int i = 0; i < count; i++)
        {
            var firstName = firstNames[random.Next(0, firstNames.Length)];
            var lastName = lastNames[random.Next(0, lastNames.Length)];
            var age = random.Next(20, 60);
            var city = cities[random.Next(0, cities.Length)];
            var address = $"{city} No. {random.Next(1, 11)} Lake Park";

            persons.Add(new Person(firstName, lastName, age, address));
        }

        return persons;
    }

    protected override void OnMounted()
    {
        State.Persons = new VirtualListViewAdapter<Person>(GenerateSamplePersons(100));
        base.OnMounted();
    }


    public override VisualNode Render()
        => ContentPage(
                
            new VirtualListView()
                .Adapter(State.Persons)
                .ItemTemplate<VirtualListView, Person>(RenderItem)
                
            
        );

    VisualNode RenderItem(Person item)
        => new VirtualViewCell
        {
            VStack(spacing: 5,
                Label($"{item.FirstName} {item.LastName} ({item.Age})"),
                Label(item.Address)
                )
            .Margin(5)
            
        };
}
