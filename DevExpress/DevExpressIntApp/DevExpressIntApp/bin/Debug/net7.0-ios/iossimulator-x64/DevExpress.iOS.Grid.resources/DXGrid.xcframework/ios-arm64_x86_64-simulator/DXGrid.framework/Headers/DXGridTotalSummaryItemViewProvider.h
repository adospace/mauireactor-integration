#import <UIKit/UIKit.h>
#import "DXGridTotalSummaryItemViewInfo.h"
#import "DXGridDataProvider.h"
#import "ViewProviders.h"

NS_ASSUME_NONNULL_BEGIN

@interface DXGridTotalSummaryItemViewProvider : NSObject <DXGridViewProvider>

-(instancetype) initWithViewInfo:(DXGridTotalSummaryItemViewInfo*)viewInfo
                 andDataProvider:(id<DXGridDataProvider>)dataProvider
                 andVisibleIndex:(int)visibleIndex;

@end

NS_ASSUME_NONNULL_END
