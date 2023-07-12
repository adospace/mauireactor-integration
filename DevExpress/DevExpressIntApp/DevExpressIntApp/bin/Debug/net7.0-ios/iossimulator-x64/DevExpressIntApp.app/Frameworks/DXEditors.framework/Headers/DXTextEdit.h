#import "DXTextEditBase.h"

@interface DXTextEdit : DXTextEditBase

@property(nullable, nonatomic) NSString *mask;
@property(nullable, nonatomic) NSString *maskPlaceholder;
@property(nonatomic, nullable, readonly, getter=getUnmaskedText) NSString *unmaskedText;

@end
