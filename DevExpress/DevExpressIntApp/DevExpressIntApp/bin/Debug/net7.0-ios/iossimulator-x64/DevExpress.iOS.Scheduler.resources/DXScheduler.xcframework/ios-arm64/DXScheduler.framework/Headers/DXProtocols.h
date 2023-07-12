#import <UIKit/UIKit.h>


@protocol XamarinViewProvider <NSObject>

-(void) recycleView:(UIView *)view;
-(UIView*) requestViewByIndex:(int)itemIndex;
-(void) enableView:(UIView*) view forIndex:(int) itemIndex;
-(int) getColorByIndex:(int) itemIndex;

@end


@protocol ViewProviderContainer <NSObject>

-(UIView*) requestViewByIndex: (int)logicalIndex;
-(void) bindView: (UIView*)view forIndex: (int)logicalIndex;
-(int) getStubColorByIndex: (int)logicalIndex;
-(void) recycleView: (UIView *)view;

@end
