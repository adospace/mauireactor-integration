#import <Foundation/Foundation.h>
#import "DXGridGroupInfo.h"

NS_ASSUME_NONNULL_BEGIN

@protocol DXGridDataProvider <NSObject>

-(DXGridGroupInfo*) getGroupInfo:(int)visibleIndex;
-(NSArray<NSString*>*) getTotalSummary:(int)columnVisibleIndex;
-(int) getRowCount;
-(bool) isGroupRow:(int)visibleIndex;

@end

@protocol DXGridCellDataProvider <NSObject>

-(NSObject*) getValueOfField:(NSString*)fieldName withRowVisibleIndex:(int)visibleIndex;
-(NSString*) getDisplayTextOfField:(NSString*)fieldName withRowVisibleIndex:(int)visibleIndex;
-(NSString*) getDisplayTextOfValue:(NSObject*)value ofField:(NSString*)fieldName withRowVisibleIndex:(int)visibleIndex;
-(NSString*) setValueOfField:(NSString*)fieldName withRowVisibleIndex:(int)visibleIndex value:(NSObject*)value;
-(NSString*) getErrorOfValue:(NSObject*)value ofField:(NSString*)fieldName withRowVisibleIndex:(int)visibleIndex;

@end



NS_ASSUME_NONNULL_END

