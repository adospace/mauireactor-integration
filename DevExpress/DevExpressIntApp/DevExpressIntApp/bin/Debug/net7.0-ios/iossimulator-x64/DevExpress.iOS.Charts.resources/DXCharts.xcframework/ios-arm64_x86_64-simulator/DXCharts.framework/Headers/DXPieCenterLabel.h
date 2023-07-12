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
#import "DXPieCenterTextLabelStyle.h"

@class DXPieSeries;

@interface DXPieCenterLabel : DXChartElement
-(void) drawRectWithBounds:(CGRect) bounds withInnerBounds:(CGRect) innerBounds withSeries:(nonnull DXPieSeries*) series;
-(void) invalidate;
@end

@interface DXPieCenterTextLabel : DXPieCenterLabel

-(nullable instancetype)initWithPattern:(nonnull NSString*) textPattern;
@property (readwrite, nullable) DXPieCenterTextLabelStyle* style;
@property (readwrite, copy, nonatomic, nullable) NSString* textPattern;
@property (readwrite) CGFloat contentRatio;
@property (readwrite) BOOL adjustFontSize;

@end

typedef NS_ENUM(NSInteger, DXPieCenterImageLabelContentMode) {
    DXPieCenterImageLabelContentModeCenter = 0,
    DXPieCenterImageLabelContentModeScaleAspectFit = 1,
    DXPieCenterImageLabelContentModeScaleAspectInside = 2
};

@interface DXPieCenterImageLabel : DXPieCenterLabel

-(nullable instancetype)initWithImage:(nullable UIImage*) image;
@property(readwrite, nullable) UIImage* image;
@property (readwrite) CGFloat contentRatio;
@property (readwrite) DXPieCenterImageLabelContentMode contentMode;

@end



