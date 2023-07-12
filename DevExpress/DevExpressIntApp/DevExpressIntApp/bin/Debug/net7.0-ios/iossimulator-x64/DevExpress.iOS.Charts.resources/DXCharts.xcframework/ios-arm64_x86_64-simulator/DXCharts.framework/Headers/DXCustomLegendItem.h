#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol DXCustomLegendItemBase <NSObject>
@end

@interface DXCustomLegendItem : NSObject<DXCustomLegendItemBase>
@property (readonly) NSString* text;
@property (readonly) UIColor* color1;
@property (readonly) UIColor* color2;

-(instancetype)initWithText:(NSString*) text andColor:(UIColor*) color;
-(instancetype)initWithText:(NSString*) text andColor1:(UIColor*) color1 andColor2:(UIColor*) color2;
@end

@protocol DXLegendItemProvider <NSObject>
-(DXCustomLegendItem*)getLegendItem: (int) index;
-(int)getLegendItemCount;
@end

NS_ASSUME_NONNULL_END
