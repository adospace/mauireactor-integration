  

#import <UIKit/UIKit.h>
#import "DXNavigationEnums.h"
#import "DXTabsDelegate.h"
#import "DXTabBarDelegate.h"
#import "DXPagerDelegate.h"
#import "DXDataSourceProtocols.h"
#import "DXTabControlSettings.h"

NS_ASSUME_NONNULL_BEGIN

@interface DXTabControlUIView : UIView

@property (nonatomic, weak, nullable) id <DXTabsDelegate> delegate;
@property (nonatomic, weak, nullable) id <DXTabControlDataSource> dataSource;

@property (nonatomic) NSInteger selectedItemIndex;
@property (nonatomic, strong, setter=setSettings:) DXTabControlSettings* settings;

//-(void) setSettings:(DXTabControlSettings*) settings;

@end

NS_ASSUME_NONNULL_END
