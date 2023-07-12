#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@class DXDayHeaderItemViewInfo;

@interface DXHeaderDayItemView : UIView
-(instancetype) init;
-(void)applyViewInfo:(DXDayHeaderItemViewInfo *)item;
@end
