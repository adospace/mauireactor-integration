#import <UIKit/UIKit.h>
#import "DXCornerMode.h"
#import "DXBorderMode.h"
#import "DXAlignment.h"
#import "DXIconSettings.h"
#import "PublicEnums.h"
#import "DXButtonAppearance.h"
#import "DXBorderRadius.h"
#import "DXButtonDelegate.h"
#import "IButtonLayoutDataProvider.h"


@interface DXButton : UIControl <IButtonLayoutDataProvider>

@property(nonatomic, weak, nullable) id<DXButtonDelegate> delegate;

@property(nonatomic) BOOL allowAnimation;
@property(nonatomic) BOOL allowRippleEffect;

@property(nonatomic, nullable) UIView *contentView;
@property(nonatomic, nullable) NSString *text;
@property(nonatomic) BOOL textAllowWrapping;

@property(nonatomic, nullable, readonly) DXIconSettings *icon;
@property(nonatomic) BOOL isIconVisible;

@property(nonatomic, nonnull) DXBorderRadius *borderRadius;
@property(nonatomic) DXCornerMode cornerMode;

@property(nonatomic, nonnull) DXButtonAppearance *normalAppearance;
@property(nonatomic, nonnull) DXButtonAppearance *focusedAppearance;
@property(nonatomic, nonnull) DXButtonAppearance *pressedAppearance;
@property(nonatomic, nonnull) DXButtonAppearance *disabledAppearance;


@end

