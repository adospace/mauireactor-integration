#ifndef DXDataFormEditor_h
#define DXDataFormEditor_h

@protocol DXDataFormEditorDelegate

-(void) valueChangedForEditor:(UIView * _Nonnull)editor;
-(void)editor:(UIView * _Nonnull)editor changedFocusedTo:(BOOL)isFocused;

@end

#endif /* Header_h */
