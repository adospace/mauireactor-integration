using CommunityToolkit.Controls;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CommunityToolkit.Components;

class ExpanderTestPageState
{
    public int ExpanderIndex { get; set; }  
}

partial class ExpanderTestPage : Component<ExpanderTestPageState>
{
    public override VisualNode Render()
    {
        return ContentPage(
            
            VStack(
                
                new Expander(
                    
                    Grid(Label("Expander 1 content"))
                    
                )
                .IsExpanded(State.ExpanderIndex == 0)
                .OnExpandedChanged(args => SetState(s => s.ExpanderIndex = args.IsExpanded ? 0 : -1))
                .Header(Label("Expander 1")),

                new Expander(

                    Grid(Label("Expander 2 content"))

                )
                .IsExpanded(State.ExpanderIndex == 1)
                .OnExpandedChanged(args => SetState(s => s.ExpanderIndex = args.IsExpanded ? 1 : -1))
                .Header(Label("Expander 2")),

                new Expander(

                    Grid(Label("Expander 3 content"))

                )
                .IsExpanded(State.ExpanderIndex == 2)
                .OnExpandedChanged(args => SetState(s => s.ExpanderIndex = args.IsExpanded ? 2 : -1))
                .Header(Label("Expander 3"))

            )

        );
    }
}
