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
#import "DXChartBase.h"
#import "DXSeries.h"
#import "DXCalculatedSeries.h"
#import "DXAxis.h"
#import "DXNumericAxis.h"
#import "DXChartStyle.h"
#import "DXHint.h"

typedef NS_ENUM(NSInteger, DXAxisNavigationMode) {
    DXAxisNavigationModeNone = 0,
    DXAxisNavigationModeScrolling = 1,
    DXAxisNavigationModeScrollingAndZooming = 2
};

@interface DXChart : DXChartBase

//elements
@property (readwrite, nullable) DXChartStyle * style;
@property (readwrite, nullable) DXAxisX * axisX;
@property (readwrite, nullable) DXNumericAxisY * axisY;
@property (readonly, nonatomic, nonnull, copy) NSArray<DXSeries*> *series;
@property (readwrite) DXAxisNavigationMode axisXNavigationMode;
@property (readwrite) DXAxisNavigationMode axisYNavigationMode;
@property (readwrite) BOOL rotated;
@property (readwrite) double axisMaxZoomPercent;
@property (readwrite) BOOL scrollIndicatorsEnabled;

- (void) addSeries: (nonnull DXSeries*) series;
- (void) removeSeries: (nonnull DXSeries*) series;
- (void) removeSeriesAtIndex: (NSInteger) index;
- (void) removeAllSeries;

@property (readwrite, nullable) DXHint *hint;

@end
