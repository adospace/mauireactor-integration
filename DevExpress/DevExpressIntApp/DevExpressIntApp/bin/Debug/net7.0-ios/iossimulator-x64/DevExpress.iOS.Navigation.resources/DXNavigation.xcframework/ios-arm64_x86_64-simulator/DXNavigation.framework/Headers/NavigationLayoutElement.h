  

#ifndef NavigationLayoutElement_h
#define NavigationLayoutElement_h

#import "NavigationItemSize.h"

@protocol NavigationLayoutElement

@property (nonatomic) CGSize actualSize;

@property (readonly, nonatomic) CGSize systemLayoutSize;
@property (readonly, nonatomic) NavigationItemSize *widthInfo;
@property (readonly, nonatomic) NavigationItemSize *heightInfo;

//-(CGSize) getRealSize;
//-(DXTabItemSize*) getSizeSettings;
//-(void) invalidateIntrinsicContentSize;

@end


#endif /* NavigationLayoutElement_h */
