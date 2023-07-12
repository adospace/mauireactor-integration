#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "DXGridDataProvider.h"
#import "DXGridGroupRowViewInfo.h"
#import "ViewProviders.h"

@interface DXGridGroupRowContentViewProvider : NSObject

-(instancetype) initWithDataProvider:(id<DXGridDataProvider>)dataProvider
                 andGroupRowViewInfo:(DXGridGroupRowViewInfo*)groupRowViewInfo
           andGroupValueViewProvider:(id<DXGridReusableViewProvider>)groupValueViewProvider
         andGroupSummaryViewProvider:(id<DXGridReusableViewProvider>)groupSummaryViewProvider;

@property (readonly) id<DXGridReusableViewProvider> groupValueViewProvider;
@property (readonly) id<DXGridReusableViewProvider> groupSummaryViewProvider;

@end
