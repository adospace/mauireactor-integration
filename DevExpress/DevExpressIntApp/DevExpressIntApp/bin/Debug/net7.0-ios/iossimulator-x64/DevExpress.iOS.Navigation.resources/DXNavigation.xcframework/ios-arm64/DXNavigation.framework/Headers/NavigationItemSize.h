  

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NavigationItemSize : NSObject

@property (nonatomic) double size;
@property (nonatomic) double minSize;
@property (nonatomic) double maxSize;
@property (nonatomic) bool isStar;
@property (nonatomic) bool isAuto;

+(instancetype) autoSize;
+(instancetype) starSize: (double) multiplier;

-(void)setAbsolute;
-(void)normalize;

@end

NS_ASSUME_NONNULL_END
