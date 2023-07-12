#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DXCalendarCell : UIControl
@property(nonatomic) UIEdgeInsets contentPadding;
@property(nonatomic, nullable) NSString *text;
//TODO REMOVE may be
@property(nonatomic) BOOL isEllipseVisible;
@property(nonatomic) BOOL isCircleBackground;
@property(nonatomic) UIColor *ellipseBackgroundColor;
@property(nonatomic) UIColor *pressedEllipseBackgroundColor;
@property(nonatomic) UIColor *textColor;
@property(nullable, nonatomic) UIFont *font;

@end

NS_ASSUME_NONNULL_END
