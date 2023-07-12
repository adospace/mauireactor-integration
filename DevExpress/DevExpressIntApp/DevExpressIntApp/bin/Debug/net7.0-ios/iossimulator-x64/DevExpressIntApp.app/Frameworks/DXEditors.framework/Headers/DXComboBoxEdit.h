#import <UIKit/UIKit.h>
#import "DXTextEditBase.h"
#import "DXItemsEditDelegate.h"
#import "DXItemsEditViewProvider.h"
#import "DXDropdownDelegate.h"
#import "DXDataDelegate.h"
#import "DXItemsEditBase.h"

@interface DXComboBoxEdit : DXItemsEditBase

@property(nonatomic) BOOL showDropdownIcon;
@property(nullable, nonatomic, readonly) DXIconSettings *dropdownIcon;
@property(nullable, nonatomic) UIImage *dropdownImage;
@property(nullable, nonatomic) UIImage *closeDropdownImage;
@property(nonatomic) BOOL allowFilter;

@end
