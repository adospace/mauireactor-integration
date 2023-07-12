#import "DXPickerEditBase.h"
#import "DXDateEditDisplayTextProvider.h"
@interface DXDateEdit : DXPickerEditBase

@property(nullable, nonatomic, readonly) DXIconSettings *dateIcon;
@property(nullable, nonatomic) NSString *format;
@property(nullable, nonatomic) NSObject<DXDateEditDisplayTextProvider> *displayProvider;

-(void)setCurrentDate:(int)year :(int)month :(int)day;
-(void)clearCurrentDate;
-(void)setMinDate:(int)year :(int)month :(int)day;
-(void)setMaxDate:(int)year :(int)month :(int)day;

@end
