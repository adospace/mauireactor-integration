#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DataFormValidationError : NSObject

@property (nonatomic) BOOL hasError;
@property (nonatomic, nullable) NSString *errorText;

@end

NS_ASSUME_NONNULL_END
