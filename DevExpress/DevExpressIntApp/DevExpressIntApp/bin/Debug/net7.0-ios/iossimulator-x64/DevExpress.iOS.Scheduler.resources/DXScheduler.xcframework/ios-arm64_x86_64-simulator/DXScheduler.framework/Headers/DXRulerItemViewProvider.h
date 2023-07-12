#import <Foundation/Foundation.h>
#import "DXItemViewProviderBase.h"
#import "DXProtocols.h"
#import "DXRulerItemViewInfo.h"

@interface DXRulerItemViewProvider : DXItemViewProviderBase<XamarinViewProvider>

-(instancetype) initWithItems:(NSArray<DXRulerItemViewInfo*>*) items andViewCache:(DXViewCache *)cache;

@end

@interface DXRulerHeadItemViewProvider : DXItemViewProviderBase<XamarinViewProvider>

-(instancetype) initWithItems:(DXRulerHeadItemViewInfo*)item andViewCache:(DXViewCache *)cache;

@end

