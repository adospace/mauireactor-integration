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

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, DXLabelPosition) {
    DXLabelPositionLowValueLabel = 0,
    DXLabelPositionHighValueLabel = 1,
    DXLabelPositionCenterLabel = 2
};

@interface DXSeriesLabelValuesBase : NSObject
@property (readonly, nullable) NSArray* pointIndexes;
@property (readonly, copy, nonatomic, nullable) NSString* seriesName;
@end


@interface DXSeriesLabelValues : DXSeriesLabelValuesBase
@property (readonly) double argument;
@property (readonly, nonatomic, nullable) NSDate* dateTimeArgument;
@property (readonly, copy, nonatomic, nullable) NSString* qualitativeArgument;
@property (readonly) double value;
@end


@interface DXFullStackedLabelValues : DXSeriesLabelValues
@property (readonly) double percentValue;
@end


@interface DXRangeSeriesLabelValues : DXSeriesLabelValuesBase
@property (readonly) DXLabelPosition position;
@property (readonly) double argument;
@property (readonly, nonatomic, nullable) NSDate* dateTimeArgument;
@property (readonly, copy, nonatomic, nullable) NSString* qualitativeArgument;
@property (readonly) double highValue;
@property (readonly) double lowValue;
@end


@interface DXFinancialSeriesLabelValues : DXSeriesLabelValuesBase
@property (readonly, nonatomic, nullable) NSDate* argument;
@property (readonly) double highValue;
@property (readonly) double lowValue;
@property (readonly) double openValue;
@property (readonly) double closeValue;
@end


@interface DXPieSeriesLabelValues : DXSeriesLabelValuesBase
@property (readonly, copy, nonatomic, nullable) NSString* label;
@property (readonly) double value;
@property (readonly) double percentValue;
@end


@protocol DXSeriesLabelTextProvider <NSObject>
NS_ASSUME_NONNULL_BEGIN
-(NSString *)format : (DXSeriesLabelValuesBase *) value;
NS_ASSUME_NONNULL_END
@end
