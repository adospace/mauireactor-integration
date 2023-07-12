#pragma once

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, DXLOrientation) {
    DXLOrientationVertical = 0,
    DXLOrientationHorizontal = 1,
};

typedef NS_ENUM(NSInteger, TypedView) {
    LoadMoreItemView = -1,
    ItemView = 0,
    SelectedItemView = 1,
    GroupItemView = 2
};

typedef NS_ENUM(NSInteger, DXSwipeGroup) {
    DXSwipeGroupStart = 0,
    DXSwipeGroupEnd = 1,
};

typedef NS_ENUM(NSInteger, DXSwipeViewState) {
    DXSwipeViewStateCancelled = 0,
    DXSwipeViewStateOpening = 1,
    DXSwipeViewStateOpened = 2,
    DXSwipeViewStateClosed = 3,
    DXSwipeViewStateExpanded = 4
};

typedef NS_ENUM(NSInteger, DXMotionDirection) {
    DXMotionDirectionNone = 0,
    DXMotionDirectionLeftToRight = 1,
    DXMotionDirectionRightToLeft = 2,
    DXMotionDirectionTopToBottom = 3,
    DXMotionDirectionBottomToTop = 4
};
