#import <Foundation/Foundation.h>
#import <UIkit/UIkit.h>
#import "ViewProviders.h"

@interface DXGridEditFormViewInfo : NSObject

-(instancetype) initWithFieldCaption:(NSString*)fieldCaption andViewProvider:(id<DXGridReusableViewProvider>)viewProvider;

@property (readonly) NSString* fieldCaption;
@property (readonly) id<DXGridReusableViewProvider> viewProvider;
@property (readwrite) bool isReadOnly;

@property (readwrite) UIEdgeInsets edgeInsets;
@property (readwrite, nonatomic) UIFont* font;
@property (readwrite, nonatomic) UIColor* textColor;
@property (readwrite, nonatomic) UIFont* errorFont;
@property (readwrite, nonatomic) UIColor* errorTextColor;
@property (readwrite, nonatomic) CGFloat errorTopInset;
@property (readwrite, nonatomic) CGFloat errorMinBottomInset;

@end
