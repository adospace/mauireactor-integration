#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Enums.h"

NS_ASSUME_NONNULL_BEGIN

@interface DrawingHelper : NSObject

+(void) drawCellBorders:(CGRect)cellFrame
              withColor:(UIColor*)color
         andBottomColor:(UIColor*)bottomColor
  andRightLineThickness:(float)rightLineThickness
   andLeftLineThickness:(float)leftLineThickness
    andTopLineThickness:(float)topLineThickness
 andBottomLineThickness:(float)bottomLineThickness;
+(void) drawBorderBetween:(CGPoint)point1 and:(CGPoint)point2 withColor:(UIColor*)color andThickness:(int)thickness;

@end

NS_ASSUME_NONNULL_END
