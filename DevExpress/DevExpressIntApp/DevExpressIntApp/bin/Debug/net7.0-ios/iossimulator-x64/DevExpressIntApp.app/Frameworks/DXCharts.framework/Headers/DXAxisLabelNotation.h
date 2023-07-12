#import "DXChartElement.h"

typedef NS_ENUM(NSInteger, DXScientificNotation) {
    DXAxisLabelScientificNotationNone = 0,
    DXAxisLabelScientificNotationLogarithmic = 1,
    DXAxisLabelScientificNotationE = 2,
    DXAxisLabelScientificNotationNormalized = 3
};

@interface DXAxisLabelNotationBase : DXChartElement

@end

@interface DXAxisLabelEngineeringNotation : DXAxisLabelNotationBase

@end

@interface DXAxisLabelScientificNotation : DXAxisLabelNotationBase
@property (readwrite) DXScientificNotation scientificNotation;
@end
