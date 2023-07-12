#import <Foundation/Foundation.h>
#import "Enums.h"

NS_ASSUME_NONNULL_BEGIN

@class DXGridRowSettings;
@class DXGridRowSwipeButtonSettings;
@class DXGridSwipeButtonViewInfo;

@interface DXGridRowViewProvider : NSObject

-(instancetype) initWithCellViewInfo:(NSArray<DXGridCellViewInfo*>*)cellViewInfo andSwipeButtons:(NSArray<DXGridRowSwipeButtonSettings*>*)swipeButtons;

-(instancetype) initWithCellViewInfo:(NSArray<DXGridCellViewInfo*>*)cellViewInfo andSwipeButtons:(NSArray<DXGridRowSwipeButtonSettings*>*)swipeButtons andFullSwipeType:(FullSwipeType)fullSwipeType;

@property (readonly) NSArray<DXGridCellViewInfo*>* cellViewInfo;
@property (readonly) NSArray<DXGridRowSwipeButtonSettings*>* swipeButtons;

@end

NS_ASSUME_NONNULL_END
