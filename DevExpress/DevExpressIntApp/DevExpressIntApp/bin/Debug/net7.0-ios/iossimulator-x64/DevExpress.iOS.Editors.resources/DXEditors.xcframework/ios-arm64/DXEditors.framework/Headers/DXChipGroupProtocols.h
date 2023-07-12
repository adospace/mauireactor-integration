@class DXChipGroup;
#pragma once

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <DXEditors/PublicEnums.h>
#import <DXEditors/DXChip.h>
#import <DXEditors/DXItemViewProvider.h>
 
NS_ASSUME_NONNULL_BEGIN

@protocol DXChipItemViewProvider<DXItemViewProvider>
@end

@protocol DXChipContainer<NSObject>
-(DXChip*) getChip;
@end

@protocol DXChipGroupDelegate<NSObject>
-(void) tap:(DXChip*) chip;
-(void) confirmedTap:(DXChip*) chip;
-(void) doubleTap:(DXChip*) chip;
-(void) longPress:(DXChip*) chip;
-(void) clearIconDidTap:(DXChip*) chip andIcon:(DXIconSettings *) icon;
-(void) onLayoutChanged;
@end

NS_ASSUME_NONNULL_END

