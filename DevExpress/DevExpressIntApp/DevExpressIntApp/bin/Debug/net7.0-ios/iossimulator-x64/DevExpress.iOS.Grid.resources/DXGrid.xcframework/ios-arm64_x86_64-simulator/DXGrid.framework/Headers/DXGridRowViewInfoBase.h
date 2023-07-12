#import <Foundation/Foundation.h>
#import <UIkit/UIkit.h>
#import "DXGridViewInfoBase.h"

NS_ASSUME_NONNULL_BEGIN

@interface DXGridRowViewInfoBase : DXGridViewInfoBase

-(instancetype) initWithViewInfo:(DXGridRowViewInfoBase*)viewInfo;

@property (readwrite, nonatomic) UIColor* borderColor;
@property (readwrite, nonatomic) UIColor* bottomBorderColor;
@property (readwrite, nonatomic) UIEdgeInsets edgeInsets;
@property (readwrite, nonatomic) float topLineThickness;
@property (readwrite, nonatomic) float bottomLineThickness;

@end

NS_ASSUME_NONNULL_END
