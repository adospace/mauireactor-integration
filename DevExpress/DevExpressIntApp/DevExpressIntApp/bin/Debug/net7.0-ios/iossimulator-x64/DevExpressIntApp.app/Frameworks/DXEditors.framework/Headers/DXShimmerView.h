#import <UIKit/UIKit.h>
#import "DXShimmerLayer.h"

@interface DXShimmerView : UIView

@property (nonatomic, nullable) UIView *contentView;
@property (nonatomic, nullable) UIView *loadingView;
@property(nonatomic) CFTimeInterval waveDuration;
@property(nonatomic) CGFloat waveAngle;
@property(nonatomic) CGFloat waveWidth;
@property(nonatomic, nonnull) UIColor* waveBackgroundOpacity;
@property(nonatomic, nonnull) UIColor* waveOpacity;
@property(nonatomic) BOOL isLoading;

@end
