using CommunityToolkit.Maui.Extensions;
using MauiReactor.Internals;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CommunityToolkit.Controls;


[Scaffold(typeof(CommunityToolkit.Maui.Views.Popup))]
partial class Popup 
{
}


class PopupHostState
{
    public bool IsShown { get; set; } = false;
} 

partial class PopupHost : Component<PopupHostState>
{
    private CommunityToolkit.Maui.Views.Popup? _popup;

    [Prop]
    private bool _isShown;

    [Prop]
    private Action? _onClosed;

    private readonly Action<CommunityToolkit.Maui.Views.Popup?>? _nativePopupCreateAction;

    public PopupHost(Action<CommunityToolkit.Maui.Views.Popup?>? nativePopupCreateAction = null)
    {
        _nativePopupCreateAction = nativePopupCreateAction;
    }


    protected override void OnMounted()
    {
        InitializePopup();
        base.OnMounted();
    }

    protected override void OnPropsChanged()
    {
        InitializePopup();
        base.OnPropsChanged();
    }

    void InitializePopup()
    {
        if (_isShown && !State.IsShown)
        {
            Application.Current?.Dispatcher.Dispatch(async () =>
            {
                if (ContainerPage == null ||
                    _popup == null)
                {
                    return;
                }

                if (_isShown && !State.IsShown)
                {
                    SetState(s => s.IsShown = true);
                    await ContainerPage.ShowPopupAsync(_popup);
                }
            });
        }
        else if (!_isShown && State.IsShown)
        {
            Application.Current?.Dispatcher.Dispatch(async () =>
            {
                if (ContainerPage == null ||
                    _popup == null)
                {
                    return;
                }

                if (!_isShown && State.IsShown)
                {
                    SetState(s => s.IsShown = false);
                    await ContainerPage.ClosePopupAsync(_popup);
                }
            });
        }
    }

    public override VisualNode Render()
    {
        var children = Children();
        return new Popup(r =>
            {
                _popup = r;
                _nativePopupCreateAction?.Invoke(r);
            })
            {
                children[0]
            }
            .OnClosed(()=>
            {
                State.IsShown = false;
                _onClosed?.Invoke();
            })
            .IsVisible(State.IsShown);
            
    }
}
