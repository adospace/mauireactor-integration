#import <Foundation/Foundation.h>
#import "DXGridLayoutItem.h"

NS_ASSUME_NONNULL_BEGIN

@class DXGridColumnSettings;

@interface DXGridLayoutSettings : NSObject

-(instancetype) initWithColumnSettings:(NSArray<DXGridLayoutItem*>*)columnSettings
                        andRowSettings:(NSArray<DXGridLayoutItem*>*)rowSettings;


@property (readonly, nonatomic) NSArray<DXGridLayoutItem*>* columnSettings;
@property (readonly, nonatomic) NSArray<DXGridLayoutItem*>* rowSettings;

@end

NS_ASSUME_NONNULL_END
