#import <Foundation/Foundation.h>
#import "Enums.h"
#import "DXGridLayoutItem.h"

NS_ASSUME_NONNULL_BEGIN

@interface DXGridColumnSettings : DXGridLayoutItem

-(instancetype)initWithWidth:(double)width
                 andMinWidth:(double)minWidth
                 andMaxWidth:(double)maxWidth
                   andIsStar:(bool)isStar;

-(instancetype)initWithWidth:(double)width
                 andMinWidth:(double)minWidth
                 andMaxWidth:(double)maxWidth
                   andIsStar:(bool)isStar
                      andRow:(int)row;

-(instancetype)initWithWidth:(double)width
                 andMinWidth:(double)minWidth
                 andMaxWidth:(double)maxWidth
                   andIsStar:(bool)isStar
                      andRow:(int)row
               andFixedStyle:(FixedStyle)fixedStyle;

@property (nonatomic) int row;

@property (nonatomic) int rowSpan;
@property (nonatomic) int column;
@property (nonatomic) int columnSpan;

@end

NS_ASSUME_NONNULL_END
