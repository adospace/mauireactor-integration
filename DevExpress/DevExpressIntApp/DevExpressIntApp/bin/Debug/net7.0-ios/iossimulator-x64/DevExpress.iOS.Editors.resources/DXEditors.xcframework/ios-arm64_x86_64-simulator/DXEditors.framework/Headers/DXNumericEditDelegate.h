#import <UIKit/UIKit.h>

@protocol DXNumericEditDelegate<DXTextEditDelegate>

@optional
-(void)didChangeDecimalSeparator;

@end
