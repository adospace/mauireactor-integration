#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DXLProtocols.h"

NS_ASSUME_NONNULL_BEGIN

@interface DXListView : UIView

@property (readwrite, nonatomic) DXLOrientation orientation;
@property (readwrite, nonatomic) double minItemSize;
@property (readwrite, nonatomic) double maxItemSize;
@property (readwrite, nonatomic) double itemSize;
@property (readwrite, nonatomic) double itemSpacing;

@property (readwrite, nonatomic) double minGroupItemSize;
@property (readwrite, nonatomic) double maxGroupItemSize;
@property (readwrite, nonatomic) double groupItemSize;
@property (readwrite, nonatomic) double groupItemSpacing;

@property (readwrite, nonatomic) UIColor* indicatorColor;

@property (readwrite, nonatomic) bool isRefreshing;
@property (readwrite, nonatomic) bool isScrollBarVisible;
@property (readwrite, nonatomic) bool isLoadMoreEnabled;
@property (readwrite, nonatomic) bool isPullToRefreshEnabled;
@property (readwrite, nonatomic) bool allowCascadeUpdate;
@property (readwrite, nonatomic) bool reduceSizeToContent;

@property (readwrite, nonatomic, weak) id<DXListViewDelegate> delegate;
@property (readwrite, nonatomic, weak) id<DXSwipeViewDelegate> swipeViewDelegate;
@property (readwrite, nullable, weak, nonatomic) id<DXListItemViewProvider> itemViewProvider;
@property (readwrite, nullable, weak, nonatomic) id<DXSwipeItemsViewProvider> swipeItemsViewProvider;

-(void) updateItems;
-(void) updateItem:(int) index;
-(void) rebuild;
-(void) scrollToItem:(int) index;
-(void) moveItem:(int)fromIndex to:(int)toIndex updateSource:(void (^)(void))updateSource callback:(void (^)(void))callback withAnimation: (bool) animate;

@end

NS_ASSUME_NONNULL_END
