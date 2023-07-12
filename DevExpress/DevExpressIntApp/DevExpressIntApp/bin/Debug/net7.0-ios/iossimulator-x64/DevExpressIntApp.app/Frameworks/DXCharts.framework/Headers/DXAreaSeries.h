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


@interface DXAreaSeries : DXSeries
@property (readwrite, nullable) DXAreaSeriesStyle* style;
@property (readwrite, nullable) DXMarkerSeriesLabel* label;
@property (readwrite, nullable) id<DXPointColorizer> pointColorizer;
@property (readwrite, nullable) id<DXSegmentColorizer> segmentColorizer;
@property (readwrite, nullable) id<DXFillColorizer> fillColorizer;
@property (readwrite) BOOL colorEach __deprecated_msg("use pointColorizer instead.");;
@property (readwrite) BOOL markerHidden;
@property (readwrite) DXLegendItemsBehavior legendItemsBehavior;
@end

@interface DXStackedAreaSeries : DXSeries
@property (readwrite, nullable) DXAreaSeriesStyle* style;
@property (readwrite, nullable) DXMarkerSeriesLabel* label;
@property (readwrite, nullable) id<DXStackedPointColorizer> pointColorizer;
@property (readwrite, nullable) id<DXStackedSegmentColorizer> segmentColorizer;
@property (readwrite, nullable) id<DXStackedFillColorizer> fillColorizer;
@property (readwrite) BOOL colorEach __deprecated_msg("use pointColorizer instead.");;
@property (readwrite) BOOL markerHidden;
@property (readwrite) DXLegendItemsBehavior legendItemsBehavior;
@end

@interface DXFullStackedAreaSeries : DXStackedAreaSeries

@end

@interface DXStepAreaSeries : DXAreaSeries
@property (readwrite) BOOL invertedStep;
@end


@interface DXRangeAreaSeries : DXSeries
@property (readwrite, nullable) DXRangeAreaSeriesStyle* style;
@property (readwrite, nullable) DXRangeAreaSeriesLabel* label;
@property (readwrite, nullable) id<DXPointColorizer> line1PointColorizer;
@property (readwrite, nullable) id<DXPointColorizer> line2PointColorizer;
@property (readwrite, nullable) id<DXSegmentColorizer> line1SegmentColorizer;
@property (readwrite, nullable) id<DXSegmentColorizer> line2SegmentColorizer;
@property (readwrite, nullable) id<DXRangeFillColorizer> fillColorizer;
@property (readwrite) BOOL line1MarkerHidden;
@property (readwrite) BOOL line2MarkerHidden;
@property (readwrite) BOOL colorEach __deprecated_msg("use pointColorizer instead.");;
@property (readwrite) DXLegendItemsBehavior legendItemsBehavior;
@end

