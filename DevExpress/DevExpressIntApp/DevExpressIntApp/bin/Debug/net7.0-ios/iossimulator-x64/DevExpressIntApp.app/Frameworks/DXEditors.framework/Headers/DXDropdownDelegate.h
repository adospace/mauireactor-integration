#import <Foundation/Foundation.h>

@protocol DXDropdownDelegate<NSObject>

@optional
-(BOOL)dropdownWillOpen;
-(void)dropdownDidOpen;
-(BOOL)dropdownWillClose;
-(void)dropdownDidClose;
-(void)dropdownOpeningAnimationWillStart;
-(void)dropdownOpeningAnimationDidEnd;
-(void)dropdownClosingAnimationWillStart;
-(void)dropdownClosingAnimationDidEnd;
-(void)coerceIsDropdownOpen;

@end
