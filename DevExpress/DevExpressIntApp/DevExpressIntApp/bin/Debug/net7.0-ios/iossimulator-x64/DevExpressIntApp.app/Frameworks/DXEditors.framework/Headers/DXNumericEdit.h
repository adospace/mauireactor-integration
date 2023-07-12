#import "DXTextEditBase.h"
#import "DXIconSettings.h"
#import "DXUpDownIconAlignment.h"
#import "DXNumericEditDelegate.h"
#import "DXCharacterCasing.h"

@interface DXNumericEdit : DXTextEditBase

@property(nullable, nonatomic, readonly) DXIconSettings *upIcon;
@property(nullable, nonatomic, readonly) DXIconSettings *downIcon;
@property(nonatomic) BOOL showUpIcon;
@property(nonatomic) BOOL showDownIcon;
@property(nonatomic) BOOL upIconEnabled;
@property(nonatomic) BOOL downIconEnabled;
@property(nonatomic) DXUpDownIconAlignment upDownIconAlignment;
@property(nonatomic, nullable, weak) id<DXNumericEditDelegate> delegate;
@property(nonatomic, nullable, readonly) NSString *decimalSeparator;
@property(nonatomic) NSInteger maxDecimalDigitCount;

@end
