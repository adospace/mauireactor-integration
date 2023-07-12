#ifndef DXContentContainerController_h
#define DXContentContainerController_h

@protocol DXContentContainerController<NSObject>

-(void)show;
-(bool)close:(bool)onLostFocus;
-(void)update;	

-(bool)isOpened;

@end

#endif /* DXContentContainerController_h */
