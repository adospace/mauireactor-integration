#ifndef Enums_h
#define Enums_h

typedef enum {
    DXSortOrderNone = 0,
    DXSortOrderAscending = 1,
    DXSortOrderDescending = 2
} DXSortOrder;

typedef NS_ENUM(NSInteger, FixedStyle) {
    FixedStyleNone,
    FixedStyleLeft,
    FixedStyleRight
};

typedef NS_ENUM(NSInteger, SwipeActionPosition) {
    SwipeActionLeading,
    SwipeActionTrailing
};

typedef NS_ENUM(NSInteger, FullSwipeType) {
    FullSwipeTypeNone = 0,
    FullSwipeTypeLeading = 1 << 0,
    FullSwipeTypeTrailing = 1 << 1,
    FullSwipeTypeAll = FullSwipeTypeLeading | FullSwipeTypeTrailing
};

typedef NS_ENUM(NSInteger, ScrollBarVisibility) {
    ScrollBarVisibilityNone = 0,
    ScrollBarVisibilityHorizontal = 1 << 0,
    ScrollBarVisibilityVertical = 1 << 1,
    ScrollBarVisibilityAll = FullSwipeTypeLeading | FullSwipeTypeTrailing
};

typedef NS_ENUM(NSInteger, DXTapAction) {
    DXTapActionTap,
    DXTapActionConfirmedTap,
    DXTapActionDoubleTap,
    DXTapActionLongPressBegan,
    DXTapActionLongPressChanged,
    DXTapActionLongPressEnded
};

typedef NS_ENUM(NSInteger, DXGridElement) {
    DXGridElementColumnHeader,
    DXGridElementRow,
    DXGridElementGroupRow,
    DXGridElementTotalSummary
};

typedef NS_ENUM(NSInteger, DXTextDecorations) {
    DXTextDecorationsNone = 0,
    DXTextDecorationsUnderline = 1 << 0,
    DXTextDecorationsStrikethrough = 1 << 1
};


#endif /* Enums_h */
