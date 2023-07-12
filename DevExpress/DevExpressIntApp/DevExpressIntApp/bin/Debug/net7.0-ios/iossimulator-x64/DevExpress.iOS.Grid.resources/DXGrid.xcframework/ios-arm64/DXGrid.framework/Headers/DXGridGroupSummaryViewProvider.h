#import "DXGridGroupElementViewProviderBase.h"

@interface DXGridGroupSummaryViewProvider : DXGridGroupElementViewProviderBase

-(instancetype) initWithDataProvider:(id<DXGridDataProvider>)dataProvider
                 andGroupRowViewInfo:(DXGridGroupRowViewInfo*)groupRowViewInfo;

@end
