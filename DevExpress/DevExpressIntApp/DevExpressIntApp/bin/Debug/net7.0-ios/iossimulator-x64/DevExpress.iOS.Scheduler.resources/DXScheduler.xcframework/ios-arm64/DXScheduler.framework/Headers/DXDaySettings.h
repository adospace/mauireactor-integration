#import <Foundation/Foundation.h>
#import "DXProtocols.h"
#import "DXCellItem.h"
#import "DXAppointmentPosition.h"

NS_ASSUME_NONNULL_BEGIN


@interface DXDaySettings : NSObject

-(instancetype)initWithLogicalIndex:(int)logicalIndex andAppointments:(NSArray<DXAppointmentPosition *> *)appointments
               andCellViewProviderContainer:(id<ViewProviderContainer>)cellViewProviderContainer
               andAppViewProviderContainer:(id<ViewProviderContainer>)appViewProviderContainer
               andAllDayCellProviderContainer:(id<ViewProviderContainer>)allDayCellProviderContainer
               andHeaderItemProviderContainer:(id<ViewProviderContainer>)headerItemProviderContainer;

@property(readonly) int logicalIndex;
@property(readonly) NSArray<DXAppointmentPosition *> *appointments;
@property NSArray<DXAllDayAppointment *> *allDayAppointments;

@property(readonly) id<ViewProviderContainer> headerItemProviderContainer;
@property(readonly) id<ViewProviderContainer> cellViewProviderContainer;
@property(readonly) id<ViewProviderContainer> appViewProviderContainer;
@property(readonly) id<ViewProviderContainer> allDayCellProviderContainer;
@property id<ViewProviderContainer> allDayViewProviderContainer;

@end


NS_ASSUME_NONNULL_END
