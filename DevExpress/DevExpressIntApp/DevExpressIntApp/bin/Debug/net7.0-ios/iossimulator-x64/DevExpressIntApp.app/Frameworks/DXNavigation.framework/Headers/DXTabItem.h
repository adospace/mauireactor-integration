  

#import <UIKit/UIKit.h>
#import "DXTabControlSettings.h"
#import "NavigationLayoutElement.h"

@interface DXTabItem : UIView<NavigationLayoutElement>

@property (nonatomic) CGSize actualSize;
//@property (nonatomic) CGFloat actualWidth;
//@property (nonatomic) CGFloat actualHeight;

@property (readonly, nonatomic) DXTabItemData * viewData;

@property (readonly, nonatomic) DXTabItemDisplaySettings* settings;
@property (readonly, nonatomic) DXTabItemDisplaySettings* sharedSettings;
@property (readonly, nonatomic) DXTabItemDisplaySettings* actualSettings;

@property (nonatomic) BOOL selected;

-(instancetype)initWithSettings:(DXTabItemDisplaySettings*) settings andParentSettings: (DXTabItemDisplaySettings *) parentSettings andData: (DXTabItemData*) data;

-(void) setData:(DXTabItemData *) data;
-(void) setSettings: (DXTabItemDisplaySettings*) settings andShared: (DXTabItemDisplaySettings*) sharedSettings;

@end
