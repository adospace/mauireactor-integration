#import "Enums.h"
#import "DXGridCellViewInfo.h"

@protocol DXGridAction <NSObject>

-(void) pullToRefresh;
-(void) loadMore;
-(void) tapInCell:(int)cellIndex andRow:(int)rowIndex andElement:(DXGridElement)element;
-(void) confirmedTapInCell:(int)cellIndex andRow:(int)rowIndex andElement:(DXGridElement)element;
-(void) doubleTapInCell:(int)cellIndex andRow:(int)rowIndex andElement:(DXGridElement)element;
-(void) longTapInCell:(int)cellIndex andRow:(int)rowIndex andElement:(DXGridElement)element;
-(void) closeEditor:(bool)applyChanges;

-(bool) canLoadMore;
-(bool) canPullToRefresh;

-(bool) canDragRow:(int)visibleIndex;
-(bool) canDropRow:(int)fromVisibleIndex to:(int)visibleIndex;
-(void) dropRow:(int)fromVisibleIndex to:(int)visibleIndex;

-(DXGridCellViewInfo*) requestCustomCellViewInfo:(int)rowIndex andCellIndex:(int)cellIndex;
-(void) onSelectionChanged:(UIView*)view andRowIndex:(int)rowIndex andCellIndex:(int)cellIndex;
-(bool) onSwipeButtonShowingWithDirection:(bool)leadingSwipe andRowIndex:(int)rowIndex andSwipeItemIndex:(int)swipeItemIndex;

@end
