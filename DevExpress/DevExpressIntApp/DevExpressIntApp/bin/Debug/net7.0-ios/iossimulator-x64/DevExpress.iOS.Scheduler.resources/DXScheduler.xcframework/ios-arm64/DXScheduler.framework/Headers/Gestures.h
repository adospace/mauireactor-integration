#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DXSchedulerGestureParams : NSObject

@property (readonly) bool isCell;
@property (readonly) bool isAppointment;
@property (readonly) int dayIndex;
@property (readonly) int cellIndex;
@property (readonly) long long appGuid;
@property (readonly) bool isAllDay;
@property (readonly) CGPoint location;

-(instancetype) initWithDayIndex:(int)dayIndex andLocation:(CGPoint)location andCellIndex:(int)cellIndex andAppGuid:(long long)appGuid andIsCell:(bool)isCell andIsAppointment:(bool)isAppointment andIsAllDay:(bool)isAllDay;
@end


@protocol SchedulerGesturesDelegate <NSObject>

-(void)onTap:(DXSchedulerGestureParams*) params;
-(void)onDoubleTap:(DXSchedulerGestureParams*) params;
-(void)onLongPress:(DXSchedulerGestureParams*) params;

@end

NS_ASSUME_NONNULL_END
