#pragma once

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DXChartElement.h"

@interface DXTransparencyGradient : DXChartElement
    @property (readwrite) CGFloat baselineAlpha;
    @property (readwrite) CGFloat seriesLineAlpha;
@end
