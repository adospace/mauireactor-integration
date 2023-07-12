#import <Foundation/Foundation.h>
#import <UIkit/UIkit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DXRulerItemViewInfo : NSObject

-(instancetype)initWithBackground:(int)background andPadding:(UIEdgeInsets)padding andDelimiterWidth:(double)delimiterWidth andDelimiterHeight:(double)delimiterHeight
               andDelimiterColor:(int)delimiterColor andTextFont:(nullable UIFont *)textFont andTextColor:(int)textColor andText:(NSString *)text;

@property(readonly) int background;
@property(readonly) UIColor *backgroundColor;
@property(readonly) UIEdgeInsets padding;
@property(readonly) double delimiterWidth;
@property(readonly) double delimiterHeight;
@property(readonly) UIColor *delimiterColor;
@property(readonly) UIFont *textFont;
@property(readonly) UIColor *textColor;
@property(readonly) NSString *text;

@end


@interface DXRulerHeadItemViewInfo : NSObject

-(instancetype)initWithBackground:(int)background;

@property(readonly) int background;
@property(readonly) UIColor *backgroundColor;

@end

NS_ASSUME_NONNULL_END
