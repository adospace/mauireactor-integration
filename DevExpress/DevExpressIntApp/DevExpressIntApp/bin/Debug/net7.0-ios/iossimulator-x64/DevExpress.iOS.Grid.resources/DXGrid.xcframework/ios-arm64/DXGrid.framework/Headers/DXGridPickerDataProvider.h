#import <Foundation/Foundation.h>

@protocol DXGridPickerDataProvider <NSObject>

-(NSObject*) getValueForIndex:(int)index;
-(NSString*) getTextForIndex:(int)index;
-(int) getRowIndex:(NSObject*)value;
-(int) getRowCount;
-(void) valueDidChange:(NSObject*)value forRowIndex:(int)rowIndex;

@end
