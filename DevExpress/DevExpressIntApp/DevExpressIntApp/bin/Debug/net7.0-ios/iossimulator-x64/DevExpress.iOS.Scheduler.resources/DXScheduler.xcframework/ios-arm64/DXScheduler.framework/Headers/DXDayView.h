#import <UIKit/UIKit.h>
#import "DXSchedulerViewBase.h"
#import "DXDayViewSettings.h"

NS_ASSUME_NONNULL_BEGIN

@protocol DXDayViewDelegate <NSObject>
    -(NSArray<DXDaySettings*> *) getDaysForScroll:(int) scroll;
    -(void) rowDidChange:(CGFloat) row;
@end

@interface DXDayView : DXSchedulerViewBase

@property (readwrite, atomic) CGFloat timeIndicatorRow;
@property (readwrite, atomic) CGFloat topRow;
@property (readwrite, weak, nonatomic, nullable) id<DXDayViewDelegate> delegate;
-(void) setSettings:(DXDayViewSettings*) settings andNeedReset:(bool)reset;

@end

NS_ASSUME_NONNULL_END

