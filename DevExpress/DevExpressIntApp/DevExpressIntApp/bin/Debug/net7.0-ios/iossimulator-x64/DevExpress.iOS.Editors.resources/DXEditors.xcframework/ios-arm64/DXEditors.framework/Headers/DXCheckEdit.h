#import <UIKit/UIKit.h>
#import "DXAlignment.h"

typedef NS_ENUM(NSInteger, DXCheckEditValue) {
    DXCheckEditValueChecked = 1,
    DXCheckEditValueIndeterminate = 0,
    DXCheckEditValueUnchecked = -1
};

typedef NS_ENUM(NSInteger, DXCheckBoxPosition) {
    DXCheckBoxPositionStart = 0,
    DXCheckBoxPositionEnd = 1,
    DXCheckBoxPositionTop = 2,
    DXCheckBoxPositionBottom = 3
};

extern const UIControlState UIControlStateDXIndeterminate;

IB_DESIGNABLE
@interface DXCheckEdit : UIControl

@property(nonatomic) IBInspectable DXCheckEditValue value;
@property(nonatomic, nullable) IBInspectable NSString *label;
@property(nonatomic, nullable) IBInspectable NSAttributedString *attributedLabel;

@property(nonatomic, getter=isIndeterminate) IBInspectable BOOL indeterminate;

@property(nonatomic) BOOL allowIndeterminateInput;

@property(nonatomic) DXCheckBoxPosition checkboxPosition;
@property(nonatomic) DXAlignment checkboxAlignment;
@property(nonatomic) IBInspectable CGFloat checkboxIndent;

@property(nonatomic, null_resettable) IBInspectable UIFont *labelFont;
@property(nonatomic) NSTextAlignment labelTextAlignment;
@property(nonatomic) DXVerticalAlignment labelTextVerticalAlignment;
@property(nonatomic) NSLineBreakMode labelLineBreakMode;
@property(nonatomic) NSUInteger labelNumberOfLines;

- (void)setCheckBoxImage:(nullable UIImage *)image forState:(UIControlState)state;
- (void)setCheckBoxColor:(nullable UIColor *)color forState:(UIControlState)state;
- (void)setLabelColor:(nullable UIColor *)color forState:(UIControlState)state;

- (nullable UIImage *)checkBoxImageForState:(UIControlState)state;
- (nullable UIColor *)checkBoxColorForState:(UIControlState)state;
- (nullable UIColor *)labelColorForState:(UIControlState)state;

@property (nonatomic, readonly, nonnull) UIImage *currentCheckBoxImage;
@property (nonatomic, readonly, nonnull) UIColor *currentCheckBoxColor;
@property (nonatomic, readonly, nonnull) UIColor *currentLabelColor;

- (void)toggleValue;

+ (nonnull UIImage *)defaultCheckedCheckboxImage;
+ (nonnull UIImage *)defaultUncheckedCheckboxImage;
+ (nonnull UIImage *)defaultIndeterminateCheckboxImage;

@end
