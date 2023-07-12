  

#import <Foundation/Foundation.h>

typedef NS_ENUM(int, NavigationPosition) {
    NavigationPositionEmpty = 0,
    NavigationPositionTop,
    NavigationPositionBottom,
    NavigationPositionLeft,
    NavigationPositionRight
};

typedef NS_ENUM(int, DrawerTransitionMode) {
    DrawerTransitionModeEmpty = -1,
    DrawerTransitionModeSlideOut,
    DrawerTransitionModePush,
    DrawerTransitionModeReveal,
    DrawerTransitionModeSplit
};

typedef NS_ENUM(int, TransitionMode) {
    TransitionModeNothing,
    TransitionModePush,
    TransitionModeReveal
};

typedef NS_ENUM(int, DXTabsAlignment) {
    DXTabsAlignmentEmpty = -1,
    DXTabsAlignmentStart = 0,
    DXTabsAlignmentEnd,
    DXTabsAlignmentCenter
};

typedef NS_ENUM(int, DXTabsOrientation) {
    DXTabControlOrientationEmpty = -1,
    DXTabControlOrientationHorizontal = 0,
    DXTabControlOrientationVertical
};


typedef NS_ENUM(int, DXTabsOverflowMode) {
    DXTabsOverflowModeFixed = 0,
    DXTabsOverflowModeScrollable
};

typedef NS_ENUM(int, DXTabIconPosition) {
    DXTabIconPositionEmpty = 0,
    DXTabIconPositionTop = 1,
    DXTabIconPositionBottom,
    DXTabIconPositionLeft,
    DXTabIconPositionRight
};

typedef NS_ENUM(int, DXTabItemDisplayMode) {
    DXTabItemDisplayModeEmpty = 0,
    DXTabItemDisplayModeText = 1,
    DXTabItemDisplayModeIcon = 2,
    DXTabItemDisplayModeTextAndIcon = 3
};

typedef NS_ENUM(int, DXPagerScrollDirection) {
    DXPagerScrollDirectionHorizontal,
    DXPagerScrollDirectionVertical
};

typedef NS_ENUM(int, DXTabBarScrollMode) {
    DXTabBarScrollModeCenter = 0,
    DXTabBarScrollModeEdge,
    DXTabBarScrollModeNone
};
