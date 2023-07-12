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
#import "DXAxis.h"
#import "DXDateTimeStrip.h"
#import "DXDateTimeConstantLine.h"

typedef NS_ENUM(NSInteger, DXAggregationType) {
    DXAggregationTypeMin,
    DXAggregationTypeMax,
    DXAggregationTypeSum,
    DXAggregationTypeCount,
    DXAggregationTypeAverage
};

typedef NS_ENUM(NSInteger, DXDateTimeMeasureUnit) {
    DXDateTimeMeasureUnitDefault = 0,
    DXDateTimeMeasureUnitMillisecond = 1,
    DXDateTimeMeasureUnitSecond = 2,
    DXDateTimeMeasureUnitMinute = 3,
    DXDateTimeMeasureUnitHour = 4,
    DXDateTimeMeasureUnitDay = 5,
    DXDateTimeMeasureUnitWeek = 6,
    DXDateTimeMeasureUnitMonth = 7,
    DXDateTimeMeasureUnitQuarter = 8,
    DXDateTimeMeasureUnitYear = 9,
};

@class DXLabelFormatAutoReplaceOptions;

@interface DXDateTimeRange : DXRangeBase

@property (readwrite, nullable) NSDate * min;
@property (readwrite, nullable) NSDate * max;
@property (readwrite, nullable) NSDate * visualMin;
@property (readwrite, nullable) NSDate * visualMax;

@end


@interface DXDateTimeAxisX : DXAxisX

@property(readwrite, nonatomic) DXDateTimeMeasureUnit measureUnit;
@property(readwrite, nonatomic) DXAggregationType aggregationType;
@property (readwrite, nullable) DXDateTimeRange * range;
@property (readwrite) DXDateTimeMeasureUnit gridAlignment;
@property (readwrite) NSInteger gridOffset;
@property (readwrite) NSInteger gridSpacing;
@property (readwrite, nullable) id<DXDateTimeAxisLabelTextFormatter> labelTextFormatter;
@property (readwrite) Boolean emptyRangesHidden;
@property (readwrite, nullable) DXLabelFormatAutoReplaceOptions* labelFormatAutoReplaceOptions;

-(void)addStrip:(nonnull DXDateTimeStrip *)strip;
-(void)removeStrip:(nonnull DXDateTimeStrip *)strip;
-(void)addConstantLine:(nonnull DXDateTimeConstantLine *)line;
-(void)removeConstantLine:(nonnull DXDateTimeConstantLine *)line;

@end
