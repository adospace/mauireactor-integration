#import <Foundation/Foundation.h>
#import "DXTextEditBase.h"
#import "DXDateEditDelegate.h"
#import "DXDateEditPickerDelegate.h"

@interface DXPickerEditBase : DXTextEditBase

@property(nullable, nonatomic) NSDate *date;
@property(nullable, nonatomic) NSDate *minDate;
@property(nullable, nonatomic) NSDate *maxDate;
@property(nullable, nonatomic) NSString *localeIdentifier;
@property(nullable, nonatomic, readonly) DXIconSettings *pickerIcon;
@property(nonatomic) BOOL showPickerIcon;
@property(nonatomic) BOOL setDateOnShowDialog;
@property(nonatomic, nullable, weak) id<DXDateEditPickerDelegate> datePickerDelegate;
@property(nonatomic, nullable, weak) id<DXDateEditDelegate> dateDelegate;

-(void)refreshDisplayDate;
-(void)raiseDateChanged;
-(void)raiseMinDateChanged;
-(void)raiseMaxDateChanged;
-(void)setLocale;
-(void)setCurrentLocale;
-(void)forceDateChanged;
-(nullable NSString *)getSettingLocaleIdentifier;

-(void)showDateDialog;
-(void)hideDateDialog;

@end
