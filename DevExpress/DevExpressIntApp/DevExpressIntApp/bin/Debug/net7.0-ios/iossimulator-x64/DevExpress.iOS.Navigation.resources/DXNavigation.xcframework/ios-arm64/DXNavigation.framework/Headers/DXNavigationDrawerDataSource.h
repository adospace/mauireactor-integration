  

#ifndef DXNavigationDrawerDataSource_h
#define DXNavigationDrawerDataSource_h

@protocol DXNavigationDrawerViewChangedListener

-(void) onMainViewChanged;
-(void) onDrawerViewChanged;

@end

@protocol DXNavigationDrawerDataSource

- (UIView *) getMainContent;
- (UIView *) getDrawerContent;
- (UIView *) getDrawerHeaderContent;
- (UIView *) getDrawerFooterContent;

-(void) addDrawerViewsChangedListener: (id<DXNavigationDrawerViewChangedListener>) listener;
-(void) removeDrawerViewsChangedListener: (id<DXNavigationDrawerViewChangedListener>) listener;

@end

#endif /* DXNavigationDrawerDataSource_h */
