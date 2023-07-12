#import <Foundation/Foundation.h>
#import <UIkit/UIkit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DXMonthCellItemViewInfo : NSObject

-(instancetype)initWithBackground:(int)backColor andLeftBorderThickness:(double)leftThickness andBottomBorderThickness:(double)bottomThickness andLeftBorderColor:(int)leftColor
               andBottomBorderColor:(int)bottomColor andDayText:(NSString *)dayText andDayFont:(nullable UIFont *)dayFont andTextColor:(int)dayTextColor andTextBackColor:(int)dayTextBackColor
               andPadding:(UIEdgeInsets)padding andShowMoreButton:(bool)displayMoreButton;

@property(readonly) int background;
@property(readonly) UIColor *backgroundColor;
@property(readonly) double leftBorderThickness;
@property(readonly) double bottomBorderThickness;
@property(readonly) UIColor *leftBorderColor;
@property(readonly) UIColor *bottomBorderColor;
@property(readonly) NSString *text;
@property(readonly) UIFont *font;
@property(readonly) UIColor *textColor;
@property(readonly) UIColor *textBackColor;
@property(readonly) UIEdgeInsets textPadding;
@property(readonly) bool showMoreButton;

@end

NS_ASSUME_NONNULL_END
