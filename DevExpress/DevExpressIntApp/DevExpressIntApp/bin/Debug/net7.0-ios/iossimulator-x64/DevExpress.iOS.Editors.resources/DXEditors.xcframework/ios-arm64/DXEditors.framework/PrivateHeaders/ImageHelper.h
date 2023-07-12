#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ImageHelper : NSObject

+(UIImage*) get:(NSString*)resourceName;
+(UIImage*) get:(NSString*)resourceName fromBundle:(NSBundle*)bundle;

@end

NS_ASSUME_NONNULL_END
