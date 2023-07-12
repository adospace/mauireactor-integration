#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "DXTabControlSettings.h"

@protocol DXDataSourceUpdatesDelegate

@required
-(void) onItemsChanged;
@required
-(void) onItemContentChanged: (NSUInteger) index;
@required
-(void) onItemHeaderContentChanged: (NSUInteger) index;

@end

@protocol DXPagerDataSource

@required

@property (readonly, nonatomic) NSUInteger itemsCount;

-(UIView*) getPageForIndex: (NSUInteger) index;
-(void) addListener : (__weak id<DXDataSourceUpdatesDelegate>) listener;

@end

@protocol DXTabBarDataSource

@required
@property (readonly, nonatomic) int tabsCount;

-(NSArray<DXTabItemViewInfo*>*) getTabsInfo;
-(DXTabItemViewInfo*) getTabInfo: (NSUInteger) index;
-(void) addListener : (__weak id<DXDataSourceUpdatesDelegate>) listener;

@end

@protocol DXTabControlDataSource <DXPagerDataSource, DXTabBarDataSource>

@required

@property (readonly, nonatomic) NSUInteger itemsCount;

@end
