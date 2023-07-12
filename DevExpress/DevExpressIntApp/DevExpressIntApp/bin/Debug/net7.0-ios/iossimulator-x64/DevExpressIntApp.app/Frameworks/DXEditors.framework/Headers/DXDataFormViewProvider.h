@class DataFormGroupInfo;
@class DataFormEditorInfo;

#ifndef DXDataFormViewProvider_h
#define DXDataFormViewProvider_h


@class DataFormValidationError;
@class DataFormEditorLayoutInfo;

@protocol DXDataFormViewProvider <NSObject>

@property(nonatomic, readonly) NSUInteger viewsCount;
@property(nonatomic, readonly) NSUInteger groupsCount;

-(DataFormGroupInfo*)getGroup:(NSString*)groupName;
-(NSArray<DataFormGroupInfo*>*)getGroups;

-(NSUInteger)getItemsCountInGroup:(NSString*)groupName;
-(NSArray<DataFormEditorInfo*>*)getEditors:(NSString*)groupName;
-(DataFormEditorLayoutInfo*)getEditorLayoutInfo:(NSIndexPath*)editorId;

-(NSString*)getGroupName:(int)index;
//-(NSString*)getFieldName:(NSIndexPath*)path;
-(NSString*)getUniqueId:(NSIndexPath*)path;

-(DataFormEditorInfo*)getEditor:(NSIndexPath*)path;
-(NSDictionary<NSIndexPath*, NSString*>*)validateValues:(NSDictionary<NSIndexPath*, NSObject*>*)values;

-(BOOL)isPickerSourceUpdated:(NSIndexPath*)path;
-(NSArray*)getPickerDataSource:(NSIndexPath*)path;

@end
#endif /* DXDataFormViewProvider_h */
