#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "DXButtonAppearance.h"

#import "DXCornerMode.h"
#import "DXBorderMode.h"

#import "PublicEnums.h"

@interface BackgroundLayerManager : NSObject

@property (nonatomic, readonly) NSArray *layers;
@property (nonatomic, readonly) CGRect frame;

-(instancetype)init;
-(void)setFrame:(CGRect)frame animate:(BOOL) animate;
-(void)applyAppearance:(DXButtonAppearance *)appearance;
-(void)applyAppearanceWithToggleEffect:(DXButtonAppearance *)appearance;
-(void)applyAppearanceWithRippleEffect:(DXButtonAppearance *)appearance withTouchLocation:(CGPoint)touchLocation;
@end
