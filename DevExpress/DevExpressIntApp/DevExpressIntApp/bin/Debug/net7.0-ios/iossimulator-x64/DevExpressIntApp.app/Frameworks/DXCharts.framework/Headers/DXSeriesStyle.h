/*Copyright (c) 2017 Developer Express Inc.
{*******************************************************************}
{                                                                   }
{       Developer Express Mobile Chart Library                      }
{                                                                   }
{                                                                   }
{       Copyright (c) 2017 Developer Express Inc.                   }
{       ALL RIGHTS RESERVED                                         }
{                                                                   }
{   The entire contents of this file is protected by U.S. and       }
{   International Copyright Laws. Unauthorized reproduction,        }
{   reverse-engineering, and distribution of all or any portion of  }
{   the code contained in this file is strictly prohibited and may  }
{   result in severe civil and criminal penalties and will be       }
{   prosecuted to the maximum extent possible under the law.        }
{                                                                   }
{   RESTRICTIONS                                                    }
{                                                                   }
{   THIS SOURCE CODE AND ALL RESULTING INTERMEDIATE FILES           }
{   ARE CONFIDENTIAL AND PROPRIETARY TRADE                          }
{   SECRETS OF DEVELOPER EXPRESS INC. THE REGISTERED DEVELOPER IS   }
{   LICENSED TO DISTRIBUTE THE PRODUCT AND ALL ACCOMPANYING         }
{   CONTROLS AS PART OF AN EXECUTABLE PROGRAM ONLY.                 }
{                                                                   }
{   THE SOURCE CODE CONTAINED WITHIN THIS FILE AND ALL RELATED      }
{   FILES OR ANY PORTION OF ITS CONTENTS SHALL AT NO TIME BE        }
{   COPIED, TRANSFERRED, SOLD, DISTRIBUTED, OR OTHERWISE MADE       }
{   AVAILABLE TO OTHER INDIVIDUALS WITHOUT EXPRESS WRITTEN CONSENT  }
{   AND PERMISSION FROM DEVELOPER EXPRESS INC.                      }
{                                                                   }
{   CONSULT THE END USER LICENSE AGREEMENT FOR INFORMATION ON       }
{   ADDITIONAL RESTRICTIONS.                                        }
{                                                                   }
{*******************************************************************}
*/
#pragma once

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DXChartElementStyle.h"
#import "DXTransparencyGradient.h"

@interface DXMarkerStyle : DXChartElementStyle
    @property (readwrite, nullable) UIColor *fill;
    @property (readwrite, nullable) UIColor *stroke;
    @property (readwrite) CGFloat strokeThickness;

@end

@interface DXBarSeriesStyle : DXChartElementStyle
    @property (readwrite, nullable) UIColor *fill;
    @property (readwrite, nullable) UIColor *stroke;
    @property (readwrite) CGFloat strokeThickness;
@end


@interface DXPointSeriesStyle : DXChartElementStyle
    @property (readwrite) CGFloat markerSize;
    @property (readwrite, nullable) DXMarkerStyle *markerStyle;
@end

@interface DXBubbleSeriesStyle : DXChartElementStyle
    @property (readwrite, nullable) DXMarkerStyle *markerStyle;
@end

@interface DXLineSeriesStyle : DXPointSeriesStyle
    @property (readwrite, nullable) UIColor *stroke;
    @property (readwrite) CGFloat strokeThickness;
@end

@interface DXLineIndicatorStyle : DXChartElementStyle
    @property (readwrite, nullable) UIColor *stroke;
    @property (readwrite) CGFloat strokeThickness;
@end

@interface DXEnvelopeIndicatorStyle : DXChartElementStyle
    @property (readwrite, nullable) UIColor *upperStroke;
    @property (readwrite) CGFloat upperStrokeThickness;
    @property (readwrite, nullable) UIColor *lowerStroke;
    @property (readwrite) CGFloat lowerStrokeThickness;
    @property (readwrite, nullable) UIColor *fill;
    @property (readwrite) CGFloat alpha;
@end

@interface DXBollingerBandsIndicatorStyle : DXLineIndicatorStyle
    @property (readwrite, nullable) UIColor *upperStroke;
    @property (readwrite) CGFloat upperStrokeThickness;
    @property (readwrite, nullable) UIColor *lowerStroke;
    @property (readwrite) CGFloat lowerStrokeThickness;
@end

@interface DXMovingAverageConvergenceDivergenceIndicatorStyle : DXLineIndicatorStyle
    @property (readwrite, nullable) UIColor *signalStroke;
    @property (readwrite) CGFloat signalStrokeThickness;
@end

@interface DXAreaSeriesStyle : DXLineSeriesStyle
    @property (readwrite, nullable) UIColor *fill;
    @property (readwrite) CGFloat alpha;
    @property (readwrite, nullable) DXTransparencyGradient* fillEffect;
@end

@interface DXRangeAreaSeriesStyle : DXChartElementStyle
    @property (readwrite, nullable) UIColor *fill;
    @property (readwrite) CGFloat alpha;
    @property (readwrite, nullable) DXLineSeriesStyle *line1Style;
    @property (readwrite, nullable) DXLineSeriesStyle *line2Style;
@end

@interface DXStockSeriesStyle : DXChartElementStyle
    @property (readwrite) CGFloat strokeThickness;
    @property (readwrite, nullable) UIColor * risingStroke;
    @property (readwrite, nullable) UIColor * fallingStroke;
@end

@interface DXCandleStickSeriesStyle : DXStockSeriesStyle
    @property (readwrite, nullable) UIColor * risingFill;
    @property (readwrite, nullable) UIColor * fallingFill;
@end

@interface DXPieSeriesStyle : DXChartElementStyle
    @property (readwrite, nullable) UIColor *stroke;
    @property (readwrite) CGFloat strokeThickness;
    @property (readwrite) CGFloat explodedDistance;
@end


