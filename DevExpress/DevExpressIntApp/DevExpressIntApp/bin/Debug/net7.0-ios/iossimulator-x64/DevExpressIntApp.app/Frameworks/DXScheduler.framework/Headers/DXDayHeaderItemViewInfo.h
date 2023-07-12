#import <Foundation/Foundation.h>
#import <UIkit/UIkit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DXDayHeaderItemViewInfo : NSObject

-(instancetype)initWithBackground:(int)background andPadding:(UIEdgeInsets)padding andBorderColor:(int)borderColor andBorderThickness:(UIEdgeInsets)borderThickness andDay:(NSString *)day
               andDayFont:(nullable UIFont *)dayFont andDayFontColor:(int)dayFontColor andDayTextBackColor:(int)dayTextBackColor andWeekDay:(NSString *)weekDay
               andWeekDayFont:(nullable UIFont *)weekDayFont andWeekDayFontColor:(int)weekDayFontColor andTextSpacing:(double)textSpacing;

@property(readonly) NSString *day;
@property(readonly) NSString *weekDay;
@property(readonly) UIFont *dayFont;
@property(readonly) UIFont *weekDayFont;
@property(readonly) UIColor *dayFontColor;
@property(readonly) UIColor *dayTextBackColor;
@property(readonly) UIColor *weekDayFontColor;
@property(readonly) UIColor *backgroundColor;
@property(readonly) UIColor *borderColor;
@property(readonly) int background;
@property(readonly) UIEdgeInsets borderThickness;
@property(readonly) UIEdgeInsets padding;
@property(readonly) CGFloat textSpacing;

@end

NS_ASSUME_NONNULL_END
