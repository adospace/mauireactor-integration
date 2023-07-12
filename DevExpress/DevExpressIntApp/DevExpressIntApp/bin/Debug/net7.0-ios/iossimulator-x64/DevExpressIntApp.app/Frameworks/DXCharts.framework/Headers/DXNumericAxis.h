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
#import "DXEnums.h"
#import "DXAxis.h"
#import "DXNumericStrip.h"
#import "DXNumericConstantLine.h"
#import "DXLogarithmicOptions.h"
#import "DXAxisLabelNotation.h"

@interface DXNumericRange : DXRangeBase

@property (readwrite) double min;
@property (readwrite) double max;
@property (readwrite) double visualMin;
@property (readwrite) double visualMax;

@end


@interface DXNumericAxisX : DXAxisX

@property (readwrite, nullable) DXNumericRange * range;
@property (readwrite) double gridAlignment;
@property (readwrite) double gridOffset;
@property (readwrite, nullable) DXLogarithmicOptions* logarithmicOptions;
@property (readwrite, nullable) id<DXNumericAxisLabelTextFormatter> labelTextFormatter;
@property (readwrite, nullable) DXAxisLabelNotationBase* labelValueNotation;

-(void)addStrip:(nonnull DXNumericStrip *)strip;
-(void)removeStrip:(nonnull DXNumericStrip *)strip;
-(void)addConstantLine:(nonnull DXNumericConstantLine *)line;
-(void)removeConstantLine:(nonnull DXNumericConstantLine *)line;

@end


@interface DXNumericAxisY : DXAxisBase

@property (readwrite, nullable) DXNumericRange * range;
@property (readwrite) BOOL alwaysShowZeroLevel;
@property (readwrite) DXAutoRangeMode autoRangeMode;
@property (readwrite) double gridAlignment;
@property (readwrite) double gridOffset;
@property (readwrite, nullable) DXLogarithmicOptions* logarithmicOptions;
@property (readwrite, nullable) id<DXNumericAxisLabelTextFormatter> labelTextFormatter;
@property (readwrite, nullable) DXAxisLabelNotationBase* labelValueNotation;

-(void)addStrip:(nonnull DXNumericStrip *)strip;
-(void)removeStrip:(nonnull DXNumericStrip *)strip;
-(void)addConstantLine:(nonnull DXNumericConstantLine *)line;
-(void)removeConstantLine:(nonnull DXNumericConstantLine *)line;

@end
