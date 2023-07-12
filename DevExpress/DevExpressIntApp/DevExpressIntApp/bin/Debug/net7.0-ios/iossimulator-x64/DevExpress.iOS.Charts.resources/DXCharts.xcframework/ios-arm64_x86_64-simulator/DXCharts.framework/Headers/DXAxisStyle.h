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
#import "DXChartElementStyle.h"
#import "DXEnums.h"

@interface DXAxisStyle : DXChartElementStyle

@property (readwrite, nullable) UIColor * lineColor;
@property (readwrite) CGFloat lineThickness;
@property (readwrite) BOOL lineHidden;

@property (readwrite) BOOL majorTickmarksHidden;
@property (readwrite) CGFloat majorTickmarkLength;
@property (readwrite) CGFloat majorTickmarkThickness;
@property (readwrite) NSArray<NSNumber*>* _Nullable majorTickmarkDashes;

@property (readwrite) BOOL minorTickmarksHidden;
@property (readwrite) CGFloat minorTickmarkLength;
@property (readwrite) CGFloat minorTickmarkThickness;
@property (readwrite) NSArray<NSNumber*>* _Nullable minorTickmarkDashes;

@property (readwrite) BOOL majorGridlinesHidden;
@property (readwrite, nullable) UIColor * majorGridlinesColor;
@property (readwrite) CGFloat majorGridlinesThickness;
@property (readwrite) NSArray<NSNumber*>* _Nullable majorGridlineDashes;

@property (readwrite) BOOL minorGridlinesHidden;
@property (readwrite, nullable) UIColor * minorGridlinesColor;
@property (readwrite) CGFloat minorGridlinesThickness;
@property (readwrite) NSArray<NSNumber*>* _Nullable minorGridlineDashes;

@property (readwrite) BOOL interlacedHidden;
@property (readwrite, nullable) UIColor * interlacedColor;

@end
