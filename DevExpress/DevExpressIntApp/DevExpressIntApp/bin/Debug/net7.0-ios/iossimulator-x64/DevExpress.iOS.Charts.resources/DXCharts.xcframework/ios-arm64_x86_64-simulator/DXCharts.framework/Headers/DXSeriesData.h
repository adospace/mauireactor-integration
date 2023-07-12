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
#import <UIKit/UIKit.h>
#import "DXEnums.h"

@class DXSeries;

@protocol DXSeriesDataDelegate <NSObject>
    -(void) dataItemDidAdd;
    -(void) dataItemDidInsertAtIndex : (int) index;
    -(void) dataItemDidRemoveAtIndex : (int) index;
    -(void) dataItemDidChangeAtIndex : (int) index;

    -(void) dataDidReload;
    -(void) dataItemsDidInsertAtIndex: (int) index count: (int) count;
    -(void) dataItemsDidRemoveAtIndex: (int) index count: (int) count;
    -(void) dataItemsDidChangeAtIndex: (int) index count: (int) count;
    -(void) dataItemsDidAddWithCount: (int) count;
@end


@protocol DXSeriesData <NSObject>

@end

@protocol DXCalculatedSeriesData <DXSeriesData>
    -(DXSeries *) getSource;
@end


@protocol DXNumericSeriesData <DXSeriesData>

-(int) getDataCount;
-(double) getArgumentByIndex: (int) index;
-(double) getValueByIndex: (int) index;

@optional
@property (nonatomic, weak) id  <DXSeriesDataDelegate> delegate;

@end

@protocol DXDateTimeSeriesData <DXSeriesData>

-(int) getDataCount;
-(NSDate *) getArgumentByIndex: (int) index;
-(double) getValueByIndex: (int) index;

@optional
@property (nonatomic, weak) id  <DXSeriesDataDelegate> delegate;

@end

@protocol DXBatchNumericSeriesData <DXNumericSeriesData>

-(int) fillArguments:(double[])data fromIndex:(int)index andCount:(int)count;
-(int) fillValues:(double[])data fromIndex:(int)index andCount:(int)count;

@end

@protocol DXBatchDateTimeAsNumericSeriesData <DXSeriesData>

-(int) getDataCount;
-(double) getArgumentByIndex: (int) index;
-(double) getValueByIndex: (int) index;
-(int) fillArguments:(double[])data fromIndex:(int)index andCount:(int)count;
-(int) fillValues:(double[])data fromIndex:(int)index andCount:(int)count;

@end


@protocol DXWeightedNumericSeriesData <DXNumericSeriesData>

-(double) getWeightByIndex: (int) index;

@end

@protocol DXRangeNumericSeriesData <DXSeriesData>
-(int) getDataCount;
-(double) getArgumentByIndex: (int) index;
-(double) getValue1ByIndex: (int) index;
-(double) getValue2ByIndex: (int) index;
@end

@protocol DXWeightedDateTimeSeriesData <DXDateTimeSeriesData>
-(double) getWeightByIndex: (int) index;
@end

@protocol DXRangeDateTimeSeriesData <DXSeriesData>
-(int) getDataCount;
-(NSDate *) getArgumentByIndex: (int) index;
-(double) getValue1ByIndex: (int) index;
-(double) getValue2ByIndex: (int) index;
@end

@protocol DXQualitativeSeriesData <DXSeriesData>
-(int) getDataCount;
-(NSString *) getArgumentByIndex: (int) index;
-(double) getValueByIndex: (int) index;

@optional
@property (nonatomic, weak) id  <DXSeriesDataDelegate> delegate;

@end

@protocol DXWeightedQualitativeSeriesData <DXQualitativeSeriesData>
-(double) getWeightByIndex: (int) index;
@end

@protocol DXRangeQualitativeSeriesData <DXSeriesData>
-(int) getDataCount;
-(NSString *) getArgumentByIndex: (int) index;
-(double) getValue1ByIndex: (int) index;
-(double) getValue2ByIndex: (int) index;
@end

@protocol DXFinancialSeriesData <DXSeriesData>

-(int) getDataCount;
-(NSDate *) getArgumentByIndex: (int) index;
-(double) getHighValueByIndex: (int) index;
-(double) getLowValueByIndex: (int) index;
-(double) getOpenValueByIndex: (int) index;
-(double) getCloseValueByIndex: (int) index;

@optional
@property (nonatomic, weak) id  <DXSeriesDataDelegate> delegate;

@end



@protocol DXPieSeriesData

-(int) getDataCount;
-(NSString *) getLabelByIndex: (int) index;
-(double) getValueByIndex: (int) index;

@optional
@property (nonatomic, weak) id  <DXSeriesDataDelegate> delegate;

@end



@protocol DXCustomColorizerNumericValueProvider <NSObject>

-(double) getValueForColorizerByIndex:(int)index;

@end


