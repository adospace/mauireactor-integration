#import <Foundation/Foundation.h>
#import "DXColorizerProtocols.h"

NS_ASSUME_NONNULL_BEGIN

@interface DXGradientPointBasedSegmentColorizer : NSObject<DXSegmentColorizer>

@property (nonatomic) id<DXPointColorizer> pointColorizer;

@end


@interface DXGradientPointBasedStackedSegmentColorizer : NSObject<DXStackedSegmentColorizer>

@property (nonatomic) id<DXStackedPointColorizer> pointColorizer;

@end

NS_ASSUME_NONNULL_END
