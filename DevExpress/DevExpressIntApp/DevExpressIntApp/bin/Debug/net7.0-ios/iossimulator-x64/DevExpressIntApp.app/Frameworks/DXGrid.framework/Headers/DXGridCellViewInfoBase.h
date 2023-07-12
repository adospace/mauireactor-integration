#import "DXGridRowViewInfoBase.h"
#import "Enums.h"

@interface DXGridCellViewInfoBase : DXGridRowViewInfoBase

-(instancetype) initWithViewInfo:(DXGridCellViewInfoBase*)viewInfo;

@property (readwrite, nonatomic) UIControlContentHorizontalAlignment horizontalContentAlignment;
@property (readwrite, nonatomic) UIControlContentVerticalAlignment verticalContentAlignment;
@property (readwrite, nonatomic) float leftLineThickness;
@property (readwrite, nonatomic) float rightLineThickness;
@property (readwrite, nonatomic) FixedStyle fixedStyle;
@property (readwrite, nonatomic) bool isDisabled;

+(NSTextAlignment) getTextAlignment:(UIControlContentHorizontalAlignment)contentHorizontalAlignment;

@end
