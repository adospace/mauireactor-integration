#import <Foundation/Foundation.h>
#import "DXProtocols.h"
#import "DXItemViewProviderBase.h"

@class DXDayHeaderItemViewInfo;


@interface DXDayHeaderItemViewProvider : DXItemViewProviderBase<XamarinViewProvider>

-(instancetype) initWithItems:(NSArray<DXDayHeaderItemViewInfo*>*) items andViewCache:(DXViewCache*)cache;

@end
