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
#import <UIKit/UIKit.h>

//! Project version number for DXCharts.
FOUNDATION_EXPORT double DXChartsVersionNumber;

//! Project version string for DXCharts.
FOUNDATION_EXPORT const unsigned char DXChartsVersionString[];

#import <DXCharts/DXEnums.h>
#import <DXCharts/DXPalette.h>
#import <DXCharts/DXChartElementStyle.h>
#import <DXCharts/DXTextStyle.h>
#import <DXCharts/DXSeriesLabelStyle.h>
#import <DXCharts/DXChartStyle.h>
#import <DXCharts/DXAxisStyle.h>
#import <DXCharts/DXSeriesStyle.h>
#import <DXCharts/DXLegendStyle.h>
#import <DXCharts/DXAxisLabelStyle.h>
#import <DXCharts/DXChartElement.h>
#import <DXCharts/DXSeriesData.h>
#import <DXCharts/DXSeriesLabel.h>
#import <DXCharts/DXSeriesBase.h>
#import <DXCharts/DXSeries.h>
#import <DXCharts/DXBarSeries.h>
#import <DXCharts/DXLineSeries.h>
#import <DXCharts/DXAreaSeries.h>
#import <DXCharts/DXFinancialSeries.h>
#import <DXCharts/DXCalculatedSeries.h>
#import <DXCharts/DXAxisLabel.h>
#import <DXCharts/DXChartSynchronizer.h>
#import <DXCharts/DXAxis.h>
#import <DXCharts/DXDisplayPosition.h>
#import <DXCharts/DXAxisLayout.h>
#import <DXCharts/DXLogarithmicOptions.h>
#import <DXCharts/DXLabelFormats.h>
#import <DXCharts/DXNumericAxis.h>
#import <DXCharts/DXDateTimeAxisX.h>
#import <DXCharts/DXQualitativeAxisX.h>
#import <DXCharts/DXLegend.h>
#import <DXCharts/DXChartHitInfo.h>
#import <DXCharts/DXChartDelegate.h>
#import <DXCharts/DXSelectionInfo.h>
#import <DXCharts/DXChartBase.h>
#import <DXCharts/DXChart.h>
#import <DXCharts/DXPieChart.h>
#import <DXCharts/DXSeriesLabelTextProvider.h>
#import <DXCharts/DXAxisTitle.h>
#import <DXCharts/DXStripBase.h>
#import <DXCharts/DXNumericStrip.h>
#import <DXCharts/DXDateTimeStrip.h>
#import <DXCharts/DXQualitativeStrip.h>
#import <DXCharts/DXStripStyle.h>
#import <DXCharts/DXConstantLineBase.h>
#import <DXCharts/DXNumericConstantLine.h>
#import <DXCharts/DXDateTimeConstantLine.h>
#import <DXCharts/DXQualitativeConstantLine.h>
#import <DXCharts/DXConstantLineStyle.h>
#import <DXCharts/DXHintBehavior.h>
#import <DXCharts/DXHintStyle.h>
#import <DXCharts/DXHint.h>
#import <DXCharts/DXHintStyleBase.h>
#import <DXCharts/DXPieHint.h>
#import <DXCharts/DXPieHintStyle.h>
#import <DXCharts/DXCrosshairLabelPosition.h>
#import <DXCharts/DXPieCenterLabel.h>
#import <DXCharts/DXColorStop.h>
#import <DXCharts/DXValueBandPointColorizer.h>
#import <DXCharts/DXColorizerProtocols.h>
#import <DXCharts/DXCustomColorizer.h>
#import <DXCharts/DXColoredPointInfo.h>
#import <DXCharts/DXColorEachPointColorizer.h>
#import <DXCharts/DXGradientSegmentColorizer.h>
#import <DXCharts/DXSegmentBasedFillColorizer.h>
#import <DXCharts/DXCustomLegendItem.h>
#import <DXCharts/DXTransparencyGradient.h>
#import <DXCharts/DXHintPointTextProvider.h>

// In this header, you should import all the public headers of your framework using statements like #import <DXCharts/PublicHeader.h>
