#import <Foundation/Foundation.h>
#import "DXGridTotalSummaryItemViewInfo.h"
#import "ViewProviders.h"

NS_ASSUME_NONNULL_BEGIN

@interface DXGridTotalSummarySettings : NSObject

-(instancetype) initWithShowTotalSummary:(bool)showTotalSummary
                       andPanelHeight:(double)panelHeight
             andTotalSummaryItemViewInfo:(NSArray<DXGridTotalSummaryItemViewInfo*>*)viewInfo
                         andViewProviders:(NSArray<id<DXGridViewProvider>>*)viewProviders;

@property (readonly) bool showTotalSummary;
@property (readonly) double panelHeight;
@property (readonly) NSArray<DXGridTotalSummaryItemViewInfo*>* viewInfo;
@property (readonly) NSArray<id<DXGridViewProvider>>* viewProviders;

@end

NS_ASSUME_NONNULL_END
