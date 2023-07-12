#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DXGridViewInfo.h"
#import "DXGridSettings.h"
#import "DXGridHeaderViewInfo.h"

@interface DXGridView : UIView

-(void) updateRows;
-(void) updateRow:(int)visibleIndex;
-(void) updateHeaders:(DXGridRowHeaderSettings*)headerSettings;
-(void) updateHeaderSettings:(DXGridRowHeaderSettings*)headerSettings;
-(void) updateTotalSummary;
-(void) updateTotalSummarySettings:(DXGridTotalSummarySettings*)totalSummarySettings;
-(void) setRowSettings:(DXGridRowSettings*)rowSettings;
-(void) updateViewInfo:(DXGridViewInfo*)viewInfo;
-(void) scrollToRow:(int)index;
-(void) scrollToColumn:(int)index;
-(void) moveRowFrom:(int)index to:(int)newIndex callback:(void (^)(void))callback;
-(void) endRefreshing;
-(void) setAllowCascadeUpdate:(bool)allowCascadeUpdate;
-(void) setAllowPullToRefresh:(bool)isActive;
-(void) setAllowLoadMore:(bool)isActive;
-(void) setShouldRequestCustomCellViewInfo:(bool)should;
-(bool) openEditorInRow:(int)rowIndex andColumnIndex:(int)columnIndex;
-(bool) closeEditor:(bool)applyChanges;
-(void) correctItemsLayout:(int)visibleIndex;
-(void) updateColumnSettings:(NSArray<DXGridColumnSettings*>*)columnSettings andLayoutSettings:(DXGridLayoutSettings*)layoutSettings;

@property DXGridSettings* settings;
@property int focusedRowIndex;
@property (nonatomic, readwrite) bool allowHorizontalVirtualization;
@property (nonatomic, readwrite) bool showFilterRow;
@property (nonatomic, readwrite) double filterRowHeight;
@property (nonatomic, readwrite) bool reduceHeightToContent;

@end

