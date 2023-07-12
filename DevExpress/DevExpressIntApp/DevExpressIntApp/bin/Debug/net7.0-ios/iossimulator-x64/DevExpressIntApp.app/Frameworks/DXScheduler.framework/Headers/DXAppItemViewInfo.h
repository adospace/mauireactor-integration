#import <Foundation/Foundation.h>
#import <UIkit/UIkit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DXAppItemViewInfo : NSObject

-(instancetype)initWithBackground:(int)background andPadding:(UIEdgeInsets)padding andBorderColor:(int)borderColor andBorderThickness:(UIEdgeInsets)borderThickness andStatusWidth:(double)statusWidth
               andStatusColor:(int)statusColor andTextFont:(nullable UIFont *)textFont andTextColor:(int)textColor andText:(NSString *)text andTintColor:(int)tintColor;

@property(readonly) int background;
@property(readonly) UIColor *backgroundColor;
@property(readonly) UIColor *borderColor;
@property(readonly) UIEdgeInsets borderThickness;
@property(readonly) UIEdgeInsets padding;

@property(readonly) double statusWidth;
@property(readonly) UIColor *statusColor;
@property(readonly) UIFont *textFont;
@property(readonly) UIColor *textColor;
@property(readonly) NSString *text;
@property(readonly) UIColor *iconTintColor;

@property(readwrite, nonatomic) bool showReminderImage;
@property(readwrite, nonatomic) bool showRecurrenceImage;
@property(readwrite, nonatomic) bool showChangedRecurrenceImage;

@end

NS_ASSUME_NONNULL_END
