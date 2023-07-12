#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DXColorizerProtocols.h"
#import "DXColoredPointInfo.h"
#import "DXCustomLegendItem.h"

NS_ASSUME_NONNULL_BEGIN


@protocol DXCustomPointColorizer <DXPointColorizer>

-(UIColor*)getColor:(DXColoredPointInfo*)info;
-(nullable id<DXLegendItemProvider>)getLegendItemProvider;

@end


@protocol DXStackedCustomPointColorizer <DXStackedPointColorizer>

-(UIColor*)getColor:(DXColoredStackedPointInfo*)info;
-(nullable id<DXLegendItemProvider>)getLegendItemProvider;

@end


@protocol DXWeightedCustomPointColorizer <DXWeightedPointColorizer>

-(UIColor*)getColor:(DXColoredWeightedPointInfo*)info;
-(nullable id<DXLegendItemProvider>)getLegendItemProvider;

@end


@protocol DXRangeCustomPointColorizer <DXRangePointColorizer>

-(UIColor*)getColor:(DXColoredRangePointInfo*)info;
-(nullable id<DXLegendItemProvider>)getLegendItemProvider;

@end


@protocol DXIndexBasedCustomPointColorizer <DXPointColorizer, DXStackedPointColorizer, DXWeightedPointColorizer, DXRangePointColorizer>

-(UIColor*)getColorByIndex:(int)index;
-(nullable id<DXLegendItemProvider>)getLegendItemProvider;

@end


NS_ASSUME_NONNULL_END
