  

#ifndef DXTabBarDelegate_h
#define DXTabBarDelegate_h

@class DXTabBarView;

@protocol DXTabBarDelegate

-(void) didTabSelected: (DXTabBarView*) tabBar oldIndex : (NSUInteger) oldTabIndex newIndex : (NSUInteger) newTabIndex;
-(BOOL) didTabTapped: (DXTabBarView*) tabBar index : (NSUInteger) index;

@end

#endif /* DXTabBarDelegate_h */
