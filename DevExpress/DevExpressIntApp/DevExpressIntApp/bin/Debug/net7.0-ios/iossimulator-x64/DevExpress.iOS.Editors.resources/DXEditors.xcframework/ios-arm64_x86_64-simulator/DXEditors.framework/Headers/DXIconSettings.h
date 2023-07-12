#import <UIKit/UIKit.h>
#import "DXIconTapDelegate.h"
#import "DXIconMode.h"

@protocol DXIconSettingsDelegate;
@protocol IconSettingsDelegate;

@interface DXIconSettings : NSObject

@property(nullable, nonatomic, copy) UIColor *iconColor;
@property(nullable, nonatomic, copy) UIColor *disabledIconColor;
@property(nullable, nonatomic, copy) UIColor *pressedIconColor;
@property(nullable, nonatomic, copy) UIColor *focusedIconColor;
@property(readwrite, nonatomic) CGSize iconSize;
@property(nonnull, nonatomic, readonly) NSArray<UIImage *> *images;
@property(nonatomic) int imageIndex;
@property(nonatomic) DXIconMode iconVisibility;
@property(nullable, nonatomic, weak) id<DXIconTapDelegate> tapDelegate;

+(nonnull instancetype)iconWithImage:(nonnull UIImage *)image color:(nullable UIColor *)color;
+(nonnull instancetype)iconWithTapDelegate:(nonnull id<DXIconTapDelegate>)tapDelegate;

-(void)addImage:(nonnull UIImage *)image;
-(void)removeImage:(nonnull UIImage *)image;
-(void)removeImageAtIndex:(unsigned int)index;
-(void)removeAllImages;
-(void)replaceImageAtIndex:(unsigned int)index withNewImage:(nullable UIImage *)image;

@end
