#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <DXEditors/DXEditors.h>
#import "DXGridDataProvider.h"
#import "DXGridGroupRowViewInfo.h"

@interface DXGridGroupElementViewProviderBase : NSObject

-(instancetype) initWithDataProvider:(id<DXGridDataProvider>)dataProvider
                 andGroupRowViewInfo:(DXGridGroupRowViewInfo*)groupRowViewInfo
                      updateDisplayEdit:(void (^)(DXDisplayEdit*, DXGridGroupInfo*))updateDisplayEdit;

@end
