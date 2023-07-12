  

#ifndef DXTabControlSettings_h
#define DXTabControlSettings_h

#import <UIKit/UIKit.h>
#import "DXNavigationEnums.h"
#import "NavigationSettings.h"
#import "NavigationItemSize.h"

@interface DXTabItemDisplaySettings : NSObject<NSCopying>

@property (nonatomic) double cornerRadius;
@property (nonatomic) double spacing;
@property (nonatomic) UIEdgeInsets paddings;

@property (nonatomic, nullable) UIColor *textColor;
@property (nonatomic, nullable) UIColor *iconColor;

@property (nonatomic, nullable) UIColor *selectedTextColor;
@property (nonatomic, nullable) UIColor *selectedIconColor;
@property (nonatomic, nullable) UIColor *selectedBackgroundColor;

@property (nonatomic) UIFont *font;

@property (nonatomic) DXTabIconPosition iconPosition;
@property (nonatomic) DXTabItemDisplayMode displayMode;

@property (nonatomic, nullable) NavigationItemSize* widthInfo;
@property (nonatomic, nullable) NavigationItemSize* heightInfo;

@end

@interface DXTabItemData : NSObject

@property (nonatomic) NSString *title;
@property (nonatomic) UIImage *icon;
@property (nonatomic) UIView *customView;

@end

@interface DXTabItemViewInfo : NSObject

@property (nonatomic) DXTabItemData *viewData;
@property (nonatomic) DXTabItemDisplaySettings *displaySettings;

@end

@interface DXSelectionIndicatorSettings : NSObject

@property (nonatomic) double size;
@property (nonatomic) UIColor *color;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL animated;
@property (nonatomic) enum NavigationPosition position;

@end

@interface DXTabBarSettings : NSObject

@property (nonatomic) enum DXTabsAlignment alignment;
@property (nonatomic) DXSelectionIndicatorSettings *selectionIndicatorSettings;

@property (nonatomic) double width;
@property (nonatomic) double maxWidth;
@property (nonatomic) double minWidth;

@property (nonatomic) double height;
@property (nonatomic) double maxHeight;
@property (nonatomic) double minHeight;

@property (nonatomic) UIColor *backgroundColor;
@property (nonatomic) double spacing;
@property (nonatomic) double indent;
@property (nonatomic) UIEdgeInsets paddings;

@property (nonatomic, nonnull) DXShadowInfo *shadow;

@property (nonatomic, copy) DXTabItemDisplaySettings *itemsDisplaySettings;

@property (nonatomic) DXTabsOrientation orientation;
@property (nonatomic) DXTabBarScrollMode autoScrollMode;
@property (nonatomic) BOOL animationEnabled;

@end

@interface DXPagerSettings : NSObject

@property (nonatomic) enum DXPagerScrollDirection scrollDirection;
@property (nonatomic) bool swipeEnabled;
@property (nonatomic) bool animationEnabled;

@end


@interface DXTabControlSettings : NSObject

@property (nonatomic) DXTabBarSettings *tabBarSettings;
@property (nonatomic) DXPagerSettings *pagerSettings;
@property (nonatomic) enum NavigationPosition position;
@property (nonatomic) bool animationEnabled;

@end

#endif /* DXTabControlSettings_h */
