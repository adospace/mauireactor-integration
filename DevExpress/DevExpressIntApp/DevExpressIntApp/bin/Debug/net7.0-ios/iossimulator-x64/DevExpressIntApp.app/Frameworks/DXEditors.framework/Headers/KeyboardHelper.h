#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol KeyboardHelperOwner

-(UIView*) getActiveView;
-(void) scrollToActiveView;

@end

@protocol KeyboardInputDelegate <NSObject>
@optional

-(void) inputDidOccur;

@end

@interface KeyboardHelper : NSObject <KeyboardInputDelegate>

-(instancetype) initWithScrollView:(UIScrollView*)scrollView andRowPanel:(id<KeyboardHelperOwner>)owner;

-(void) handleView:(UIView*)view;
-(void) onEndScrollingAnimation;
-(void) correctScrollOffsetForView:(UIView*)view animated:(bool)animated;
-(CGFloat) getKeyboardIntersection:(UIView*)view;

@property (nonatomic) bool enabled;

@end
