#import <Foundation/Foundation.h>

@protocol DXDateEditDisplayTextProvider<NSObject>

@property(strong, nonatomic, nullable) NSString *displayFormat;
@property(strong, nonatomic, nullable) NSDate *value;
@property(strong, nonatomic, nullable) NSString *formattedText;

-(nullable NSString *)getFormattedText:(int) year : (int) month : (int)dayOfMonth;

@end
