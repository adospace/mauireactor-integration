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
#import "DXSeries.h"
#import "DXSeriesStyle.h"

@interface DXCalculatedSeries : DXSeries

@end

@interface DXMovingAverageIndicator : DXCalculatedSeries
    @property (readwrite, nullable) DXLineIndicatorStyle * style;
    @property (readwrite) DXValueLevel valueLevel;
    @property (readwrite) int pointsCount;
@end

@interface DXEnvelopeIndicator : DXCalculatedSeries
    @property (readwrite, nullable) DXEnvelopeIndicatorStyle * style;
    @property (readwrite) DXValueLevel valueLevel;
    @property (readwrite) int pointsCount;
    @property (readwrite) double factor;
@end

@interface DXExponentialMovingAverageIndicator : DXCalculatedSeries
    @property (readwrite, nullable) DXLineIndicatorStyle * style;
    @property (readwrite) DXValueLevel valueLevel;
    @property (readwrite) int pointsCount;
@end

@interface DXTriangularMovingAverageIndicator : DXCalculatedSeries
    @property (readwrite, nullable) DXLineIndicatorStyle * style;
    @property (readwrite) DXValueLevel valueLevel;
    @property (readwrite) int pointsCount;
@end

@interface DXWeightedMovingAverageIndicator : DXCalculatedSeries
    @property (readwrite, nullable) DXLineIndicatorStyle * style;
    @property (readwrite) DXValueLevel valueLevel;
    @property (readwrite) int pointsCount;
@end

@interface DXMovingAverageConvergenceDivergenceIndicator : DXCalculatedSeries
    @property (readwrite, nullable) DXMovingAverageConvergenceDivergenceIndicatorStyle * style;
    @property (readwrite) DXValueLevel valueLevel;
    @property (readwrite) int shortPeriod;
    @property (readwrite) int longPeriod;
    @property (readwrite) int signalSmoothingPeriod;
@end

@interface DXBollingerBandsIndicator : DXCalculatedSeries
    @property (readwrite, nullable) DXBollingerBandsIndicatorStyle * style;
    @property (readwrite) DXValueLevel valueLevel;
    @property (readwrite) int pointsCount;
    @property (readwrite) double standardDeviationMultiplier;
@end

@interface DXRegressionLineIndicator : DXCalculatedSeries
    @property (readwrite, nullable) DXLineIndicatorStyle * style;
    @property (readwrite) DXValueLevel valueLevel;
@end

@interface DXMedianPriceIndicator : DXCalculatedSeries
    @property (readwrite, nullable) DXLineIndicatorStyle * style;
@end

@interface DXAverageTrueRangeIndicator : DXCalculatedSeries
    @property (readwrite, nullable) DXLineIndicatorStyle * style;
    @property (readwrite) int pointsCount;
@end

@interface DXChaikinsVolatilityIndicator : DXCalculatedSeries
    @property (readwrite, nullable) DXLineIndicatorStyle * style;
    @property (readwrite) int pointsCount;
@end

@interface DXCommodityChannelIndexIndicator : DXCalculatedSeries
    @property (readwrite, nullable) DXLineIndicatorStyle * style;
    @property (readwrite) int pointsCount;
@end

@interface DXMassIndexIndicator : DXCalculatedSeries
    @property (readwrite, nullable) DXLineIndicatorStyle * style;
    @property (readwrite) int movingAveragePointsCount;
    @property (readwrite) int sumPointsCount;
@end

@interface DXRateOfChangeIndicator : DXCalculatedSeries
    @property (readwrite, nullable) DXLineIndicatorStyle * style;
    @property (readwrite) DXValueLevel valueLevel;
    @property (readwrite) int pointsCount;
@end

@interface DXRelativeStrengthIndexIndicator : DXCalculatedSeries
    @property (readwrite, nullable) DXLineIndicatorStyle * style;
    @property (readwrite) DXValueLevel valueLevel;
    @property (readwrite) int pointsCount;
@end

@interface DXStandardDeviationIndicator : DXCalculatedSeries
    @property (readwrite, nullable) DXLineIndicatorStyle * style;
    @property (readwrite) DXValueLevel valueLevel;
    @property (readwrite) int pointsCount;
@end

@interface DXTypicalPriceIndicator : DXCalculatedSeries
    @property (readwrite, nullable) DXLineIndicatorStyle * style;
@end

@interface DXWeightedCloseIndicator : DXCalculatedSeries
    @property (readwrite, nullable) DXLineIndicatorStyle * style;
@end

@interface DXWilliamsRIndicator : DXCalculatedSeries
    @property (readwrite, nullable) DXLineIndicatorStyle * style;
    @property (readwrite) int pointsCount;
@end

