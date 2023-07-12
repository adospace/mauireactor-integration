#import <UIKit/UIKit.h>

@class DXButton;

@protocol DXButtonDelegate<NSObject>

@optional
-(void)buttonDidPressed:(nonnull DXButton *)button;
-(void)buttonDidReleased:(nonnull DXButton *)button;
-(void)buttonDidCancelled:(nonnull DXButton *)button;
-(void)buttonContentLayoutDidChanged:(nonnull DXButton *)button;

@end
