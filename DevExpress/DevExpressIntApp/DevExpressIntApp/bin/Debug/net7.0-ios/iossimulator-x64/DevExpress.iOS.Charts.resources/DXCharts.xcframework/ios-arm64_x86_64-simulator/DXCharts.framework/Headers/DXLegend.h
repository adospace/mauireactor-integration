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
#import "DXLegendStyle.h"
#import "DXChartElement.h"

typedef NS_ENUM(NSInteger, DXLegendHorizontalPosition) {
    DXLegendHorizontalPositionLeftOutside = 0,
    DXLegendHorizontalPositionLeft = 1,
    DXLegendHorizontalPositionCenter = 2,
    DXLegendHorizontalPositionRight = 3,
    DXLegendHorizontalPositionRightOutside = 4
} ;

typedef NS_ENUM(NSInteger, DXLegendVerticalPosition) {
    DXLegendVerticalPositionTopOutside = 0,
    DXLegendVerticalPositionTop = 1,
    DXLegendVerticalPositionCenter = 2,
    DXLegendVerticalPositionBottom = 3,
    DXLegendVerticalPositionBottomOutside = 4
};

typedef NS_ENUM(NSInteger, DXLegendOrientation) {
    DXLegendOrientationLeftToRight = 0,
    DXLegendOrientationTopToBottom = 1
};


@interface DXLegend : DXChartElement
    @property(readwrite) BOOL hidden;
    @property(readwrite) DXLegendOrientation orientation;
    @property(readwrite) DXLegendHorizontalPosition horizontalPosition;
    @property(readwrite) DXLegendVerticalPosition verticalPosition;

    @property (readwrite, nullable) DXLegendStyle * style;
@end
