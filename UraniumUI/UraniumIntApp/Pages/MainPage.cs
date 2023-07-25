using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UraniumIntApp.Controls;
using UraniumIntApp.Controls.InputKitSharedLayouts;
using MauiReactor;
using Microsoft.Maui.Devices;
using UraniumUI.Icons.MaterialIcons;

namespace UraniumIntApp.Pages;

class MainPage : Component
{
    public override VisualNode Render()
        => new Shell
        {
            new FlyoutItem("Buttons")
            {
                new ButtonPage()
            },
            new FlyoutItem("Input Fields")
            {
                new InputFieldsPage()
            },
            new FlyoutItem("Radio Buttons")
            {
                new RadioButtonPage()
            },
            new FlyoutItem("Data Grid")
            {
                new DataGridPage()
            },
            new FlyoutItem("Tab View")
            {
                new TabViewPage()
            },
            new FlyoutItem("Tree View")
            {
                new TreeViewPage()
            },
        }
        .ItemTemplate(RenderItemTemplate);

    static VisualNode RenderItemTemplate(MauiControls.BaseShellItem item)
        => new Grid("68", "*")
        {
            new Label(item.Title)
                .VCenter()
                .Margin(10,0)
        };
}


class ButtonPage : Component
{
    public override VisualNode Render()
    {
        return new ContentPage("Buttons")
        {
            new ScrollView
            {
                new VStack
                {
                    new Button("Elevated Button")
                        .Class("ElevatedButton"),

                    new Button("Filled Button")
                        .Class("FilledButton"),

                    new Button("Filled Tonal Button")
                        .Class("FilledTonalButton"),

                    new Button("Outlined Button")
                        .Class("OutlinedButton"),

                    new Button("Text Button")
                        .Class("TextButton"),

                }
                .VCenter()
                .Spacing(25)
                .Padding(30, 0)
            }
        };
    }
}

class InputFieldsPage : Component
{
    public override VisualNode Render()
    {
        return new ContentPage("Input Fields")
        {
            new ScrollView
            {
                new VStack
                {
                    new TextField()
                        .Title("Name"),

                    new EditorField()
                        .Title("Description"),

                    new AutoCompleteTextField()
                        .Title("Fruit")
                        .ItemsSource(new string[]{ "Apple", "Orange", "Banana" }.ToList())
                        ,

                    new PickerField()
                        .Title("Option")
                        .ItemsSource(Enumerable.Range(1, 10).Select(_=>$"Option {_}").ToList()),

                    new TimePickerField()
                        .Title("Pick a Time"),

                    new DatePickerField()
                        .Title("Pick a Date"),

                }
                .VCenter()
                .Spacing(25)
                .Padding(30, 0)
            }
        };
    }
}

class RadioButtonPage : Component
{
    public override VisualNode Render()
    {
        return new ContentPage("Input Fields")
        {
            new ScrollView
            {
                new VStack
                {
                    new UraniumRadioButtonGroupView
                    {
                        new UraniumUIRadioButton()
                            .Text("Option 1"),
                        new UraniumUIRadioButton()
                            .Text("Option 2"),
                        new UraniumUIRadioButton()
                            .Text("Option 3 (Disabled)")
                            .IsDisabled(true),
                        new UraniumUIRadioButton()
                            .Text("Option 4 (Disabled) (Checked)")
                            .IsDisabled(true)
                            .IsChecked(true)
                            ,
                    }
                }
                .VCenter()
                .Spacing(25)
                .Padding(30, 0)
            }
        };
    }
}


public record Student(int Id, string Name, int Age)
{
    static readonly Random _rnd = new();
    public static Student[] All { get; } = Enumerable.Range(1, 50).Select(_ => new Student(Id: _, Name: $"Person {_}", Age: _rnd.Next(14, 85))).ToArray();
};

class DataGridPageState
{
    public ObservableCollection<Student> Students { get; set; } = new();
}

class DataGridPage : Component<DataGridPageState>
{
    protected override void OnMounted()
    {
        State.Students = new ObservableCollection<Student>(Student.All);
        base.OnMounted();
    }

    public override VisualNode Render()
    {
        return new ContentPage("DataGrid")
        {
            new DataGrid
            {
            }
            .ItemsSource(State.Students)
            .UseAutoColumns(true)
            .Margin(30)
        };
    }

}


class TabViewPage : Component
{
    public override VisualNode Render()
    {
        return new ContentPage("Tab View")
        {
            new TabView
            {
                new TabItem()
                {
                    new Label("Tab 1")
                        .VCenter()
                        .HCenter()
                }
                .Title("Tab 1"),

                new TabItem()
                {
                    new Label("Tab 2")
                        .VCenter()
                        .HCenter()
                }
                .Title("Tab 2")
            }
            .Margin(30)
        };
    }
}


public class MyItem
{
    public MyItem()
    {
    }

    public MyItem(string name) // For easy initialization (optional)
    {
        Name = name;
    }

    public virtual string? Name { get; set; }
    public virtual IList<MyItem> Children { get; set; } = new ObservableCollection<MyItem>();
}

class TreeViewPageState
{
    public ObservableCollection<MyItem> Nodes { get; set; } = new();
}

class TreeViewPage : Component<TreeViewPageState>
{
    protected override void OnMounted()
    {
        State.Nodes.Add(new MyItem("A")
        {
            Children =
            {
                new MyItem("A.1"),
                new MyItem("A.2"),
            }
        });
        State.Nodes.Add(new MyItem("B")
        {
            Children =
            {
                new MyItem("B.1")
                {
                    Children =
                    {
                        new MyItem("B.1.a"),
                        new MyItem("B.1.b"),
                        new MyItem("B.1.c"),
                        new MyItem("B.1.d"),

                    }
                },
                new MyItem("B.2"),
            }
        });
        State.Nodes.Add(new MyItem("C"));
        State.Nodes.Add(new MyItem("D"));

        base.OnMounted();
    }

    public override VisualNode Render()
    {
        return new ContentPage("Tree View")
        {
            new TreeView()
                .ItemsSource(State.Nodes, RenderNode)
                .Margin(30)
        };
    }

    private VisualNode RenderNode(MyItem item)
    {
        return new HStack(spacing: 5)
        {
            new Image()
                .Source(new MauiControls.FontImageSource
                {
                    Glyph = MaterialRegular.Folder,
                    FontFamily = "MaterialRegular",
                    Color = Colors.Red
                }),

            new Label(item.Name)
                .FontAttributes(MauiControls.FontAttributes.Bold),

            new Label($"({item.Children.Count})")
        };
    }

}
