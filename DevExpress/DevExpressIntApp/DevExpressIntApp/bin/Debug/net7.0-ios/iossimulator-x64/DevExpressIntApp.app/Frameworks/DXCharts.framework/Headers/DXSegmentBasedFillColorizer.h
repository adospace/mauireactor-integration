#import <Foundation/Foundation.h>
#import "DXColorizerProtocols.h"

NS_ASSUME_NONNULL_BEGIN

@interface DXSegmentBasedFillColorizer : NSObject<DXFillColorizer>

@property (nonatomic) id<DXSegmentColorizer> segmentColorizer;

@end


@interface DXSegmentBasedStackedFillColorizer : NSObject<DXStackedFillColorizer>

@property (nonatomic) id<DXStackedSegmentColorizer> segmentColorizer;

@end


@interface DXSegmentBasedRangeFillColorizer : NSObject<DXRangeFillColorizer>

@property (nonatomic) id<DXSegmentColorizer> segmentColorizer1;
@property (nonatomic) id<DXSegmentColorizer> segmentColorizer2;

@end

NS_ASSUME_NONNULL_END
