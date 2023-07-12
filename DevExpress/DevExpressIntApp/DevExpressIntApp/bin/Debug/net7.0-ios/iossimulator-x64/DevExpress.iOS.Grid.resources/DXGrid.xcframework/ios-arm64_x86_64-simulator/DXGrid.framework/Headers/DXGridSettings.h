#import <Foundation/Foundation.h>
#import "DXGridTotalSummarySettings.h"
#import "DXGridAction.h"

NS_ASSUME_NONNULL_BEGIN

@class DXGridRowSettings;
@class DXGridColumnSettings;
@class DXGridRowHeaderSettings;
@class DXGridLayoutSettings;

@interface DXGridSettings : NSObject

-(instancetype) initWithRowSettings:(DXGridRowSettings*)rowSettings
                  andColumnSettings:(NSArray<DXGridColumnSettings*>*)columnSettings
                  andHeaderSettings:(DXGridRowHeaderSettings*)headerSettings
            andTotalSummarySettings:(DXGridTotalSummarySettings*)totalSummarySettings
                    andDataProvider:(id)dataProvider
              andAllowCascadeUpdate:(bool)allowCascadeUpdate
        andAllowCascadeTreeCreation:(bool)allowCascadeTreeCreation
                      andGridAction:(id<DXGridAction>)gridActionDelegate;

@property DXGridRowSettings* rowSettings;
@property DXGridRowHeaderSettings* headerSettings;
@property DXGridTotalSummarySettings* totalSummarySettings;
@property (readonly) NSArray<DXGridColumnSettings*>* columnSettings;
@property (readonly) id<DXGridAction> gridActionDelegate;

@property (readonly) id dataProvider;
@property bool allowCascadeUpdate;
@property (readonly) bool allowCascadeTreeCreation;
@property bool allowPullToRefresh;
@property bool allowLoadMore;
@property DXGridLayoutSettings* layoutSettings;

@end

NS_ASSUME_NONNULL_END
