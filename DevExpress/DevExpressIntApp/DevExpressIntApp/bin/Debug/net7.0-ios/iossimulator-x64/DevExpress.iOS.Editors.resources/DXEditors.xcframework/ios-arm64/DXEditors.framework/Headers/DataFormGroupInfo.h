#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DataFormGroupInfo : NSObject

@property (nonatomic) BOOL isVisible;

@property (nonatomic) UIColor *separatorColor;
@property (nonatomic) CGFloat separatorThickness;
@property (nonatomic) BOOL isLastSeparatorVisible;

@property (nonatomic) NSString *name;
@property (nonatomic) BOOL isCollapsed;
@property (nonatomic) BOOL isCollapsible;
@property (nonatomic) BOOL isHeaderVisible;
@property (nonatomic) UIColor *headerBackgroundColor;
@property (nonatomic) UIColor *headerFontColor;
@property (nonatomic) UIColor *contentBackgroundColor;
@property (nonatomic) UIFont *headerFont;
@property (nonatomic) UIEdgeInsets headerPadding;
@property (nonatomic) UIEdgeInsets contentPadding;
@property (nonatomic) NSString *headerText;
@property (nonatomic) UIView *customHeader;
@property (nonatomic) CGFloat lineEditorSpacing;

@end

NS_ASSUME_NONNULL_END
