#import "DXControlLayoutOwner.h"

@protocol DXChipLayoutOwner<DXControlLayoutOwner>

@property (nonatomic, readonly) DXHorizontalAlignment horizontalContentAlignment;
@property (nonatomic, readonly) DXVerticalAlignment verticalContentAlignment;
@property (nonatomic, readonly) UIEdgeInsets contentPadding;
@property (nonatomic, nullable, readonly) DXBorderRadius* borderRadius;

@property (nonatomic, nullable, readonly) UIView* contentView;

@property (nonatomic, readonly) CGSize iconSize;
@property (nonatomic, readonly) CGFloat iconIndent;

@property (nonatomic, readonly) CGSize clearIconSize;
@property (nonatomic, readonly) CGFloat clearIconIndent;

@property (nonatomic, readonly) BOOL isSelected;
@property (nonatomic, readonly) CGSize checkedIconSize;
@property (nonatomic, readonly) BOOL isCheckedIconVisible;

@end
