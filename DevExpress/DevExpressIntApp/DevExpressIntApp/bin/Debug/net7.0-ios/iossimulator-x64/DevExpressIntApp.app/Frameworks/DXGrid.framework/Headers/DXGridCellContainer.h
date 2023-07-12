#import <UIKit/UIKit.h>
#import "Enums.h"

@interface DXGridCellContainer : UIView

@property (readwrite, nonatomic) UIView* content;
@property (readwrite, nonatomic) UIEdgeInsets edgeInsets;
@property (readwrite, nonatomic) UIControlContentHorizontalAlignment horizontalContentAlignment;
@property (readwrite, nonatomic) UIControlContentVerticalAlignment verticalContentAlignment;

-(void) layoutContent:(CGRect)rect;
-(CGSize) getDesiredSize:(CGSize)availableSize;

@end
