#import <Foundation/Foundation.h>
#import <UIkit/UIkit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DXTimeIndicatorViewInfo : NSObject

@property(readonly) UIColor *color;
@property(readonly) double markerSize;
@property(readonly) int lineThickness;

-(instancetype)initWithColor:(int)color andMarkerSize:(double)markerSize andLineThickness:(double)lineThickness;

@end

NS_ASSUME_NONNULL_END
