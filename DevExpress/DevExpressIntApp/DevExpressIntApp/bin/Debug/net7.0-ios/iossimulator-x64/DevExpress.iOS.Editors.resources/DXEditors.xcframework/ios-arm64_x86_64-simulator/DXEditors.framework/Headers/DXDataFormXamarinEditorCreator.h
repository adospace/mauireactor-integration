#import <Foundation/Foundation.h>
#import "DataFormEditorCreator.h"
#import "DXDataFormViewProvider.h"

NS_ASSUME_NONNULL_BEGIN

@interface DXDataFormXamarinEditorCreator : NSObject<DataFormEditorCreator>

@end

@interface DXDataFormXamarinEditorItemBase : NSObject<DXDataFormEditorItem>

@property (nonatomic, weak, nullable) id<DXDataFormEditorDelegate> editorDelegate;

-(void) valueChanged;
-(void) focusChanged:(BOOL) isFocused;

@end

@interface DXDataFormXamarinDataProvider : NSObject<DXDataFormViewProvider>

@end

NS_ASSUME_NONNULL_END
