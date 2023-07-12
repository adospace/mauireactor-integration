#import "DXPickerEditBase.h"
#import "DXTimeFormatMode.h"

@interface DXTimeEdit : DXPickerEditBase

@property(nullable, nonatomic, readonly) DXIconSettings *timeIcon;
@property(nonatomic) DXTimeFormatMode timeFormatMode;

-(void)setTime:(int)hour : (int)minute;
-(void)clearTime;

@end
