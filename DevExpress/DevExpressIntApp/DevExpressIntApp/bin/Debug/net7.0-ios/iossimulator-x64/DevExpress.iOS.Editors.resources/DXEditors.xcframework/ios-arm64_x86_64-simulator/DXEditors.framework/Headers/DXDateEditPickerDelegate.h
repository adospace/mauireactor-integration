#import <UIKit/UIKit.h>

@protocol DXDateEditPickerDelegate<NSObject>
@optional
-(void)forceDateChanged;

@required
-(void)updatePickerProperties;
-(void)show;
-(void)dismiss;

@property(nonatomic, readonly) BOOL isFirstResponder;
@property(nonatomic, readonly) BOOL isNativePicker;
@end
