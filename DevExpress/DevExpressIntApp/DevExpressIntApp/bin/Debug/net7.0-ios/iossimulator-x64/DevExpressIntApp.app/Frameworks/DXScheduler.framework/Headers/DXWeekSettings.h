#import <Foundation/Foundation.h>
#import "DXProtocols.h"
#import "DXAppointmentPosition.h"

NS_ASSUME_NONNULL_BEGIN

@interface DXWeekSettings : NSObject

-(instancetype)initWithApps:(NSArray<DXAppointmentPosition *> *)apps andAppViewProviderContainer:(id<ViewProviderContainer>)appViewProviderContainer
               andCellViewProviderContainer:(id<ViewProviderContainer>)cellViewProviderContainer andLogicalIndex:(int)logicalIndex;

@property(readonly) int logicalIndex;
@property(readonly) id<ViewProviderContainer> cellViewProviderContainer;
@property(readonly) id<ViewProviderContainer> appViewProviderContainer;
@property(readonly) NSArray<DXAppointmentPosition *> *appointments;

@end

NS_ASSUME_NONNULL_END
