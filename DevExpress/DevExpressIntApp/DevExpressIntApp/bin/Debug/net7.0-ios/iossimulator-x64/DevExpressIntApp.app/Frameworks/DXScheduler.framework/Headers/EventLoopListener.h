#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SchedulerMessageDelegate <NSObject>

-(void)idle;

@end


@interface EventLoopListener : NSObject

@property (readonly) bool hasRequestIdle;
@property (readwrite, weak, nullable) id<SchedulerMessageDelegate> messageDelegate;

-(void)requestIdle;

@end

NS_ASSUME_NONNULL_END
