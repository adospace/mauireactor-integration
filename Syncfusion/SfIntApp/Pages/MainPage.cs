using MauiReactor;
using SfIntApp.Controls;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SfIntApp.Pages;

record PickerItem(string Name);

class MainPageState
{
    public int Counter { get; set; }

    public bool IsPopupOpen { get; set; }

    public List<PickerItem> Items { get; set; } = Enumerable.Range(1, 10).Select(_ => new PickerItem($"Item {_}")).ToList();

    public PickerItem SelectedItem { get; set; }
}

class MainPage : Component<MainPageState>
{
    public override VisualNode Render()
    {
        return new ContentPage
        {
            new ScrollView
            {
                new VStack
                {
                    new SfTextInputLayout
                    {
                        new Entry()
                    }
                    .Hint("Name"),
                    new SfTextInputLayout
                    {
                        new Entry()
                    }
                    .Hint("Password")
                    .EnablePasswordVisibilityToggle(true)
                    ,

                    new Button().Text("Open Popup").OnClicked(()=>SetState(s => s.IsPopupOpen = true)),

                    new SfPopup()
                    .Content(()=>
                        new CollectionView()
                            .ItemsSource(State.Items, item => new Label(item.Name))
                            .OnSelected<CollectionView, PickerItem>(OnItemSelected)
                            .SelectionMode(MauiControls.SelectionMode.Single)
                            .Margin(10)
                            )
                    .AutoSizeMode(Syncfusion.Maui.Popup.PopupAutoSizeMode.None)
                    .IsOpen(State.IsPopupOpen)
                    .OnClosed(()=>SetState(s => s.IsPopupOpen = false, false)),

                    new Label($"SelectedItem: {State.SelectedItem?.Name}")

                }
                .VCenter()
                .Spacing(25)
                .Padding(30, 0)
            }
        };
    }

    private void OnItemSelected(PickerItem item)
    {
        SetState(s =>
        {
            s.SelectedItem = item;
            s.IsPopupOpen = false;
        });
    }
}