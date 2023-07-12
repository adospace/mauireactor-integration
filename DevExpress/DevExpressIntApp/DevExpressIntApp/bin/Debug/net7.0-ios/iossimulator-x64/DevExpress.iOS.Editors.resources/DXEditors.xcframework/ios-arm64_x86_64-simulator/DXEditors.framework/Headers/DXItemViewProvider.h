#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol DXItemViewProvider<NSObject>
-(int) getItemCount;
-(UIView*) getViewByIndex:(int) index;
-(void) updateView:(UIView*) view forIndex:(int) index;
-(void) recycleView:(UIView *) view forIndex:(int) index forViewType:(int) viewType;
-(int) getViewTypeByIndex:(int) index;
@end
