#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ViewProviders.h"

NS_ASSUME_NONNULL_BEGIN

@protocol DXGridDataProvider;
@protocol DXGridCellDataProvider;
@class DXGridCellViewInfo;

@interface CellViewProviderBase : NSObject <DXGridReusableViewProvider>

-(instancetype) initWithFieldName:(NSString*)fieldName andDataProvider:(id<DXGridCellDataProvider>)dataProvider;

@property (readonly) NSString* fieldName;
@property (readonly) id<DXGridCellDataProvider> dataProvider;

-(void) updateAppearance:(UIView*)view;
-(NSObject*) getValue:(int)index;

@end

NS_ASSUME_NONNULL_END
