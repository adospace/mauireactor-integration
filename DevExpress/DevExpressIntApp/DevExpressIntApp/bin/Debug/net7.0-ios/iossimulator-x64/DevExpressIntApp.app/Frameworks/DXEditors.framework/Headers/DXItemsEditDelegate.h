#import <UIKit/UIKit.h>

@protocol DXItemsEditDelegate<DXTextEditDelegate>

@optional
-(void)didOpenDropdown;
-(void)didCloseDropdown;
-(UIView* _Nullable)getContentView;
-(bool)isDataEmpty;
-(NSString* _Nullable)getSelectedItemText;
-(void)applyFilterText:(nonnull NSString *)filterText;
-(void)ensureSelectionVisible;
-(void)clearValue;
-(bool)hasValue;
@end
