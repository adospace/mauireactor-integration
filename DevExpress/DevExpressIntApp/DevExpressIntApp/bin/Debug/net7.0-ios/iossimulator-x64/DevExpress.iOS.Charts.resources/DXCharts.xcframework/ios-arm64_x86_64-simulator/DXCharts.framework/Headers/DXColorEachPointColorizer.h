#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DXColorizerProtocols.h"
#import "DXPalette.h"

NS_ASSUME_NONNULL_BEGIN

@interface DXColorEachPointColorizer : NSObject<DXPointColorizer, DXStackedPointColorizer, DXWeightedPointColorizer, DXRangePointColorizer>

@property (readwrite, nullable) DXPalette* palette;

@end

NS_ASSUME_NONNULL_END
