#import <UIKit/UIKit.h>
#import "DXAlignment.h"
#import "DXPlacement.h"
#import "DXDropdownDelegate.h"

@interface DXDropdownContainer : UIView<UIGestureRecognizerDelegate>

@property(nonatomic, nullable) UIView *contentView;
@property(nonatomic, nullable, copy) UIColor *contentBackgroundColor;
@property(nonatomic) BOOL allowAnimation;
@property(nonatomic) CFTimeInterval animationDuration;
@property(nonatomic) BOOL allowShadow;
@property(nonatomic, nullable, copy) UIColor *shadowColor;
@property(nonatomic) CGFloat shadowRadius;
@property(nonatomic) UIOffset shadowOffset;
@property(nonatomic) BOOL allowScrim;
@property(nonatomic) BOOL closeOnScrimTap;
@property(nonatomic, nullable, copy) UIColor *scrimColor;
@property(nonatomic) CGFloat cornerRadius;
@property(nonatomic) CGFloat minHeight;
@property(nonatomic) CGFloat minWidth;
@property(nonatomic, nullable, weak) id<DXDropdownDelegate> delegate;

@property(nonatomic, nullable, weak) __kindof UIView *placementTarget;
@property(nonatomic) CGRect placementRectangle;
@property(nonatomic) DXDropdownHorizontalAlignment horizontalAlignment;
@property(nonatomic) DXDropdownVerticalAlignment verticalAlignment;
@property(nonatomic) DXPlacement placement;
@property(nonatomic) CGFloat placementVerticalThreshold;
@property(nonatomic) CGFloat placementHorizontalThreshold;
@property(nonatomic) UIEdgeInsets margin;
@property(nonatomic) BOOL isDropdownOpen;
@property(nonatomic) BOOL isLayoutFixed;

-(void)show;
-(void)hide;
-(void)resizeOpenFrame;
-(void)resizeOpenFrameWithPosition;
-(void)addSubview:(nonnull UIView *)view NS_UNAVAILABLE;
-(void)insertSubview:(nonnull UIView *)view belowSubview:(nonnull UIView *)siblingSubview NS_UNAVAILABLE;
-(void)insertSubview:(nonnull UIView *)view aboveSubview:(nonnull UIView *)siblingSubview NS_UNAVAILABLE;
-(void)insertSubview:(nonnull UIView *)view atIndex:(NSInteger)index NS_UNAVAILABLE;

@end

