#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DXGridGroupInfo : NSObject

-(instancetype) initWithValue:(NSString*)value
               andSummary:(NSString*)summary
           andIsCollapsed:(bool)isCollapsed;

@property (readonly) bool isCollapsed;
@property (readonly) NSString* value;
@property (readonly) NSString* summary;

@end

NS_ASSUME_NONNULL_END
