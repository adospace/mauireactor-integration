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
#import "DXSeriesLabelStyle.h"
#import "DXChartElement.h"
#import "DXEnums.h"
#import "DXSeriesLabelTextProvider.h"

typedef NS_ENUM(NSInteger, DXBarSeriesLabelPosition) {
    DXBarSeriesLabelPositionOutside = 0,
    DXBarSeriesLabelPositionInsideTop = 1,
    DXBarSeriesLabelPositionInsideBottom = 2,
    DXBarSeriesLabelPositionCenter = 3
};

typedef NS_ENUM(NSInteger, DXRangeBarSeriesLabelPosition) {
    DXRangeBarSeriesLabelPositionOutside = 0,
    DXRangeBarSeriesLabelPositionInside = 1
};

typedef NS_ENUM(NSInteger, DXRangeSeriesLabelKind) {
    DXRangeSeriesLabelKindOneLabel = 0,
    DXRangeSeriesLabelKindTwoLabels = 1,
    DXRangeSeriesLabelKindHighValueLabel = 2,
    DXRangeSeriesLabelKindLowValueLabel = 3
};

typedef NS_ENUM(NSInteger, DXBarSeriesLabelBehavior) {
    DXBarSeriesLabelBehaviorCut = 0,
    DXBarSeriesLabelBehaviorMoving = 1
};

typedef NS_ENUM(NSInteger, DXFinancialSeriesLabelPosition) {
    DXFinancialSeriesLabelPositionTop = 0,
    DXFinancialSeriesLabelPositionBottom = 1
};

typedef NS_ENUM(NSInteger, DXPieSeriesLabelPosition) {
    DXPieSeriesLabelPositionInside = 0,
    DXPieSeriesLabelPositionTwoColumns = 1
};

typedef NS_ENUM(NSInteger, DXBubbleSeriesLabelPosition) {
    DXBubbleSeriesLabelPositionCenter = 0,
    DXBubbleSeriesLabelPositionOutside = 1
};

@interface DXSeriesLabel : DXChartElement
@property (readwrite, copy, nonatomic, nullable) NSString* textPattern;
@property (readwrite, nullable) id<DXSeriesLabelTextProvider> textProvider;
@property (readwrite) CGFloat indent;
@property (readwrite) DXDefaultBoolean hidden;

@end

@interface DXBarSeriesLabel : DXSeriesLabel
@property (readwrite, nullable) DXSeriesLabelStyle * style;
@property (readwrite) DXBarSeriesLabelBehavior behavior;
@property (readwrite) DXBarSeriesLabelPosition position;
@end

@interface DXRangeBarSeriesLabel : DXSeriesLabel
@property (readwrite, nullable) DXSeriesLabelStyle * style;
@property (readwrite) DXBarSeriesLabelBehavior behavior;
@property (readwrite) DXRangeBarSeriesLabelPosition position;
@property (readwrite) DXRangeSeriesLabelKind kind;
@end

@interface DXStackedBarSeriesLabel : DXBarSeriesLabel
@end

@interface DXMarkerSeriesLabel : DXSeriesLabel
@property (readwrite) CGFloat angle;
@property (readwrite, nullable) DXSeriesLabelStyle * style;
@end

@interface DXRangeAreaSeriesLabel : DXSeriesLabel
@property (readwrite, nullable) DXSeriesLabelStyle * style;
@property (readwrite) CGFloat highValueAngle;
@property (readwrite) CGFloat lowValueAngle;
@property (readwrite) DXRangeSeriesLabelKind kind;
@end

@interface DXBubbleSeriesLabel : DXMarkerSeriesLabel
@property (readwrite) DXBubbleSeriesLabelPosition position;
@end

@interface DXFinancialSeriesLabel : DXSeriesLabel
@property (readwrite) DXFinancialSeriesLabelPosition position;
@property (readwrite, nullable) DXSeriesLabelStyle * style;
@end

@interface DXPieSeriesLabel : DXSeriesLabel
@property (readwrite) DXPieSeriesLabelPosition position;
@property (readwrite, nullable) DXPieSeriesLabelStyle * style;
@end
