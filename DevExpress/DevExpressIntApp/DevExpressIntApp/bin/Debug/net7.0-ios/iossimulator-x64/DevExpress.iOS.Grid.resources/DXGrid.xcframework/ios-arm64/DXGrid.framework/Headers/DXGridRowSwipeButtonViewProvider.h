#import <UIKit/UIKit.h>
#import "ViewProviders.h"
#import "DXGridSwipeButtonViewInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface DXGridRowSwipeButtonViewProvider : NSObject <DXGridReusableViewProvider>

-(instancetype) initWithViewInfo:(DXGridSwipeButtonViewInfo*)viewInfo;

@property (nonatomic, strong) UIImage* image;
@property (nonatomic, strong) NSString* caption;

@end

NS_ASSUME_NONNULL_END
