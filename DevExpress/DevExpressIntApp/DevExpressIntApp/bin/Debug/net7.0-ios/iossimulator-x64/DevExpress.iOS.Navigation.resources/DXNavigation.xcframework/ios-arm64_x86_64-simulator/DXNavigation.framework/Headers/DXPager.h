  

#import <UIKit/UIKit.h>
#import "DXPagerDelegate.h"
#import "DXDataSourceProtocols.h"


@interface DXPager : UIScrollView<UIGestureRecognizerDelegate, UIScrollViewDelegate, DXDataSourceUpdatesDelegate>

-(instancetype) initWithDataSource : (__weak id <DXPagerDataSource>) dataSource;

@property (nonatomic, weak, nullable, setter=setDataSource:) id <DXPagerDataSource> pagerDataSource;
@property (nullable,nonatomic,weak) id<DXPagerDelegate> pagerDelegate;
@property (nonatomic) NSUInteger selectedPageIndex;

-(void)setSettings: (DXPagerSettings*) settings;

@end
