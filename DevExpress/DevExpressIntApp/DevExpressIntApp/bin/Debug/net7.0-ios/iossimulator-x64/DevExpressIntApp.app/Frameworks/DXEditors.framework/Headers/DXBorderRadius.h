#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface DXBorderRadius : NSObject

-(instancetype)initWithRadius:(CGFloat)radius;
-(instancetype)initWithTopLeft:(CGFloat)topLeft andTopRight:(CGFloat)topRight andBottomLeft:(CGFloat)bottomLeft andBottomRight:(CGFloat)bottomRight;

@property (nonatomic) CGFloat topLeftCornerRadius;
@property (nonatomic) CGFloat topRightCornerRadius;
@property (nonatomic) CGFloat bottomLeftCornerRadius;
@property (nonatomic) CGFloat bottomRightCornerRadius;

@end

