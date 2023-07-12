#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DXGridSwipeButtonViewInfo.h"
#import "ViewProviders.h"
#import "Enums.h"

NS_ASSUME_NONNULL_BEGIN

@interface DXGridRowSwipeButtonSettings : NSObject

-(instancetype) initWithLocation:(SwipeActionPosition)location
                  andWithCaption:(NSString*)caption
                 andWithViewInfo:(DXGridSwipeButtonViewInfo*)viewInfo
                    andWithImage:(nullable UIImage*)image
                      andHandler:(void (^)(int))handler
                 andViewProvider:(id<DXGridReusableViewProvider>)viewProvider;

@property SwipeActionPosition location;
@property NSString* caption;
@property (nullable) UIImage* image;
@property DXGridSwipeButtonViewInfo* viewInfo;
@property void (^handler)(int);
@property id<DXGridReusableViewProvider> viewProvider;

@property (readonly) UIColor* backgroundColor;
@property (readonly) UIFont* font;
@property (readonly) UIColor* textColor;
@property (readonly) double width;

@property (readwrite) double fraction;

@end

NS_ASSUME_NONNULL_END
