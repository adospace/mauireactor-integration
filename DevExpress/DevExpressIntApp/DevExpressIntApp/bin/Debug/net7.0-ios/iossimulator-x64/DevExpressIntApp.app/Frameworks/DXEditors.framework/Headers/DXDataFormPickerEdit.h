#ifndef DXDataFormPickerEdit_h
#define DXDataFormPickerEdit_h

@protocol DXDataFormItemPickerDataProvider;

@protocol DXDataFormPickerEdit <NSObject>

-(void)setDataProvider:(id<DXDataFormItemPickerDataProvider>)dataProvider;

@end

#endif /* DXDataFormPickerEdit_h */
