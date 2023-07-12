#pragma once

#import <Foundation/Foundation.h>

@class UIView;
@class DXGridViewInfoBase;

@protocol DXGridDeferredUpdateViewProvider <NSObject>
-(UIView*) requestViewByIndex:(int)index;
-(void) updateView:(UIView*)view withIndex:(int)index updateData:(bool)immediately;
-(void) updateView:(UIView*)view withIsReady:(bool)isReady;
-(void) updateNextPendingItem:(UIView*)view;
-(void) storeAsFree:(UIView*)view;
-(bool) doesViewHavePendingItems:(UIView*)view;
-(void) updateAppearance:(UIView*)view;
@end

@protocol DXGridViewProvider <NSObject> //TotalSummaryItem, SwipeButton
-(UIView*) requestView;
-(void) updateView:(UIView*)view;
@end

@protocol DXGridReusableViewProvider <NSObject> //GroupValue, GroupSummary
@required
-(UIView*) requestViewByIndex:(int)index;
-(void) updateView:(UIView*)view withIndex:(int)index;
-(void) storeAsFree:(UIView*)view isForce:(bool)force;
-(void) updateView:(UIView*)view isFocused:(bool)isFocused;
-(void) updateViewInfo:(DXGridViewInfoBase*)viewInfo;
-(bool) updateAppearanceOnUpdateView;

@optional
@property (nonatomic, readonly) bool shouldContainerApplyEdgeInsets;

@end

@protocol DXGridEditViewProvider <NSObject>
-(UIView*) getEditableView:(int)rowIndex;
-(void) onEditorOpened:(UIView*)view inRow:(int)rowIndex;
-(void) onEditorHidden:(UIView*)view inRow:(int)rowIndex;
-(NSString*) postValueForView:(UIView*)view inRow:(int)rowIndex;
-(void) updateValueForView:(UIView*)view inRow:(int)rowIndex;
-(void) onTap:(UIView*)view inRow:(int)rowIndex;
-(void) setCloseAction:(void (^)(bool))closeAction forView:(UIView*)view inRow:(int)rowIndex;
-(void) setUpdateLayoutAction:(void (^)(void))updateLayoutAction forView:(UIView*)view inRow:(int)rowIndex;
-(void) setValueChangedAction:(void (^)(void))valueChangedAction forView:(UIView*)view inRow:(int)rowIndex;
-(NSString*) getErrorForView:(UIView*)view inRow:(int)rowIndex;
@end
