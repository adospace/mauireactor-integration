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
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, DXDefaultBoolean) {
    DXDefaultBooleanYes = 1,
    DXDefaultBooleanNo = 0,
    DXDefaultBooleanDefault = 2
} ;

typedef NS_ENUM(NSInteger, DXAutoRangeMode) {
    DXAutoRangeModeDefault = 0,
    DXAutoRangeModeAllValues = 1,
    DXAutoRangeModeVisibleValues = 2
};

typedef NS_ENUM(NSInteger, DXSweepDirection) {
    DXSweepDirectionClockwise = 0,
    DXSweepDirectionCounterClockwise = 1,
};

typedef NS_ENUM(NSInteger, DXSelectionBehavior) {
    DXSelectionBehaviorHatch = 0,
    DXSelectionBehaviorExplode = 1,
};

typedef NS_ENUM(NSUInteger, DXChartTheme) {
    DXChartThemeLight = 0,
    DXChartThemeDark  = 1
};

typedef NS_ENUM(NSUInteger, DXHintShowMode) {
	DXHintShowModeDefault 		= 0,
    DXHintShowModeOnTap         = 1,
    DXHintShowModeOnLongPress   = 2
};

typedef NS_ENUM(NSUInteger, DXLabelPositionHorizontalAlignment) {
    DXLabelPositionHorizontalAlignmentLeft = 0,
    DXLabelPositionHorizontalAlignmentCenter = 1,
    DXLabelPositionHorizontalAlignmentRight = 2
};

typedef NS_ENUM(NSUInteger, DXLabelPositionVerticalAlignment) {
    DXLabelPositionVerticalAlignmentTop = 0,
    DXLabelPositionVerticalAlignmentCenter = 1,
    DXLabelPositionVerticalAlignmentBottom = 2
};

typedef NS_ENUM(NSInteger, DXValueLevel) {
    DXValueLevelAuto = 0,
    DXValueLevelValue = 1,
    DXValueLevelWeight = 2,
    DXValueLevelHigh = 3,
    DXValueLevelLow = 4,
    DXValueLevelOpen = 5,
    DXValueLevelClose = 6
};

typedef NS_ENUM(NSInteger, DXRangeSeriesValueLevel) {
    DXRangeSeriesValueLevelLow = 0,
    DXRangeSeriesValueLevelHigh = 1,
};

typedef NS_ENUM(NSInteger, DXLegendItemsBehavior) {
    DXLegendItemsBehaviorSeries = 0,
    DXLegendItemsBehaviorEachPoint = 1,
};
