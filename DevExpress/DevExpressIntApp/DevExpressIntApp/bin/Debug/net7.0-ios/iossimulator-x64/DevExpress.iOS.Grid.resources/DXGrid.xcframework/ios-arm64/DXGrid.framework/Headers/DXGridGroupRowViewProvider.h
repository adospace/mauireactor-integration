#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "DXGridGroupRowViewInfo.h"


@protocol DXGridReusableViewProvider;

@interface DXGridGroupRowViewProvider : NSObject

-(instancetype) initWithContentViewProvider:(id<DXGridReusableViewProvider>)contentViewProvider
                    andGroupRowViewInfo:(DXGridGroupRowViewInfo*)groupRowViewInfo;

@property (readonly) id<DXGridReusableViewProvider> contentViewProvider;

@end
