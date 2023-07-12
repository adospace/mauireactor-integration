
#include "DXGridRowViewInfoBase.h"
#include "Enums.h"

NS_ASSUME_NONNULL_BEGIN

@interface DXGridViewInfo : DXGridRowViewInfoBase

-(bool) hasBorders;

@property (readwrite, nonatomic) ScrollBarVisibility scrollBarVisibility;
@property (readwrite, nonatomic) bool isDarkTheme;
@property (readwrite, nonatomic) UIColor* dragPreviewShadowColor;
@property (readwrite, nonatomic) float leftLineThickness;
@property (readwrite, nonatomic) float rightLineThickness;


@end

NS_ASSUME_NONNULL_END
