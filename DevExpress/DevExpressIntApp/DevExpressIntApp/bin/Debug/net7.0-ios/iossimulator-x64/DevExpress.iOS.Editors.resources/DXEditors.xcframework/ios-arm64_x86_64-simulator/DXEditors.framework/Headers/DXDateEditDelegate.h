#import <Foundation/Foundation.h>

@class DXPickerEditBase;

@protocol DXDateEditDelegate<NSObject>

@optional
-(void)dateEditDidChangeTime:(nonnull DXPickerEditBase *)dateEdit hour:(int)hour minute:(int)minute;
-(void)dateEditDidChangeDate:(nonnull DXPickerEditBase *)dateEdit year:(int)year month:(int)month day:(int)day;
-(void)dateEditDidChangeMinDate:(nonnull DXPickerEditBase *)dateEdit minDateYear:(int)year minDateMonth:(int)month minDateDay:(int)day;
-(void)dateEditDidChangeMaxDate:(nonnull DXPickerEditBase *)dateEdit maxDateYear:(int)year maxDateMonth:(int)month maxDateDay:(int)day;
@end

