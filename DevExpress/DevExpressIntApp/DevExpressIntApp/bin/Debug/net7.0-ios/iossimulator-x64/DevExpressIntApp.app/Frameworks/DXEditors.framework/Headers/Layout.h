#import <UIKit/UIKit.h>
#import "DXTextEditBase.h"

#define SPEC_HORZ_PADDING 12
#define SPEC_VERT_PADDING 16
#define SPEC_HEIGHT 56
#define SPEC_BOX_WIDTH 280
#define SPEC_MIN_TEXT_FIELD_HEIGHT 24.0

@interface Layout : NSObject

@property(nonatomic, readonly) CGSize fullBounds;
@property(nonatomic, readonly) CGRect boxFrame;
@property(nonatomic, readonly) CGRect contentFrame;
@property(nonatomic, readonly) CGSize labelTextSize;
@property(nonatomic, readonly) CGRect labelFrame;
@property(nonatomic, readonly) CGRect labelAsPlaceholderFrame;
@property(nonatomic, readonly) CGRect internalEditorFrame;
@property(nonatomic, readonly) CGRect bottomTextAreaFrame;
@property(nonatomic, readonly) CGRect charCounterAreaFrame;
@property(nonatomic, readonly) CGRect leadingIconFrame;
@property(nonatomic, readonly) CGRect trailingIconFrame;

+(CGSize)calcTextSizeForAttributedText:(NSAttributedString *)attributedText withSizeToFit:(CGSize)size font:(UIFont *)font maximumNumberOfLines:(NSUInteger)maximumNumberOfLines lineBreakMode:(NSLineBreakMode)lineBreakMode;
-(instancetype)initWithTextEdit:(DXTextEditBase *)textEdit;

-(void)invalidate;
-(void)calculateForFrame;
-(void)calculateDesired:(CGSize)size;
-(CGFloat)calcTopPosition:(DXVerticalAlignment)alignment forElementHeight:(CGFloat) elementHeight withLabelOffset:(CGFloat) offset;

@end

enum LayoutMode {
    LayoutModeDesired = 0,
    LayoutModeExact = 1
};
