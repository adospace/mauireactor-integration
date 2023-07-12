#pragma once

#import <Foundation/Foundation.h>
#import "DXSeriesPointInfo.h"

@protocol DXHintPointTextProvider <NSObject>
NS_ASSUME_NONNULL_BEGIN
-(NSString *)format : (DXSeriesPointInfo *) pointInfo;
NS_ASSUME_NONNULL_END
@end
