//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVContainerCollectionViewCell.h>

#import <TVMLKit/TVAuxiliaryViewSelecting-Protocol.h>

@class UIView;
@protocol TVAuxiliaryViewSelecting;

__attribute__((visibility("hidden")))
@interface _TVCollectionViewCell : TVContainerCollectionViewCell <TVAuxiliaryViewSelecting>
{
    UIView<TVAuxiliaryViewSelecting> *_selectingView;
}

@property(nonatomic) __weak UIView<TVAuxiliaryViewSelecting> *selectingView; // @synthesize selectingView=_selectingView;
// - (void).cxx_destruct;
- (UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1;
- (void)layoutSubviews;

@end

