#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DXGrabberView : UIView

@property (nonatomic) int grabberWidth;
@property (nonatomic) int grabberHeight;
@property (nonatomic) int grabberTopOffset;
@property (nonatomic) bool drawGrabber;
@property (nonatomic) UIColor *grabberColor;
@property (nonatomic) UIEdgeInsets padding;

@end

NS_ASSUME_NONNULL_END
