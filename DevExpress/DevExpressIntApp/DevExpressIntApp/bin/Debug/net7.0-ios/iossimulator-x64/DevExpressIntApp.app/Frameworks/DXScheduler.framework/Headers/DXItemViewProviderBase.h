#import <Foundation/Foundation.h>
#import "DXViewCache.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, TypedView) {
    TypedViewDayCell,
    TypedViewAllDayCell,
    TypedViewAppointment,
    TypedViewAllDayAppointment,
    TypedViewRulerItem,
    TypedViewRulerHeaderItem,
    TypedViewHeaderItem,
    TypedViewMonthCell,
    TypedViewMonthHeaderItem,
};


@interface DXItemViewProviderBase : NSObject

-(instancetype) initWithViewsCache:(DXViewCache*)cache;
-(UIView*) popViewFromCacheByViewType:(TypedView)viewType;
-(void) pushViewToCache:(UIView*)view forViewType:(TypedView)viewType;

@end



NS_ASSUME_NONNULL_END
