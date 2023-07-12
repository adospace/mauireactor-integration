#import <Foundation/Foundation.h>
#import "DXWeekSettings.h"
#import "DXViewSettings.h"


NS_ASSUME_NONNULL_BEGIN


@interface DXMonthViewSettings : DXViewSettings

-(instancetype)initWithWeeks:(NSArray<DXWeekSettings *> *)weeks andVisibleWeeksCount:(int)weeksCount andDaysInWeekCount:(int)daysInWeekCount
               andHeaderItemViewProviderContainer:(id<ViewProviderContainer>)headerItemViewProviderContainer andAppTopOffset:(CGFloat)appTopOffset andAppMinHeight:(CGFloat)appMinHeight;
@property(readonly) int visibleWeeksCount;
@property(readonly) int daysInWeekCount;
@property(readonly) CGFloat appTopOffset;
@property(readonly) CGFloat appMinHeight;
@property(readonly) NSArray<DXWeekSettings *> *weeks;
@property(readonly) id<ViewProviderContainer> headerItemViewProviderContainer;

@end

NS_ASSUME_NONNULL_END
