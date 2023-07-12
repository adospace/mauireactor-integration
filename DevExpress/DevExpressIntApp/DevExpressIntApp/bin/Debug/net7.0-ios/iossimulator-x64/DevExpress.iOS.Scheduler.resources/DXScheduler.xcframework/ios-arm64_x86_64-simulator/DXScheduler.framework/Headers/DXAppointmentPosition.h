#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, AppointmentSegment) {
    AppointmentSegmentHead = 1,
    AppointmentSegmentFoot = 2,
    AppointmentSegmentBody = 4,
};

@interface DXAppointmentPosition : NSObject

@property (readwrite) double row;
@property (readwrite) double rowSpan;
@property (readwrite) double column;
@property (readwrite) double columnSpan;
@property (readwrite) double columnsCount;
@property (readwrite) long long guid;
@property (readwrite) int logicalIndex;
@property (readwrite, nonatomic) bool needReload;

@end

@interface DXAllDayAppointment : NSObject

@property int row;
@property long long guid;
@property AppointmentSegment type;
@property int lengthInDays;

@end
