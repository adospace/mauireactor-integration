#import <Foundation/Foundation.h>
#import "Enums.h"

NS_ASSUME_NONNULL_BEGIN

@interface DXGridLayoutItem : NSObject

-(instancetype)initWithWidth:(double)width
                 andMinWidth:(double)minWidth
                 andMaxWidth:(double)maxWidth
                   andIsStar:(bool)isStar
                   andIsAuto:(bool)isAuto
               andFixedStyle:(FixedStyle)fixedStyle;

@property (readonly) double width;
@property (readonly) double minWidth;
@property (readonly) double maxWidth;
@property (readonly) bool isStar;
@property (readonly) bool isAuto;
@property (readonly) FixedStyle fixedStyle;

@end

NS_ASSUME_NONNULL_END
