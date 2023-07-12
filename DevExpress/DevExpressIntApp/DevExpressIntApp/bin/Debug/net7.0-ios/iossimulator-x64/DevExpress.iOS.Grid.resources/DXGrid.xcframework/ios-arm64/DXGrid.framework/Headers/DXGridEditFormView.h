#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DXGridEditFormViewInfo.h"
#import <DXEditors/KeyboardHelper.h>

@interface DXGridEditFormView : UIView <KeyboardHelperOwner, UIScrollViewDelegate>

-(void) updateWithEditFormViewInfo:(NSArray<DXGridEditFormViewInfo*>*)editFormViewInfo andRowIndex:(int)rowIndex;

@property (readwrite, nonatomic) UIEdgeInsets edgeInsets;

@property (readwrite, nonatomic) NSArray<DXGridEditFormViewInfo*>* viewInfo;
@property (readwrite, nonatomic) int rowHandle;


-(void) commit;
-(void) updateErrors;

@end

