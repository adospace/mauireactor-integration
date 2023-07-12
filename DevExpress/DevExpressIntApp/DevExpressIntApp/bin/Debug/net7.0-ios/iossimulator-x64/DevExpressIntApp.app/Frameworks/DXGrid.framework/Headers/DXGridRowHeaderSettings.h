#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DXGridRowHeaderSettings : NSObject

-(instancetype) initWithViewProviders:(NSArray<id>*)viewProviders
                 andShowColumnHeaders:(bool)showColumnHeaders
                       andPanelHeight:(double)headerHeight;

@property (readonly) NSArray<id>* viewProviders;
@property (readonly) bool showColumnHeaders;
@property (readonly) double panelHeight;

@end

NS_ASSUME_NONNULL_END
