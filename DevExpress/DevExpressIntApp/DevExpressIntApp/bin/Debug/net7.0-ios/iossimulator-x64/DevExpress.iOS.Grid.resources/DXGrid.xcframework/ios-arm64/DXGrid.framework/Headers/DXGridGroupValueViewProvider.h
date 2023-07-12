#import "DXGridGroupElementViewProviderBase.h"

@interface DXGridGroupValueViewProvider : DXGridGroupElementViewProviderBase

-(instancetype) initWithDataProvider:(id<DXGridDataProvider>)dataProvider
                 andGroupRowViewInfo:(DXGridGroupRowViewInfo*)groupRowViewInfo;

@end
