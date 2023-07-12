#import "CellEditViewProviderBase.h"
#import "Enums.h"

@interface DXGridTextColumnViewProvider : CellEditViewProviderBase

@property (readwrite, nonatomic) UIFont* font;
@property (readwrite, nonatomic) NSTextAlignment textAlignment;
@property (readwrite, nonatomic) UIColor* textColor;
@property (readwrite, nonatomic) UIColor* selectionTextColor;
@property (readwrite, nonatomic) NSLineBreakMode lineBreakMode;
@property (readwrite, nonatomic) DXTextDecorations textDecorations;
@property (readwrite, nonatomic) NSString* prefixText;
@property (readwrite, nonatomic) NSString* suffixText;
@property (readwrite, nonatomic) UIFont* affixFont;
@property (readwrite, nonatomic) UIColor* affixTextColor;
@property (readwrite, nonatomic) CGFloat affixIndent;
@property (readwrite, nonatomic) UIEdgeInsets edgeInsets;
@property (readwrite, nonatomic) UIColor* filterIconColor;
@property (readwrite, nonatomic) bool showFilterIcon;

@end
