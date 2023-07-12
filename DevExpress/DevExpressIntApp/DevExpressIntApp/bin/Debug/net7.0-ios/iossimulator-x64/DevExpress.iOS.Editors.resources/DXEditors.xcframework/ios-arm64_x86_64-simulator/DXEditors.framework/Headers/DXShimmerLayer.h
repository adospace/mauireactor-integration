#import <UIKit/UIView.h>

@interface DXShimmerLayer : CALayer

@property(strong, nonatomic) CALayer *contentLayer;
@property(nonatomic) CFTimeInterval waveDuration;
@property(nonatomic) CGFloat waveAngle;
@property(nonatomic) CGFloat waveWidth;
@property(nonatomic) UIColor* waveBackgroundOpacity;
@property(nonatomic) UIColor* waveOpacity;

-(void) startAnimation;
-(void) stopAnimation;

@end
