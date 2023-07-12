#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "EditorType.h"
#import "CommitMode.h"
#import "DXDataFormEditorInfoDelegate.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, EditorLabelPosition) {
  EditorLabelPositionLeft = 0,
  EditorLabelPositionRight,
  EditorLabelPositionTop
};

typedef NS_ENUM(NSInteger, EditorLabelAlignment) {
  EditorLabelAlignmentLeft = 0,
  EditorLabelAlignmentRight,
  EditorLabelAlignmentCenter
};

typedef NS_ENUM(NSInteger, HorizontalAlignment) {
   HorizontalAlignmentLeft = 0,
   HorizontalAlignmentRight,
   HorizontalAlignmentCenter,
   HorizontalAlignmentStretch
};

typedef NS_ENUM(NSInteger, VerticalAlignment) {
    VerticalAlignmentBaseLine = 0,
    VerticalAlignmentCenter,
    VerticalAlignmentTop,
    VerticalAlignmentBottom,
    VerticalAlignmentStretch
};

@interface StarSizeInfo : NSObject

+(StarSizeInfo*)autoSize;
+(StarSizeInfo*)star:(CGFloat) multiplier;
+(StarSizeInfo*)fixed:(CGFloat) value;

+(CGFloat)normalizeSize:(CGFloat)size byMin:(CGFloat)min andMax:(CGFloat)max;

@property (nonatomic, readwrite) bool isAuto;
@property (nonatomic, readwrite) bool isStar;
@property (nonatomic, readwrite) double value;

@property (nonatomic, readwrite) double minValue;
@property (nonatomic, readwrite) double maxValue;
@end

@interface EditorSizeInfo : NSObject

+(EditorSizeInfo*)zero;

@property (nonatomic, readwrite) CGFloat fixedSize;
@property (nonatomic, readwrite) CGFloat starsCount;

@property (nonatomic, readwrite) CGFloat minValue;
@property (nonatomic, readwrite) CGFloat maxValue;

@end

@interface DataFormEditorInfo : NSObject

@property (nonatomic, weak, nullable) id<DXDataFormEditorInfoDelegate> delegate;
@property (nonatomic) NSString *uniqueId;

@property (nonatomic) bool isVisible;

@property (nonatomic) EditorType type;
@property (nonatomic) EditorLabelPosition labelPosition;

@property (nonatomic) UIEdgeInsets padding;
@property (nonatomic) CGFloat labelToEditorSpacing;
@property (nonatomic) EditorLabelAlignment labelAlignment;

@property (nonatomic) HorizontalAlignment labelHorizontalAlignment;
@property (nonatomic) VerticalAlignment labelVerticalAlignment;

@property (nonatomic) VerticalAlignment editorVerticalAlignment;
@property (nonatomic) HorizontalAlignment editorHorizontalAlignment;

@property (nonatomic) StarSizeInfo *labelWidth;
@property (nonatomic) StarSizeInfo *editorWidth;

@property (nonatomic) bool hideLabel;
@property (nonatomic) bool reserveBottomSpace;

@property (nonatomic, nullable) UIView *customView;
@property (nonatomic) NSString *labelText;
@property (nonatomic) NSString *helperText;
@property (nonatomic, nullable) UIImage *labelIcon;

@property (nonatomic) UIFont *labelFont;
@property (nonatomic) UIColor *labelColor;

@property (nonatomic) UIFont *bottomTextFont;
@property (nonatomic) UIColor *helperColor;
@property (nonatomic) UIColor *errorColor;

@property (nonatomic) UIColor *backgroundColor;

-(CGFloat) getApproximateErrorHeight;

@end

NS_ASSUME_NONNULL_END
