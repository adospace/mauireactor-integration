#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, DXVerticalAlignment) {
    DXVerticalAlignmentCenter = 0,
    DXVerticalAlignmentTop = 1,
    DXVerticalAlignmentBottom = 2
};

typedef NS_ENUM(NSInteger, DXHorizontalAlignment) {
    DXHorizontalAlignmentCenter = 0,
    DXHorizontalAlignmentLeft = 1,
    DXHorizontalAlignmentRight = 2
};


typedef NS_ENUM(NSInteger, DXAlignment) {
    DXAlignmentStart = 0,
    DXAlignmentCenter = 1,
    DXAlignmentEnd = 2
};

typedef NS_ENUM(NSInteger, DXDropdownVerticalAlignment) {
    DXDropdownVerticalAlignmentDefault = 0,
    DXDropdownVerticalAlignmentTop = 1,
    DXDropdownVerticalAlignmentCenter = 2,
    DXDropdownVerticalAlignmentBottom = 3
};

typedef NS_ENUM(NSInteger, DXDropdownHorizontalAlignment) {
    DXDropdownHorizontalAlignmentDefault = 0,
    DXDropdownHorizontalAlignmentLeft = 1,
    DXDropdownHorizontalAlignmentCenter = 2,
    DXDropdownHorizontalAlignmentRight = 3,
    DXDropdownHorizontalAlignmentStretch = 4,
};
