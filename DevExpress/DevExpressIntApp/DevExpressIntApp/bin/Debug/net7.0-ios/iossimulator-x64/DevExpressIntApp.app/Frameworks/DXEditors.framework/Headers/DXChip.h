#import <UIKit/UIKit.h>
#import "DXCornerMode.h"
#import "DXBorderMode.h"
#import "DXAlignment.h"
#import "DXIconSettings.h"
#import "PublicEnums.h"
#import "DXButtonAppearance.h"
#import "DXBorderRadius.h"
#import "DXChipLayoutOwner.h"
#import "DXChipDelegate.h"

@interface DXChip : UIControl<DXChipLayoutOwner>

@property(nonatomic, nullable, weak) id<DXChipDelegate> delegate;
@property(nonatomic, nullable, weak) id<DXChipDelegate> internalDelegate;

@property(nonatomic) BOOL allowAnimation;
@property(nonatomic) BOOL allowRippleEffect;
@property(nonatomic) BOOL allowFrameAnimation;
@property(nonatomic) BOOL allowRoundedIcon;

@property(nonatomic) DXHorizontalAlignment horizontalContentAlignment;
@property(nonatomic) DXVerticalAlignment verticalContentAlignment;

@property(nonatomic, nullable) UIView *contentView;
@property(nonatomic, nullable) NSString *text;
@property(nonatomic) BOOL textAllowWrapping;
@property(nonatomic) BOOL isSelected;

//Icon
@property(nonatomic, nullable, readonly) DXIconSettings *icon;
@property(nonatomic, readwrite) CGSize iconSize;
@property(nonatomic, nullable, readwrite) UIImage *iconImage;
@property(nonatomic) CGFloat iconIndent;
@property(nonatomic) BOOL isIconVisible;

//ClearIcon
@property(nonatomic, nullable, readonly) DXIconSettings *clearIcon;
@property(nonatomic, nullable, readwrite) UIImage *clearIconImage;
@property(nonatomic) CGFloat clearIconIndent;
@property(nonatomic) BOOL isClearIconVisible;

//CheckedIcon
@property(nonatomic, nullable, readonly) DXIconSettings *checkedIcon;
@property(nonatomic, nullable, readwrite) UIImage *checkedIconImage;
@property(nonatomic) BOOL isCheckedIconVisible;

@property(nonatomic, nullable) DXBorderRadius *borderRadius;
@property(nonatomic) UIEdgeInsets contentPadding;

@property(nonatomic, nonnull) DXButtonAppearance *normalAppearance;
@property(nonatomic, nonnull) DXButtonAppearance *focusedAppearance;
@property(nonatomic, nonnull) DXButtonAppearance *pressedAppearance;
@property(nonatomic, nonnull) DXButtonAppearance *disabledAppearance;

@property(nonatomic, nonnull) DXButtonAppearance *selectedAppearance;
@property(nonatomic, nonnull) DXButtonAppearance *selectedFocusedAppearance;
@property(nonatomic, nonnull) DXButtonAppearance *selectedPressedAppearance;
@property(nonatomic, nonnull) DXButtonAppearance *selectedDisabledAppearance;

-(void) requestLayout;

@end

