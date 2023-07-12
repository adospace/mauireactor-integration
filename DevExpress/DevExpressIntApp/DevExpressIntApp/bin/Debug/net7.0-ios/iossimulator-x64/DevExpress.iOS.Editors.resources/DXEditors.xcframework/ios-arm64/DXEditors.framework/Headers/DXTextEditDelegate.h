#import <UIKit/UIKit.h>
#import "DXTextChangedReason.h"

@class DXTextEditBase;

@protocol DXTextEditDelegate<NSObject>

@required
-(void)onSetNeedsLayout;
-(void)layoutSubviews;
-(void)onDeleteBackwards;

@optional
-(void)textEdit:(nonnull DXTextEditBase *)textEdit didChangeTextTo:(nullable NSString *)text withReason:(nonnull DXTextChangedReason)reason;
-(void)textEditDidBeginEditing:(nonnull DXTextEditBase *)textEdit;
-(void)textEditDidEndEditing:(nonnull DXTextEditBase *)textEdit;
-(void)textEdit:(nonnull DXTextEditBase *)textEdit didChangeSelectionTo:(NSRange)range from:(NSRange)oldRange;
-(nullable NSArray<DXIconSettings *> *)requestDefaultLeadingIcons;
-(nullable NSArray<DXIconSettings *> *)requestDefaultTrailingIcons;
-(void)initDefaultIcons;
-(void)containersWillClearIcons;
-(BOOL)shouldReturn;
-(BOOL)didTap;
-(BOOL)didDoubleTap;
-(BOOL)didLongPress;

@end
