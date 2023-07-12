#import "DXDateTimeAxisX.h"
#import "DXChartElement.h"

@interface DXDateTimeLabelFormat : NSObject

NS_ASSUME_NONNULL_BEGIN
-(instancetype)initWithFormat:(NSString *)format forMeasureUnit:(DXDateTimeMeasureUnit)measureUnit;
NS_ASSUME_NONNULL_END

@end


@interface DXLabelFormatAutoReplaceOptions : DXChartElement

@property (readwrite) Boolean enabled;
@property (readonly, nonnull) NSArray<DXDateTimeLabelFormat*>* labelFormats;

-(void) setLabelFormat:(NSString* _Nonnull) format forMeasureUnit:(DXDateTimeMeasureUnit) measureUnit;
-(void) removeLabelFormat:(DXDateTimeMeasureUnit) measureUnit;
-(void) removeAll;

@end
