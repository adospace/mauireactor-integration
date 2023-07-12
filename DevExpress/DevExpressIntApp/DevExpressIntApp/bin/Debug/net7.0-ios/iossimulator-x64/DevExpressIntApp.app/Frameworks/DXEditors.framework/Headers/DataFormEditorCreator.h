#import <UIKit/UIKit.h>
#import "EditorType.h"
#import "DXDataFormEditorItem.h"


#ifndef DataFormEditorCreator_h
#define DataFormEditorCreator_h

@protocol DataFormEditorCreator

-(id<DXDataFormEditorItem>)create:(EditorType)kind for:(NSIndexPath*)path;
-(void)disposeEditors;

@end

#endif /* DataFormEditorCreator_h */
