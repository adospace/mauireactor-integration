#import <UIKit/UIKit.h>
#import "DXCornerMode.h"
#import "DXBorderMode.h"
#import "DXErrorSupport.h"
#import "DXAlignment.h"
#import "DXIconSettings.h"
#import "DXTextEditDelegate.h"
#import "DXIconMode.h"
#import "DXCharacterCasing.h"
@class Layout;

#define ANIMATION_INTERVAL 0.167

@interface DXTextEditBase : UIView<UITextInputTraits, DXErrorSupport>

@property(nonatomic, readonly) BOOL isFocused;
@property(nonatomic) BOOL enabled;
@property(nonatomic) BOOL readOnly;
@property(nonatomic) BOOL hasError;
@property(nonatomic) BOOL allowAnimation;
@property(nonatomic, nullable) NSString *text;
@property(nonatomic, nullable, readonly) NSAttributedString *displayText;
@property(nullable, nonatomic) UIFont *font;
@property(nullable, nonatomic) NSString *labelText;
@property(nullable, nonatomic) NSString *placeholderText;
@property(nullable, nonatomic) NSString *helpText;
@property(nullable, nonatomic) NSString *errorText;
@property(nullable, nonatomic) NSString *prefixText;
@property(nullable, nonatomic) NSString *suffixText;
@property(nonatomic) NSTextAlignment textHorizontalAlignment;
@property(nonatomic) DXVerticalAlignment textVerticalAlignment;
@property(nonatomic) DXCharacterCasing characterCasing;
@property(nullable, nonatomic) UIFont *labelFont;
@property(nullable, nonatomic, copy) UIColor *textColor;
@property(nullable, nonatomic, copy) UIColor *backgroundColor;
@property(nullable, nonatomic, copy) UIColor *focusedLabelColor;
@property(nullable, nonatomic, copy) UIColor *labelColor;
@property(nullable, nonatomic, copy) UIColor *placeholderColor;
@property(nullable, nonatomic, copy) UIColor *affixColor;
@property(nullable, nonatomic, copy) UIColor *borderColor;
@property(nullable, nonatomic, copy) UIColor *focusedBorderColor;
@property(nonatomic, nullable, copy) UIColor *helpTextColor;
@property(nonatomic, nullable, copy) UIColor *errorColor;
@property(nonatomic, nullable, copy) UIColor *disabledTextColor;
@property(nullable, nonatomic, copy) UIColor *disabledBackgroundColor;
@property(nullable, nonatomic, copy) UIColor *disabledLabelColor;
@property(nullable, nonatomic, copy) UIColor *disabledHelpTextColor;
@property(nullable, nonatomic, copy) UIColor *disabledBorderColor;
@property(nullable, nonatomic, copy) UIColor *cursorColor;
@property(nullable, nonatomic, copy) UIColor *disabledAffixColor;
@property(nullable, nonatomic) UIFont *placeholderFont;
@property(nullable, nonatomic) UIFont *affixFont;
@property(nonatomic) CGFloat affixIndent;
@property(nonatomic) CGFloat bottomTextTopIndent;
@property(nonatomic, nullable) UIFont *helpTextFont;
@property(nonatomic) CGFloat borderWidth;
@property(nonatomic) CGFloat focusedBorderWidth;
@property(nonatomic) CGFloat disabledBorderWidth;
@property(nonatomic) CGFloat topLeftCornerRadius;
@property(nonatomic) CGFloat topRightCornerRadius;
@property(nonatomic) CGFloat bottomLeftCornerRadius;
@property(nonatomic) CGFloat bottomRightCornerRadius;
@property(nonatomic) CGFloat characterCounterIndent;
@property(nonatomic) DXCornerMode cornerMode;
@property(nonatomic) DXBorderMode borderMode;
@property(nonatomic) CGFloat iconIndent;
@property(nonatomic) CGFloat iconSpacing;
@property(nonatomic) CGFloat minBoxHeight;
@property(nonatomic) CGFloat minBoxWidth;
@property(nonatomic) CGFloat boxHeight;
@property(nonatomic) DXVerticalAlignment iconAlignment;
@property(nullable, nonatomic, readonly) DXIconSettings *leadingIcon;
@property(nullable, nonatomic, readonly) DXIconSettings *trailingIcon;
@property(nullable, nonatomic, readonly) DXIconSettings *errorIcon;
@property(nullable, nonatomic, readonly) DXIconSettings *clearIcon;
@property(nonatomic) DXIconMode clearIconVisibility;
@property(nonatomic) BOOL showErrorIcon;
@property(nonatomic) BOOL showLeadingIcon;
@property(nonatomic) BOOL showTrailingIcon;
@property(nonatomic) BOOL limitTextByMaxCharacterCount;
@property(nonatomic) NSInteger maxCharacterCount;
@property(nullable, nonatomic, readonly) NSString *charCounterText;
@property(nullable, nonatomic) __kindof UIView *inputView;
@property(nonatomic) BOOL reserveBottomTextLine;
@property(nonatomic) BOOL labelAlwaysOnTop;
@property(nonatomic, nullable, weak) id<DXTextEditDelegate> delegate;
@property(nonatomic, nullable, weak) id<DXIconTapDelegate> iconTapDelegate;
@property(nonatomic, readonly) CGRect borderFrame;
@property(nullable, nonatomic) NSString *displayFormat;
@property(nullable, nonatomic) __kindof UIView *inputAccessoryView;
@property(nonatomic, nullable) Layout *layout;

// From UITextInputTraits to setup availability
@property(null_unspecified, nonatomic, copy) UITextContentType textContentType;

+(nonnull NSString *)getText:(nonnull NSString *)text withCasing:(DXCharacterCasing)characterCasing;

-(nonnull instancetype)initWithFrame:(CGRect)frame;
-(nullable instancetype)initWithCoder:(nullable NSCoder *)coder;

-(void)setCursorPosition:(NSInteger)cursorLocation;
-(void)setText:(nullable NSString *)text applyCasing:(BOOL)applyCasing;
// endCursorLocation - pass a negative value to select text until end.
-(void)setTextSelection:(NSInteger)startCursorLocation withEndLocation:(NSInteger)endCursorLocation;
-(CGSize)getLeadingIconsSize;
-(CGSize)getTrailingIconsSize;
-(void)onDeleteBackwards;

//FOR tests
-(BOOL)replaceActualTextWith:(nonnull NSString *)text inRange:(NSRange)range;
-(void)tapOnIcon:(nonnull DXIconSettings*)iconToTap;

@end
