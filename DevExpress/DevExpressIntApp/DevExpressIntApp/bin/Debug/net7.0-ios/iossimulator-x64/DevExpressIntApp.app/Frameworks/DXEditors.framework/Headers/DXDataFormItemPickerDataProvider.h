#import <Foundation/Foundation.h>

@protocol DXDataFormItemPickerDataProvider <NSObject>

-(BOOL)isPickerSourceUpdated;
-(NSArray*)getPickerData;

@end
