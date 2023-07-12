#import <UIKit/UIKit.h>

@protocol DXItemsEditViewProvider<NSObject>

-(void)bindView:(nonnull __kindof UITableViewCell *)view atRowIndex:(NSInteger)rowIndex;

@optional
-(nonnull NSString *)requestReuseIdentifierForRowIndex:(NSInteger)rowIndex;
-(nonnull UITableViewCell *)requestNewViewForRowIndex:(NSInteger)rowIndex withReuseIdentifier:(nonnull NSString *)reuseIdentifier;

@end
