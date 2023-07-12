#import <Foundation/Foundation.h>
#import "DXTimeIndicatorViewInfo.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, TimeIndicatorPosition) {
    TimeIndicatorPositionNone = 0,
    TimeIndicatorPositionAboveAppointment = 1,
    TimeIndicatorPositionUnderAppointment = 2,
    TimeIndicatorPositionAcrossPanel = 3,
};

@interface DXTimeIndicatorSettings : NSObject

@property (readwrite) int dayLogicalIndex;
@property (readonly) TimeIndicatorPosition position;
@property (readonly) DXTimeIndicatorViewInfo* viewInfo;

-(instancetype) initWithViewInfo:(DXTimeIndicatorViewInfo*)viewInfo andPosition:(TimeIndicatorPosition)position andDayLogicalIndex:(int)logicalIndex;

@end

NS_ASSUME_NONNULL_END
