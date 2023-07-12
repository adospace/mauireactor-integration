#import "DXDataFormEditorDelegate.h"

#ifndef DXDataFormEditorItem_h
#define DXDataFormEditorItem_h

@class DataFormValidationError;

@protocol DXDataFormDelegate <NSObject>

-(void)groupIsCollapsedChanging:(NSUInteger)groupId isCollapsed:(BOOL)isCollapsed;
-(void)groupIsCollapsedChanged:(NSUInteger)groupId isCollapsed:(BOOL)isCollapsed;
-(void)formSizeDidChanged:(UIView *_Nonnull)dataForm;

@end

@protocol DXDataFormEditorItem

@property (atomic, readonly) bool resolveLostFocusInside;
@property (atomic) bool isActive;
@property (weak, nonatomic, readonly, nullable) UIView *editor;
@property (nonatomic, weak, nullable) id<DXDataFormEditorDelegate> editorDelegate;

-(void) updateValue;
-(DataFormValidationError* _Nullable) preValidate;
-(DataFormValidationError* _Nullable) postValidate;
-(DataFormValidationError* _Nullable) validate;
-(void) postValue;
-(NSObject*_Nullable) getValue;

-(void)configure;

@end

#endif /* DXDataFormEditor_h */
