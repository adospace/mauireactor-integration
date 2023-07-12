#import <Foundation/Foundation.h>
#import "DXProtocols.h"

@interface DXRulerSettings : NSObject

-(instancetype)initWithViewProviderContainer:(id<ViewProviderContainer>)viewProviderContainer andHeadViewProviderContainer:(id<ViewProviderContainer>)headerViewProviderContainer
               andWidth:(double)width andHidden:(bool)hidden;
@property(readonly) bool hidden;
@property(readonly) double width;
@property(readonly) id<ViewProviderContainer> viewProviderContainer;
@property(readonly) id<ViewProviderContainer> headViewProviderContainer;

@end
