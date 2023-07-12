#import <Foundation/Foundation.h>
#import "DXDaySettings.h"
#import "DXRulerSettings.h"
#import "DXTimeIndicatorSettings.h"
#import "DXViewSettings.h"

NS_ASSUME_NONNULL_BEGIN

@interface DXDayViewSettings : DXViewSettings

-(instancetype) initWithDays:(NSArray<DXDaySettings*> *) days andStartDayIndex:(int) index andVisibleDaysCount:(int) visibleDaysCount andRulerSettings:(nullable DXRulerSettings*) rulerSettings andTimeIndicatorSettings:(DXTimeIndicatorSettings*)timeIndicatorSettings andAllDayAppHeight:(double)allDayAppHeight andDayCellHeight:(double)dayCellHeight andDayCellCount:(int)dayCellCount andAllDayAreaMaxRows:(double)allDayAreaMaxRows andPagingEnabled:(bool) pagingEnabled;

@property (readonly) NSArray<DXDaySettings*>* days;
@property (readonly) DXRulerSettings* ruler;
@property (readonly) DXTimeIndicatorSettings* timeIndicator;

@property (readonly) int startDayIndex;
@property (readonly) int visibleDaysCount;
@property (readonly) double allDayAppHeight;
@property (readonly) double dayCellHeight;
@property (readonly) int dayCellCount;
@property (readonly) double allDayAreaMaxRows;
@property (readonly) bool pagingEnabled;

@end

NS_ASSUME_NONNULL_END

