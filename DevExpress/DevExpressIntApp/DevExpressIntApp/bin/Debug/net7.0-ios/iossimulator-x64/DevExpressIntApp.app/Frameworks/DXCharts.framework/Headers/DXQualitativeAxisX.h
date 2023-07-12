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
#import "DXQualitativeStrip.h"
#import "DXQualitativeConstantLine.h"

@interface DXQualitativeRange : DXRangeBase

@property (readwrite, nullable) NSString * min;
@property (readwrite, nullable) NSString * max;
@property (readwrite, nullable) NSString * visualMin;
@property (readwrite, nullable) NSString * visualMax;


@end

@interface DXQualitativeAxisX : DXAxisX

@property (readwrite, nullable) DXQualitativeRange * range;
@property (readwrite, nullable) id<DXQualitativeAxisLabelTextFormatter> labelTextFormatter;

-(void)addStrip:(nonnull DXQualitativeStrip *)strip;
-(void)removeStrip:(nonnull DXQualitativeStrip *)strip;
-(void)addConstantLine:(nonnull DXQualitativeConstantLine *)line;
-(void)removeConstantLine:(nonnull DXQualitativeConstantLine *)line;

@end
