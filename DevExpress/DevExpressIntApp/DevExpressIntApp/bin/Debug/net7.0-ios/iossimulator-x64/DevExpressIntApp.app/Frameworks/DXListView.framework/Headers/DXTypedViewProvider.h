#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DXTypedViewProvider : NSObject

-(UIView*) popViewFromCacheByViewType:(NSInteger)viewType;
-(void) pushViewToCache:(UIView*)view forViewType:(NSInteger)viewType;

@end

NS_ASSUME_NONNULL_END
