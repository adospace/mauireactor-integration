#import <Foundation/Foundation.h>
#import "DXItemViewProviderBase.h"
#import "DXProtocols.h"
#import "DXMonthCellItemViewInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface DXMonthCellItemViewProvider : DXItemViewProviderBase <XamarinViewProvider>

-(instancetype) initWithItems:(NSArray<DXMonthCellItemViewInfo*>*) items andViewCache:(DXViewCache*)cache;

@end

NS_ASSUME_NONNULL_END
