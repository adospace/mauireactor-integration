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
#import "DXSeries.h"
#import "DXSeriesStyle.h"
#import "DXColorizerProtocols.h"

@interface DXPointSeries : DXSeries

@property (readwrite, nullable) DXPointSeriesStyle* style;
@property (readwrite, nullable) DXMarkerSeriesLabel* label;
@property (readwrite, nullable) id<DXPointColorizer> pointColorizer;
@property (readwrite) BOOL colorEach __deprecated_msg("use pointColorizer instead.");
@property (readwrite) DXLegendItemsBehavior legendItemsBehavior;

@end

@interface DXBubbleSeries : DXSeries

@property (readwrite) double minSize;
@property (readwrite) double maxSize;
@property (readwrite, nullable) DXBubbleSeriesStyle* style;
@property (readwrite, nullable) DXBubbleSeriesLabel* label;
@property (readwrite, nullable) id<DXWeightedPointColorizer> pointColorizer;
@property (readwrite) BOOL colorEach __deprecated_msg("use pointColorizer instead.");
@property (readwrite) DXLegendItemsBehavior legendItemsBehavior;

-(void) resetMinMax;
@end

@interface DXLineSeries : DXSeries

@property (readwrite, nullable) DXLineSeriesStyle* style;
@property (readwrite, nullable) DXMarkerSeriesLabel* label;
@property (readwrite, nullable) id<DXPointColorizer> pointColorizer;
@property (readwrite, nullable) id<DXSegmentColorizer> segmentColorizer;
@property (readwrite) BOOL colorEach __deprecated_msg("use pointColorizer instead.");
@property (readwrite) BOOL markerHidden;
@property (readwrite) DXLegendItemsBehavior legendItemsBehavior;
@end

@interface DXScatterLineSeries : DXLineSeries

@end

@interface DXStepLineSeries : DXLineSeries

@property (readwrite) BOOL invertedStep;

@end

@interface DXSplineSeries : DXLineSeries

@property (readwrite) double lineTension;

@end
