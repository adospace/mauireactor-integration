  

#import <UIKit/UIKit.h>
#import "DXTabItem.h"
//#import "DXTabControlSettings.h"
#import "DXTabBarDelegate.h"
#import "DXDataSourceProtocols.h"

@interface DXTabBarView : UIScrollView<DXDataSourceUpdatesDelegate>

@property (nonatomic) DXTabBarSettings *settings;
@property (nonatomic) NSUInteger selectedTabIndex;

-(NSUInteger)findIndex:(DXTabItem*)tab;
-(DXTabItem*)findByIndex:(NSUInteger)index;

-(void)setDataSource:(__weak id<DXTabBarDataSource>)dataSource;


-(BOOL)setSelected:(NSUInteger)tabIndex;
-(void)moveBetweenTabsTo:(NSUInteger)newPage from:(NSUInteger)currentPage onPercents:(float)percents;

@property (nullable,nonatomic,weak) id<DXTabBarDelegate> tabsDelegate;

@end
