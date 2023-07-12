#import <UIKit/UIKit.h>
#import "DXLProtocols.h"
#import "ItemContainerLayout.h"

NS_ASSUME_NONNULL_BEGIN

@interface ItemContainerView: UIView

@property (readwrite, nonatomic) ItemContainerLayout* layout;
@end

NS_ASSUME_NONNULL_END
