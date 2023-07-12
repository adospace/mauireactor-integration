#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface DXCellItem : NSObject

@property (readwrite) double leftBorderThickness;
@property (readwrite) double bottomBorderThickness;
@property (readwrite, nonatomic) UIColor* leftBorderColor;
@property (readwrite, nonatomic) UIColor* bottomBorderColor;
@property (readwrite, nonatomic) UIColor* backColor;            // TODO remove

@end
