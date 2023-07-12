#import <Foundation/Foundation.h>
#import "DXItemViewProviderBase.h"
#import "DXProtocols.h"
#import "DXCellItemViewInfo.h"

@interface DXCellItemViewProvider : DXItemViewProviderBase <XamarinViewProvider>

-(instancetype) initWithItems:(NSArray<DXCellItemViewInfo*>*) items andViewCache:(DXViewCache*)cache;
-(DXCellItemViewInfo*)getViewInfo:(int)index;

@end


@interface DXAllDayCellItemViewProvider : DXCellItemViewProvider

@end
