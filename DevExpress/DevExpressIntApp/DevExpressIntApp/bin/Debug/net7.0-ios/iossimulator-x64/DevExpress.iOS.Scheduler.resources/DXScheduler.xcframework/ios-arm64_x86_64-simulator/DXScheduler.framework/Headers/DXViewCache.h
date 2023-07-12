#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DXViewCache : NSObject
-(void) recycleView:(UIView *) view forType:(int) typeID;
-(UIView *) getViewByType:(int) typeID;
@end

NS_ASSUME_NONNULL_END
