#import <UIKit/UIKit.h>
#import "DXSchedulerViewBase.h"

NS_ASSUME_NONNULL_BEGIN

@class DXMonthViewSettings;
@class DXWeekSettings;

@protocol DXMonthViewDelegate <NSObject>

- (NSArray<DXWeekSettings*>*)getWeeksForScroll:(int)scroll;
- (NSArray<DXWeekSettings*>*)getWeeksForAppViewport:(CGFloat)appViewport;

@end

@interface DXMonthView : DXSchedulerViewBase

@property(readwrite, weak, nullable) id <DXMonthViewDelegate> delegate;
- (void)setSettings:(DXMonthViewSettings*)settings;

@end

NS_ASSUME_NONNULL_END
