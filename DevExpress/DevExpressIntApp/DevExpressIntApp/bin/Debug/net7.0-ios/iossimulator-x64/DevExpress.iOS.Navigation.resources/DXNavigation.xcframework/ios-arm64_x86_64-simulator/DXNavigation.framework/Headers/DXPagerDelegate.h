  
#import <UIKit/UIKit.h>

@class DXPager;

@protocol DXPagerDelegate

-(void) didPageSelected: (DXPager*) pager oldIndex : (NSUInteger) oldTabIndex newIndex : (NSUInteger) newTabIndex;
-(void) didPageSelecting: (DXPager*) pager oldIndex : (NSUInteger) oldTabIndex newIndex : (NSUInteger) newTabIndex multiplier : (CGFloat) percents;

@end
