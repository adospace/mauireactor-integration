#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DXColorStop : NSObject

@property (readonly) UIColor* color;
@property (readonly) double value1;
@property (readonly) double value2;

-(instancetype)initWithColor:(UIColor*)color betweenValue1:(double)value1 andValue2:(double)value2;

@end

NS_ASSUME_NONNULL_END
