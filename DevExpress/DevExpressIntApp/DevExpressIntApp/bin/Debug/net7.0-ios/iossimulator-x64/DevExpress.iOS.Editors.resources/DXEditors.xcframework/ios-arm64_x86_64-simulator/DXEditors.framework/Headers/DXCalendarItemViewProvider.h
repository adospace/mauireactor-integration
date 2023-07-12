#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "DXCalendarViewType.h"

NS_ASSUME_NONNULL_BEGIN

@protocol DXCalendarItemViewProvider<NSObject>
-(UIView*) getViewByIndex:(int) index forYear:(int) year andMonth:(int) month forActiveViewType:(DXCalendarViewType) activeViewType;
-(void) updateView:(UIView*) view forIndex:(int) index forYear:(int) year andMonth:(int) month forActiveViewType:(DXCalendarViewType) activeViewType;
-(void) recycleView:(UIView *) view forIndex:(int) index forActiveViewType:(DXCalendarViewType) activeViewType;
-(bool) checkView:(UIView *)view forIndex:(int)index forYear:(int) year andMonth:(int) month forActiveViewType:(DXCalendarViewType) activeViewType;

@end

NS_ASSUME_NONNULL_END
