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
#import "DXChartElement.h"
#import "DXAxisStyle.h"
#import "DXAxisLabel.h"
#import "DXAxisTitle.h"
#import "DXAxisHintOptions.h"
#import "DXChartSynchronizer.h"
#import "DXStripBase.h"
#import "DXConstantLineBase.h"
#import "DXAxisLayout.h"
#import "DXDisplayPosition.h"

typedef NS_ENUM(NSInteger, DXAxisPosition) {
    DXAxisPositionNear = 0,
    DXAxisPositionFar = 1,
    DXAxisAbsolutePosition = 2,
    DXAxisRelativePosition = 3
};


@interface DXRangeBase : NSObject
@property (readwrite) double sideMarginValue;

-(void) reset;
-(void) resetVisualRange;
@end


@interface DXAxisBase : DXChartElement

@property (readwrite, nullable) DXChartSynchronizer * synchronizer;
@property (readwrite, nullable) DXAxisLabel * label;
@property (readwrite, nullable) DXAxisTitle* title;
@property (readwrite, nullable) DXAxisStyle * style;
@property (readwrite) DXAxisPosition position __deprecated_msg("use displayPosition instead.");
@property (readwrite, nonnull) DXAxisDisplayPositionBase* displayPosition;
@property (readwrite) BOOL hidden;
@property (readwrite, nullable) DXAxisHintOptions *hintOptions;
@property (readwrite, nullable) DXAxisLayout* layout;
@property (readonly, nonnull) NSArray<DXStripBase*> *strips;
@property (readonly, nonnull) NSArray<DXConstantLineBase*> *constantLines;

@end


@interface DXAxisX : DXAxisBase
@end


@protocol DXNumericAxisLabelTextFormatter <NSObject>
NS_ASSUME_NONNULL_BEGIN
-(NSString *)format : (double) value;
NS_ASSUME_NONNULL_END
@end

@protocol DXDateTimeAxisLabelTextFormatter <NSObject>
NS_ASSUME_NONNULL_BEGIN
-(NSString *)format : (NSDate *) value;
NS_ASSUME_NONNULL_END
@end

@protocol DXQualitativeAxisLabelTextFormatter <NSObject>
NS_ASSUME_NONNULL_BEGIN
-(NSString *)format : (NSString *) value;
NS_ASSUME_NONNULL_END
@end

