#import <UIKit/UIKit.h>
#import "DXViewSettings.h"
#import "EventLoopListener.h"
#import "Gestures.h"

NS_ASSUME_NONNULL_BEGIN
@class HitTestInfo;

@interface DXSchedulerViewBase : UIView

@property (readonly) EventLoopListener* eventLoopListener;
@property (readwrite, weak, nullable) id<SchedulerGesturesDelegate> gestureDelegate;
-(void)initialize;
-(HitTestInfo *)calcHitTest:(CGPoint)point;

@end

NS_ASSUME_NONNULL_END
