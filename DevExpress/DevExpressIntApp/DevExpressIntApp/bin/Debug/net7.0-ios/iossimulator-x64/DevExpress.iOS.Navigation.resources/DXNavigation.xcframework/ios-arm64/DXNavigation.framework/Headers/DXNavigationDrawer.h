  

#import <UIKit/UIKit.h>
#import "DXNavigationDrawerDataSource.h"
#import "DXNavigationEnums.h"
#import "NavigationSettings.h"
#import "NavigationItemSize.h"

NS_ASSUME_NONNULL_BEGIN

@protocol DXNavigationDrawerDelegate;

@interface DXNavigationDrawer : UIScrollView<UIScrollViewDelegate, ShadowInfoProtocol, DXNavigationDrawerViewChangedListener, UIGestureRecognizerDelegate>

@property (nonatomic, weak) id<DXNavigationDrawerDataSource> dataSource;

@property(nullable, nonatomic,weak)  id<DXNavigationDrawerDelegate> drawerDelegate;

@property (nonatomic) NavigationItemSize *width;
@property (nonatomic) NavigationItemSize *height;

@property (nonatomic) NavigationItemSize *drawerHeaderHeight;
@property (nonatomic) NavigationItemSize *drawerContentHeight;
@property (nonatomic) NavigationItemSize *drawerFooterHeight;

@property (nonatomic) BOOL opened;
@property (nonatomic) BOOL swipeEnabled;
@property (nonatomic) BOOL closeDrawerOnTapContent;

@property (nonatomic) NavigationPosition position;
@property (nonatomic) DrawerTransitionMode mode;

@property (nonatomic) BOOL overlayEnabled;
@property (nonatomic) UIColor *contentOverlayColor;
@property (nonatomic) UIColor *drawerBackgroundColor;

@end

@protocol DXNavigationDrawerDelegate


@optional

-(BOOL) drawerWillStartChangeState: (DXNavigationDrawer *) drawer toOpened : (BOOL) opened;
-(void) drawerDidChangeState: (DXNavigationDrawer *) drawer;

@end

NS_ASSUME_NONNULL_END
