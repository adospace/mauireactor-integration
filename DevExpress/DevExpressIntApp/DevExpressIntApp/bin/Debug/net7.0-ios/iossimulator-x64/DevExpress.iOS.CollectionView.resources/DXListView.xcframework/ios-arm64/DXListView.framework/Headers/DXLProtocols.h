#pragma once

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DXLEnums.h"
 
NS_ASSUME_NONNULL_BEGIN

@protocol DXListItemViewProvider<NSObject>
-(int) getItemCount;
-(UIView*) getViewByIndex:(int) index;
-(void) updateView:(UIView *) view forIndex:(int) index;
-(bool) checkView:(UIView *) view forIndex:(int) index;
-(void) recycleView:(UIView *) view forIndex:(int) index forViewType:(int) viewType;
-(int) getViewTypeByIndex:(int) index;
@end

@protocol DXSwipeItemsViewProvider<NSObject>
-(NSMutableArray<UIView*>*) getSwipeViews:(int) containerIndex forGroup:(DXSwipeGroup) swipeGroup;
-(NSMutableArray<NSNumber*>*) getSwipeViewSizes:(int) containerIndex forGroup:(DXSwipeGroup) swipeGroup;
-(NSMutableArray<UIColor*>*) getSwipeViewColors:(int) containerIndex forGroup:(DXSwipeGroup) swipeGroup;
-(void) recycleViews:(NSMutableArray<UIView*>*) views forIndex:(int) containerIndex forGroup:(DXSwipeGroup) swipeGroup;
-(bool) isSwipeAllowed:(int) containerIndex forSwipeGroup:(DXSwipeGroup) swipeGroup;
-(bool) isFullSwipeAllowed:(int) containerIndex forSwipeGroup:(DXSwipeGroup) swipeGroup;
@end

@protocol DXSwipeOptionsProvider<NSObject>
-(bool) isHorizontalListView;
@end

@protocol DXListViewDelegate<NSObject>
-(bool) canLoadMore;
-(void) loadMore;

-(bool) canPullToRefresh;
-(void) pullToRefresh;

-(bool) canStartDrag:(int) sourceIndex;
-(bool) canDrop:(int) sourceIndex to:(int) targetIndex;
-(void) drop:(int) sourceIndex to:(int) targetIndex;
-(void) itemTap:(int) visibleIndex;
-(void) itemTapConfirmed:(int) visibleIndex;
-(void) itemDoubleTap:(int) visibleIndex;
-(void) itemLongPress:(int) visibleIndex;
-(void) layoutDidChange;
@end

@protocol DXSwipeViewDelegate<NSObject>
-(void) itemTap:(int) containerIndex andItemIndex:(int) index forGroup:(DXSwipeGroup) swipeGroup;
@end

@protocol LoadMoreActionProvider<NSObject>
-(int) getItemCount;
-(bool) canLoadMore;
-(void) startLoadMore;
@end

@protocol DXItemViewProvider<NSObject>
-(int) getItemCount;
-(UIView *) getView;
-(void) updateView;
-(void) recycleView;
-(int) getViewTypeByIndex;
@end

NS_ASSUME_NONNULL_END
