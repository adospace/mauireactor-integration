#import <Foundation/Foundation.h>
#import "DXHintPointTextProvider.h"

@interface DXSeriesHintOptionsBase : NSObject

@property (readwrite) BOOL enabled;
@property (readwrite, nullable) NSString *pointTextPattern;
@property (readwrite, nullable) id<DXHintPointTextProvider> pointTextProvider;

@end
