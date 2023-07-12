  

#ifndef Header_h
#define Header_h

@class DXTabControlUIView;

@protocol DXTabsDelegate

-(void)didSelectedIndexChanged: (DXTabControlUIView*) view oldIndex : (NSUInteger) oldIndex newIndex : (NSUInteger) newIndex;
-(BOOL)didTappedTab: (DXTabControlUIView*) view index : (NSUInteger) index;

@end

#endif /* Header_h */
