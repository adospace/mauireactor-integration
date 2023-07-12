#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DXColoredPointInfoBase : NSObject
@property (readonly, nullable) NSArray* pointIndexes;
@end


@interface DXColoredPointInfo : DXColoredPointInfoBase
@property (readonly) double numericArgument;
@property (readonly, nonatomic, nullable) NSDate* dateTimeArgument;
@property (readonly, copy, nonatomic, nullable) NSString* qualitativeArgument;
@property (readonly) double value;
@end


@interface DXColoredStackedPointInfo : DXColoredPointInfo
@property (readonly) double stackedValue;
@property (readonly) double valueInPercent;
@end


@interface DXColoredWeightedPointInfo : DXColoredPointInfo
@property (readonly) double weightPercent;
@end


@interface DXColoredRangePointInfo : DXColoredPointInfoBase
@property (readonly) double argument;
@property (readonly, nonatomic, nullable) NSDate* dateTimeArgument;
@property (readonly, copy, nonatomic, nullable) NSString* qualitativeArgument;
@property (readonly) double highValue;
@property (readonly) double lowValue;
@end

NS_ASSUME_NONNULL_END
