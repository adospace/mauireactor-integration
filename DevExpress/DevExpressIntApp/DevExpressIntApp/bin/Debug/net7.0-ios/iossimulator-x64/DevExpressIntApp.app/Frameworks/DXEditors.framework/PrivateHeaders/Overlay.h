#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Overlay : NSObject

+(UIView*) getOverlay;
+(CGRect) calcFrame:(CGRect)bounds;

@end

NS_ASSUME_NONNULL_END
