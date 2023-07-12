#import <Foundation/Foundation.h>
#import <UIkit/UIkit.h>

@interface DXCellItemViewInfo : NSObject

-(instancetype)initWithBackground:(int)background andLeftBorderThickness:(double)leftBorderThickness andBottomBorderThickness:(double)bottomBorderThickness andLeftBorderColor:(int)leftBorderColor
               andBottomBorderColor:(int)bottomBorderColor;

@property(readonly) int background;
@property(readonly) UIColor *backgroundColor;
@property(readonly) double leftBorderThickness;
@property(readonly) double bottomBorderThickness;
@property(readonly) UIColor *leftBorderColor;
@property(readonly) UIColor *bottomBorderColor;

@end
