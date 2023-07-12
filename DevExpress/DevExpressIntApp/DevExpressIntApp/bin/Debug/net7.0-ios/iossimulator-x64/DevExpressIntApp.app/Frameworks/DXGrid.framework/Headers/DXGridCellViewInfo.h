#import <Foundation/Foundation.h>
#import <UIkit/UIkit.h>
#import "Enums.h"
#import "DXGridCellViewInfoBase.h"
#import "ViewProviders.h"

NS_ASSUME_NONNULL_BEGIN

@interface DXGridCellViewInfo : DXGridCellViewInfoBase

-(instancetype) initWithFieldName:(NSString*)fieldName andViewProvider:(id<DXGridReusableViewProvider>)viewProvider;
-(instancetype) initWithViewInfo:(DXGridCellViewInfo*)viewInfo;

@property (readwrite, nonatomic) NSString* fieldName;
@property (readwrite, nonatomic) UIColor* selectionBackgroundColor;
@property (readwrite, nonatomic) UIColor* selectionTextColor;
@property (readwrite, nonatomic) id<DXGridReusableViewProvider> viewProvider;

@end

NS_ASSUME_NONNULL_END
