#import "DXControlLayoutOwner.h"

@protocol IButtonLayoutDataProvider<DXControlLayoutOwner>

-(CGSize)getIconSize;
@property (nonatomic) CGFloat iconIndent;
@property (nonatomic) DXIconHorizontalPosition iconHorizontalPosition;
@property (nonatomic) DXHorizontalAlignment contentHorizontalAlignment;
@property (nonatomic) DXVerticalAlignment contentVerticalAlignment;
@property (nonatomic) UIEdgeInsets contentPadding;

@end
