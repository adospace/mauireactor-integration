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
#import <UIKit/UIKit.h>
#import "DXSeriesPointInfo.h"

typedef NS_ENUM(NSInteger, DXChartSelectionMode) {
    DXChartSelectionModeNone = 0,
    DXChartSelectionModeSingle = 1,
    DXChartSelectionModeMultiple = 2
};
typedef NS_ENUM(NSInteger, DXChartSelectionKind) {
    DXChartSelectionKindSeries = 0,
    DXChartSelectionKindPoint = 1
};

typedef NS_ENUM(NSInteger, DXSelectionAction) {
    DXSelectionActionAdd = 0,
    DXSelectionActionRemove = 1,
    DXSelectionActionReplace = 2,
    DXSelectionActionReset = 3
};

@interface DXSelectionInfo : NSObject
@property (readonly) DXSelectionAction action;
@property (readonly, copy) DXSeriesPointInfo* selectedInfo;
@property (readonly, copy) DXSeriesPointInfo* deselectedInfo;
@end

