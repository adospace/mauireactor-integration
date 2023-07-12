#import <Foundation/Foundation.h>
#import "DXItemViewProviderBase.h"
#import "DXProtocols.h"
#import "DXMonthHeaderItemViewInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface DXMonthHeaderItemViewProvider : DXItemViewProviderBase <XamarinViewProvider>

-(instancetype) initWithItems:(NSArray<DXMonthHeaderItemViewInfo*>*) items andViewCache:(DXViewCache*)cache;

@end

NS_ASSUME_NONNULL_END
