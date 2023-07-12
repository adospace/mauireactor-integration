#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DXButton.h"
#import "DXCalendarViewType.h"
#import "DXIconSettings.h"
#import "DXCalendarDelegate.h"
#import "DXCalendarItemViewProvider.h"

NS_ASSUME_NONNULL_BEGIN

@interface DXCalendar : UIControl

//@property(nonatomic) BOOL enabled;
//@property(nonatomic) BOOL readOnly;
//@property(nonatomic) BOOL allowAnimation;
@property(nonatomic) UIColor* headerTextColor;
@property(nonatomic) DXCalendarViewType activeViewType;

@property(nonatomic) UIColor* pressedItemColor;

@property(nonatomic) CGFloat cellMinSize;
@property(nonatomic) CGFloat horizontalCellSpacing;
@property(nonatomic) CGFloat verticalCellSpacing;
@property(nonatomic) UIEdgeInsets padding;

@property(nonatomic, nullable, readonly) DXIconSettings *backwardIcon;
@property(nonatomic, nullable, readonly) DXIconSettings *forwardIcon;
@property(nonatomic, nullable, readwrite) UIImage *backwardIconImage;
@property(nonatomic, nullable, readwrite) UIImage *forwardIconImage;

@property(nonatomic, nonnull, readonly) DXButton* titleButton;
@property(nonatomic, nonnull, readonly) DXButton* subtitleButton;
@property(nonatomic, nonnull, readonly) UIView* headerView;

@property(nonatomic, nullable, weak) id<DXCalendarDelegate> delegate;
@property(nonatomic, nullable, weak) id<DXCalendarItemViewProvider> itemViewProvider;
@property(nonatomic, nullable, weak) id<DXCalendarItemViewProvider> headerViewProvider;

-(void)setCurrentMonth:(int)year :(int)month;
-(void)setMinDate:(int)year :(int)month :(int)day;
-(void)setMaxDate:(int)year :(int)month :(int)day;

-(void)update;
-(void)rebuild;

//For tests
-(void)cellTap:(int)index;
-(void)forward:(bool)animated;
-(void)backward:(bool)animated;
@end

NS_ASSUME_NONNULL_END
