#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "KeyboardHelper.h"
#import "CommitMode.h"

@protocol DXDataFormViewProvider;
@protocol DataFormEditorCreator;
@protocol DXDataFormDelegate;

@interface DXDataFormView : UIView <KeyboardHelperOwner, UIScrollViewDelegate>

@property (readwrite, nonatomic) UIEdgeInsets edgeInsets;

@property (readwrite, nonatomic) CommitMode commitMode;
@property (readwrite, nonatomic) CommitMode validationMode;

@property (readonly, nonatomic) KeyboardHelper* keyboardHelper;

@property (readwrite, weak, nonatomic) id<DXDataFormDelegate> delegate;

-(void)setViewProvider:(id<DXDataFormViewProvider>)viewProvider;

-(void)setCustomEditorCreator:(id<DataFormEditorCreator>)editorCreator;

-(NSObject*)getEditorValue:(NSIndexPath*)editorPath;

-(void)resetEditorValue:(NSIndexPath*)editorPath;

-(void)commit;
-(void)commit:(NSIndexPath*)editorPath;

-(BOOL)validate;
-(BOOL)validate:(NSIndexPath*)editorPath;

-(void)groupsStructureChanged;
-(void)groupStructureChanged:(NSUInteger)groupId;

-(void)invalidateGroup:(NSUInteger)groupId;
-(void)invalidateEditor:(NSIndexPath*)editorPath;

@end

