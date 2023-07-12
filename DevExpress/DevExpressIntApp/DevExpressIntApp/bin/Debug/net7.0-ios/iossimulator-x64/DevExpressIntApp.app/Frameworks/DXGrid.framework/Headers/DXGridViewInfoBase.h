#import <UIKit/UIKit.h>
#import "Enums.h"
#import <DXEditors/DXDisplayEdit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DXGridViewInfoBase : NSObject

+(void) apply:(DXGridViewInfoBase*)newViewInfo to:(DXGridViewInfoBase*)viewInfo;

-(instancetype) initWithViewInfo:(DXGridViewInfoBase*)viewInfo;

-(NSObject*) clone;

@property (readwrite, nonatomic) UIColor* backgroundColor;
@property (readwrite, nonatomic) UIFont* font;
@property (readwrite, nonatomic) UIColor* textColor;
@property (readwrite, nonatomic) DXTextDecorations textDecorations;
@property (readonly, nonatomic) DXTextDecoration displayEditTextDecoration;

@end

NS_ASSUME_NONNULL_END
