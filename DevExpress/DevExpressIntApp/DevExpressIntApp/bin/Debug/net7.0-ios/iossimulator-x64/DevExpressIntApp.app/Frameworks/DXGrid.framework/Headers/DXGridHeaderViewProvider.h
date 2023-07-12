#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class DXGridHeaderViewInfo;
@class DXGridColumnSettings;

@interface DXGridHeaderViewProvider : NSObject

-(instancetype) initWithViewInfo:(DXGridHeaderViewInfo*)viewInfo;
-(void) updateView:(UIView*)view;

@property (readonly) DXGridHeaderViewInfo* viewInfo;

@end

NS_ASSUME_NONNULL_END
