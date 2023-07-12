#import "DXTextEditBase.h"

@interface DXPasswordEdit : DXTextEditBase

@property(nullable, nonatomic, readonly) DXIconSettings *passwordIcon;
@property(nullable, nonatomic) UIImage *passwordShowImage;
@property(nullable, nonatomic) UIImage *passwordHideImage;
@property(nonatomic) BOOL showPassword;
@property(nonatomic) DXIconMode passwordIconVisibility;

// From UITextInputTraits to specify availability.
@property(nullable,nonatomic,copy) UITextInputPasswordRules *passwordRules API_AVAILABLE(ios(12.0));

@end
