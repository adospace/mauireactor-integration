using MauiReactor;
using MauiReactor.Internals;
using Microsoft.Maui.Controls;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace UraniumIntApp.Controls
{

    [Scaffold(typeof(UraniumUI.Material.Controls.InputField))]
    public partial class InputField { }


    [Scaffold(typeof(UraniumUI.Material.Controls.TextField))]
    public partial class TextField { }


    [Scaffold(typeof(UraniumUI.Material.Controls.EditorField))]
    public partial class EditorField { }


    public partial interface IAutoCompleteTextField
    {
        PropertyValue<List<string>> ItemsSource { get; set; }
    }

    [Scaffold(typeof(UraniumUI.Material.Controls.AutoCompleteTextField))]
    public partial class AutoCompleteTextField { }

    public partial class AutoCompleteTextField<T>
    {
        PropertyValue<List<string>> IAutoCompleteTextField.ItemsSource { get; set; }

        partial void OnEndUpdate()
        {
            var thisAsIAutoCompleteTextField = (IAutoCompleteTextField)this;
            SetPropertyValue(NativeControl, UraniumUI.Material.Controls.AutoCompleteTextField.ItemsSourceProperty, thisAsIAutoCompleteTextField.ItemsSource);
        }
    }

    public static partial class AutoCompleteTextFieldExtensions
    {
        public static T ItemsSource<T>(this T autoCompleteTextField, List<string> itemsSource)
            where T : IAutoCompleteTextField
        {
            autoCompleteTextField.ItemsSource = new PropertyValue<List<string>>(itemsSource);
            return autoCompleteTextField;
        }
    }


    public partial interface IPickerField
    {
        PropertyValue<List<string>> ItemsSource { get; set; }
    }

    [Scaffold(typeof(UraniumUI.Material.Controls.PickerField))]
    public partial class PickerField { }

    public partial class PickerField<T>
    {
        PropertyValue<List<string>> IPickerField.ItemsSource { get; set; }

        partial void OnEndUpdate()
        {
            var thisAsIAutoCompleteTextField = (IPickerField)this;
            SetPropertyValue(NativeControl, UraniumUI.Material.Controls.PickerField.ItemsSourceProperty, thisAsIAutoCompleteTextField.ItemsSource);
        }
    }

    public static partial class PickerFieldExtensions
    {
        public static T ItemsSource<T>(this T autoCompleteTextField, List<string> itemsSource)
            where T : IPickerField
        {
            autoCompleteTextField.ItemsSource = new PropertyValue<List<string>>(itemsSource);
            return autoCompleteTextField;
        }
    }



    public partial interface IMultiplePickerField
    {
        PropertyValue<List<string>> ItemsSource { get; set; }
    }

    [Scaffold(typeof(UraniumUI.Material.Controls.MultiplePickerField))]
    public partial class MultiplePickerField { }

    public partial class MultiplePickerField<T>
    {
        PropertyValue<List<string>> IMultiplePickerField.ItemsSource { get; set; }

        partial void OnEndUpdate()
        {
            var thisAsIAutoCompleteTextField = (IMultiplePickerField)this;
            SetPropertyValue(NativeControl, UraniumUI.Material.Controls.MultiplePickerField.ItemsSourceProperty, thisAsIAutoCompleteTextField.ItemsSource);
        }
    }

    public static partial class MultiplePickerFieldExtensions
    {
        public static T ItemsSource<T>(this T autoCompleteTextField, List<string> itemsSource)
            where T : IMultiplePickerField
        {
            autoCompleteTextField.ItemsSource = new PropertyValue<List<string>>(itemsSource);
            return autoCompleteTextField;
        }
    }



    [Scaffold(typeof(UraniumUI.Material.Controls.TimePickerField))]
    public partial class TimePickerField { }


    [Scaffold(typeof(UraniumUI.Material.Controls.DatePickerField))]
    public partial class DatePickerField { }


    [Scaffold(typeof(UraniumUI.Material.Controls.RadioButtonGroupView), baseTypeNamespace: "InputKitSharedLayouts")]
    public partial class UraniumRadioButtonGroupView { }


    [Scaffold(typeof(UraniumUI.Material.Controls.RadioButton), baseTypeNamespace: "InputKitSharedLayouts")]
    public partial class UraniumUIRadioButton { }


    public partial interface IDataGrid
    {
        PropertyValue<IList>? ItemsSource { get; set; }

    }

    [Scaffold(typeof(UraniumUI.Material.Controls.DataGrid))]
    public partial class DataGrid { }


    public partial class DataGrid<T>
    {
        PropertyValue<IList>? IDataGrid.ItemsSource { get; set; }

        partial void OnEndUpdate()
        {
            Validate.EnsureNotNull(NativeControl);
            var thisAsIDatGrid = (IDataGrid)this;
            SetPropertyValue(NativeControl, UraniumUI.Material.Controls.DataGrid.ItemsSourceProperty, thisAsIDatGrid.ItemsSource);
        }
    }

    public static partial class DataGridExtensions
    {
        public static T ItemsSource<T>(this T dataGrid, IList itemsSource)
            where T : IDataGrid
        {
            dataGrid.ItemsSource = new PropertyValue<IList>(itemsSource);
            return dataGrid;
        }
    }


    [Scaffold(typeof(UraniumUI.Material.Controls.TabView))]
    [ScaffoldChildren(typeof(UraniumUI.Material.Controls.TabItem), "Items")]
    public partial class TabView { }


    [Scaffold(typeof(UraniumUI.UraniumBindableObject))]
    public partial class UraniumBindableObject { }
    

    [Scaffold(typeof(UraniumUI.Material.Controls.TabItem))]
    public partial class TabItem { }    

    public partial class TabItem<T> : IEnumerable
    {

        protected readonly List<VisualNode> _internalChildren = new();

        protected override IEnumerable<VisualNode> RenderChildren()
        {
            return _internalChildren;
        }


        public IEnumerator<VisualNode> GetEnumerator()
        {
            return _internalChildren.GetEnumerator();
        }

        IEnumerator IEnumerable.GetEnumerator()
        {
            return _internalChildren.GetEnumerator();
        }

        public void Add(params VisualNode?[]? nodes)
        {
            if (nodes is null)
            {
                return;
                //throw new ArgumentNullException(nameof(nodes));
            }

            foreach (var node in nodes)
            {
                if (node != null)
                {
                    OnChildAdd(node);
                }
            }
        }

        public void Add(object? genericNode)
        {
            if (genericNode == null)
            {
                return;
            }

            if (genericNode is VisualNode visualNode)
            {
                Add(visualNode);
            }
            else if (genericNode is IEnumerable nodes)
            {
                foreach (var node in nodes.Cast<VisualNode>())
                {
                    Add(node);
                }
            }
            else
            {
                throw new NotSupportedException($"Unable to add value of type '{genericNode.GetType()}' under {typeof(T)}");
            }
        }

        protected virtual void OnChildAdd(VisualNode node)
        {
            _internalChildren.Add(node);
        }

        protected override void OnAddChild(VisualNode widget, BindableObject childNativeControl)
        {
            if (childNativeControl is View view)
            {
                NativeControl.EnsureNotNull();
                NativeControl.Content = view;
            }

            base.OnAddChild(widget, childNativeControl);
        }

        protected override void OnRemoveChild(VisualNode widget, BindableObject childNativeControl)
        {
            NativeControl.EnsureNotNull();
            if (childNativeControl is View view &&
                NativeControl.Content == view)
            {
                NativeControl.Content = null;
            }

            base.OnRemoveChild(widget, childNativeControl);
        }
    }


    [Scaffold(typeof(UraniumUI.Material.Controls.TreeView))]
    public partial class TreeView { }

    public partial interface ITreeView
    {
        IList? ItemsSource { get; set; }

        Func<object, VisualNode>? ItemTemplate { get; set; }

    }

    public partial class TreeView<T> : ICustomDataTemplateOwner
    {
        IList? ITreeView.ItemsSource { get; set; }

        Func<object, VisualNode>? ITreeView.ItemTemplate { get; set; }


        private CustomDataTemplate? _customDataTemplate;

        partial void OnBeginUpdate()
        {
            Validate.EnsureNotNull(NativeControl);
            var thisAsITreeView = (ITreeView)this;

            if (thisAsITreeView.ItemsSource != null &&
                NativeControl.ItemsSource == thisAsITreeView.ItemsSource)
            {
                if (_customDataTemplate != null)
                {
                    _customDataTemplate.Owner = this;

                    _customDataTemplate.Update();
                }
            }
            else if (thisAsITreeView.ItemsSource != null)
            {
                NativeControl.ItemsSource = thisAsITreeView.ItemsSource;

                if (thisAsITreeView.ItemTemplate != null)
                {
                    _customDataTemplate = new CustomDataTemplate(this);
                    NativeControl.ItemTemplate = _customDataTemplate.DataTemplate;
                }
            }
            else
            {
                NativeControl.ClearValue(UraniumUI.Material.Controls.TreeView.ItemsSourceProperty);
                NativeControl.ClearValue(UraniumUI.Material.Controls.TreeView.ItemTemplateProperty);
            }
        }

        protected override void OnMigrated(VisualNode newNode)
        {
            var newItemsView = ((TreeView<T>)newNode);
            newItemsView._customDataTemplate = _customDataTemplate;
            if (newItemsView._customDataTemplate != null)
            {
                newItemsView._customDataTemplate.Owner = newItemsView;
            }

            base.OnMigrated(newNode);
        }

        protected override void OnAddChild(VisualNode widget, BindableObject childControl)
        {
            //DO NOT ALLOW ADDING CHILDREN DIRECTLY UNDER THE TREEVIEW
            //base.OnAddChild(widget, childControl);
        }

        protected override void OnRemoveChild(VisualNode widget, BindableObject childControl)
        {
            //base.OnRemoveChild(widget, childControl);
        }

        public VisualNode? GetVisualNodeForItem(object item)
        {
            return ((ITreeView)this).ItemTemplate?.Invoke(item);
        }
    }

    public static partial class TreeViewExtensions
    {
        public static T ItemsSource<T, TItem>(this T itemsView, IList<TItem> itemsSource) 
            where T : ITreeView
        {
            itemsView.ItemsSource = (IList)itemsSource;
            return itemsView;
        }

        public static T ItemsSource<T, TItem>(this T itemsView, IList<TItem> itemsSource, Func<TItem, VisualNode> template) 
            where T : ITreeView
        {
            itemsView.ItemsSource = (IList)itemsSource;
            itemsView.ItemTemplate = new Func<object, VisualNode>(item => template((TItem)item));
            return itemsView;
        }
    }
}

namespace UraniumIntApp.Controls.InputKitSharedLayouts
{

    [Scaffold(typeof(InputKit.Shared.Layouts.StatefulStackLayout))]
    public partial class StatefulStackLayout { }


    [Scaffold(typeof(InputKit.Shared.Controls.RadioButton))]
    public partial class RadioButton { }


    [Scaffold(typeof(InputKit.Shared.Controls.RadioButtonGroupView))]
    public partial class RadioButtonGroupView { }
}
