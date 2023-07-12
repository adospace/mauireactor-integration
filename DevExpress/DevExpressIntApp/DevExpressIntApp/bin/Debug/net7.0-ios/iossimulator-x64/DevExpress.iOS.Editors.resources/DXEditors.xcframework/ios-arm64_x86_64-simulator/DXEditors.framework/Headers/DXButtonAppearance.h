#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface DXButtonAppearance : NSObject<NSCopying>

@property (nullable, nonatomic) UIColor *backgroundColor;

@property (nullable, nonatomic) UIColor *borderColor;
@property (nonatomic) CGFloat borderWidth;

@property (nonatomic) CGFloat shadowRadius;
@property (nonatomic) CGSize shadowOffset;
@property (nonatomic, nullable) UIColor *shadowColor;
@property (nonatomic) BOOL allowShadow;

@property (nullable, nonatomic) UIColor *textColor;
@property (nullable, nonatomic) UIFont *font;

@end
