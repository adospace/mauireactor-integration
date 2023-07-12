#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <DXEditors/DXChipGroupProtocols.h>

NS_ASSUME_NONNULL_BEGIN

@interface DXChipGroupView : UIView

@property (readwrite, nonatomic) DXChipGroupLayoutType layoutType;
@property (readwrite, nonatomic) bool isScrollBarVisible;

@property (readwrite, nonatomic) UIEdgeInsets padding;
@property (readwrite, nonatomic) CGFloat verticalItemSpacing;
@property (readwrite, nonatomic) CGFloat horizontalItemSpacing;


@property(nonatomic) CGSize minInputViewSize;

@property (readwrite, nonatomic, weak) id<DXChipGroupDelegate> delegate;
@property (readwrite, nullable, weak, nonatomic) id<DXChipItemViewProvider> itemViewProvider;

-(void) updateItems;
-(void) rebuild;

@end

NS_ASSUME_NONNULL_END

