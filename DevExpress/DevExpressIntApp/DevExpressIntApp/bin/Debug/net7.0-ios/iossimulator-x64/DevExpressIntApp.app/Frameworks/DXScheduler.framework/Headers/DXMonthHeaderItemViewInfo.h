#import <Foundation/Foundation.h>
#import <UIkit/UIkit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DXMonthHeaderItemViewInfo : NSObject

-(instancetype)initWithBackground:(int)backColor andWeekDayText:(NSString *)weekDayText andWeekDayFont:(UIFont *)weekDayFont andWeekDayFontColor:(int)weekDayColor
               andBorderColor:(int)border andBorderThickness:(UIEdgeInsets)borders andPadding:(UIEdgeInsets)paddings;

@property(readonly) int background;
@property(readonly) UIColor *backgroundColor;
@property(readonly) NSString *weekDay;
@property(readonly) UIFont *weekDayFont;
@property(readonly) UIColor *weekDayFontColor;
@property(readonly) UIColor *borderColor;
@property(readonly) UIEdgeInsets borderThickness;
@property(readonly) UIEdgeInsets padding;

@end

NS_ASSUME_NONNULL_END
