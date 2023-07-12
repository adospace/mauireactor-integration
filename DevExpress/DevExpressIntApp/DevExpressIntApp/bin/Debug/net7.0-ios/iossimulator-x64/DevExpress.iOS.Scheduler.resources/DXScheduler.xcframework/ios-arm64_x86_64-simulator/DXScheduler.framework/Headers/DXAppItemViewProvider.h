#import <Foundation/Foundation.h>
#import "DXItemViewProviderBase.h"
#import "DXProtocols.h"
#import "DXAppItemViewInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface DXAppItemViewProvider : DXItemViewProviderBase <XamarinViewProvider>

-(instancetype) initWithItems:(NSArray<DXAppItemViewInfo*>*) items andViewCache:(DXViewCache*)cache;
-(DXAppItemViewInfo*)getViewInfo:(int)index;

@end


@interface DXAllDayAppItemViewProvider : DXAppItemViewProvider

@end

NS_ASSUME_NONNULL_END
