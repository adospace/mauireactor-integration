#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DXSeriesData.h"
#import "DXColorizerProtocols.h"
#import "DXColorStop.h"

NS_ASSUME_NONNULL_BEGIN

@interface DXBandPointColorizerBase : DXChartElement

-(void)addColorStopValue:(DXColorStop*)value;
-(void)removeColorStopValue:(DXColorStop*)value;
-(void)removeAll;

@end


@interface DXValueBandPointColorizer : DXBandPointColorizerBase<DXPointColorizer, DXStackedPointColorizer, DXWeightedPointColorizer>

@end


@interface DXStackedValueBandPointColorizer : DXBandPointColorizerBase<DXStackedPointColorizer>

@end


@interface DXRangeValueBandPointColorizer : DXBandPointColorizerBase<DXRangePointColorizer>

@property (nonatomic) DXRangeSeriesValueLevel valueLevel;

@end


@interface DXWeightedValueBandPointColorizer : DXBandPointColorizerBase<DXWeightedPointColorizer>

@end


@interface DXCustomValueBandPointColorizer : DXBandPointColorizerBase<DXPointColorizer, DXStackedPointColorizer, DXWeightedPointColorizer, DXRangePointColorizer>

@property (nonatomic) id<DXCustomColorizerNumericValueProvider> valueProvider;

@end


NS_ASSUME_NONNULL_END
