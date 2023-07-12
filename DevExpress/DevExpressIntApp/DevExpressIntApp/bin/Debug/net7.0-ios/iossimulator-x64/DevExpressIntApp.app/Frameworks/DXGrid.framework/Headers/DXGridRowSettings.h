#import <Foundation/Foundation.h>
#import "DXGridColumnSettings.h"
#import "DXGridRowSwipeButtonSettings.h"


NS_ASSUME_NONNULL_BEGIN

@interface DXGridRowSettings : NSObject

-(instancetype)initWithRowViewProvider:(id)rowViewProvider
            andWithGroupRowViewProvider:(id)groupRowViewProvider
            andWithDragPreviewProvider:(nullable id)dragPreviewProvider
            andWithDropPreviewProvider:(nullable id)dropPreviewProvider
                      andDataRowHeight:(double)dataRowHeight
                     andGroupRowHeight:(double)groupRowHeight
                andSwipeButtonSettings:(NSArray<DXGridRowSwipeButtonSettings*>*)swipeButtons
                      andFullSwipeType:(FullSwipeType)fullSwipeType;

@property (readonly) id rowViewProvider;
@property (readonly) id groupRowViewProvider;
@property (readonly, nullable) id dragPreviewProvider;
@property (readonly, nullable) id dropPreviewProvider;
@property (readonly) double dataRowHeight;
@property (readonly) double groupRowHeight;
@property (readonly) NSArray<DXGridRowSwipeButtonSettings*>* swipeButtons;
@property (readonly) FullSwipeType fullSwipeType; 

@property id dataProvider;

@end

NS_ASSUME_NONNULL_END
