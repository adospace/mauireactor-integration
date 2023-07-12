#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "ViewProviders.h"
#import "Enums.h"

@class DXGridHeaderViewInfo;

@interface DXGridHeaderContentViewProvider :  NSObject <DXGridViewProvider>

@property (readwrite, nonatomic) NSString* caption;
@property (readwrite, nonatomic) UIFont* font;
@property (readwrite, nonatomic) NSTextAlignment textAlignment;
@property (readwrite, nonatomic) UIColor* textColor;
@property (readwrite, nonatomic) NSLineBreakMode lineBreakMode;
@property (readwrite, nonatomic) DXTextDecorations textDecorations;

@end
