#import "DXGridTextColumnViewProvider.h"
#import "DXGridPickerDataProvider.h"

@interface DXGridPickerColumnViewProvider : DXGridTextColumnViewProvider

-(instancetype) initWithFieldName:(NSString*)fieldName
                  andDataProvider:(id<DXGridCellDataProvider>)dataProvider
            andPickerDataProvider:(id<DXGridPickerDataProvider>)pickerDataProvider;

@end
