#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DXChartElement.h"

@class DXAxisBase;

@interface DXAxisDisplayPositionBase : DXChartElement

@end

@interface DXAxisDisplayPositionNear : DXAxisDisplayPositionBase

@end

@interface DXAxisDisplayPositionFar : DXAxisDisplayPositionBase
        
@end

@interface DXAxisDisplayPositionAbsolute : DXAxisDisplayPositionBase
@property (readwrite) double value;
@end

@interface DXAxisDisplayPositionRelative : DXAxisDisplayPositionBase
@property (readwrite) double numericPosition;
@property (readwrite) NSDate* dateTimePosition;
@property (readwrite) NSString* qualitativePosition;
@property (readwrite, weak) DXAxisBase* relativeAxis;
@end
