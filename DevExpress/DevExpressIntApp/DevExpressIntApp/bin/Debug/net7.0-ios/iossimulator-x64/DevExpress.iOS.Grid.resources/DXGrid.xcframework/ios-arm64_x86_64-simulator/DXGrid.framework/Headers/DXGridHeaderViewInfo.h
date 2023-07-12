#import <Foundation/Foundation.h>
#import <UIkit/UIkit.h>
#import "Enums.h"
#import "DXGridCellViewInfoBase.h"
#import "ViewProviders.h"

NS_ASSUME_NONNULL_BEGIN

@interface DXGridHeaderViewInfo : DXGridCellViewInfoBase

@property (readwrite, nonatomic) DXSortOrder sortOrder;
@property (readwrite, nonatomic) NSString* caption;
@property (readwrite, nonatomic) NSString* fieldName;
@property (readwrite, nonatomic) id<DXGridViewProvider> contentViewProvider;

@end

NS_ASSUME_NONNULL_END
