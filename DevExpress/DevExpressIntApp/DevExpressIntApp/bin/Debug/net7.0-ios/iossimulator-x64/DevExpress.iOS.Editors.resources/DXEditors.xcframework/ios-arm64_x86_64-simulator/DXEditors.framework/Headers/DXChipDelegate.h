@class DXChip;
#import "DXIconSettings.h"

@protocol DXChipDelegate<NSObject>

@optional
-(void)didTap:(DXChip*) chip;
-(void)didConfirmedTap:(DXChip*) chip;
-(void)didDoubleTap:(DXChip*) chip;
-(void)didLongPress:(DXChip*) chip;
-(void)clearIconDidTap:(DXChip*) chip andIcon:(DXIconSettings *) icon;
-(void)requestLayout;
-(void)requestLayoutWithAnimation:(CGFloat) animationDuration;
-(void)onLayoutChanged;
@end
