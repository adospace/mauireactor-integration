#import <UIKit/UIKit.h>

@class DXCalendar;

@protocol DXCalendarDelegate<NSObject>
-(void)onLayoutChanged;
-(void)onActiveViewTypeChanged:(DXCalendarViewType) activeViewType;

@optional
-(void)cellTap:(int)index forYear:(int) year andMonth:(int) month forActiveViewType:(DXCalendarViewType) activeViewType;
-(bool)canCellTap:(int)index forYear:(int) year andMonth:(int) month forActiveViewType:(DXCalendarViewType) activeViewType;
-(void)didChangedCurrentYear:(int)year andMonth:(int)month;

@end

@protocol DXCalendarListener<NSObject>

@optional
-(void)cellTap:(int)index;
-(bool)canCellTap:(int)index;

@end
