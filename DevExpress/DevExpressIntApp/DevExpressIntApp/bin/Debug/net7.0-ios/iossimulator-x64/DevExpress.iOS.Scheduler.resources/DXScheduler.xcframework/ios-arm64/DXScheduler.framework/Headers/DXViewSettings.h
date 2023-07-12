#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, DXSchedulerViewType) {
    DXSchedulerViewTypeDay = 0,
    DXSchedulerViewTypeMonth = 1,
};

@interface DXViewSettings : NSObject
    @property (readonly) DXSchedulerViewType viewType;
@end

NS_ASSUME_NONNULL_END
