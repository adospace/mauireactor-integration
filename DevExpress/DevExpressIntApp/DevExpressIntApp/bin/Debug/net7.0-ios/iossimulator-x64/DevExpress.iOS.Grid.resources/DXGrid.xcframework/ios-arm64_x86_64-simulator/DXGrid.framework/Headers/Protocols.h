#pragma once

#import <Foundation/Foundation.h>

@protocol DXLoadMoreTarget <NSObject> //LoadMore
-(void) onLoadMore:(UIControl*)control;
-(bool) isDragging;
@end
