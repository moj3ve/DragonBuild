//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

#import <SearchUI/TLKSelectableGridViewDelegate-Protocol.h>

@interface SearchUISelectableGridCardSectionView : SearchUICardSectionView <TLKSelectableGridViewDelegate>
{
}

+ (BOOL)supportsRecyclingForCardSection:(id)arg1;
- (void)selectableGridView:(id)arg1 didChangeSelectedIndex:(long long)arg2;
- (id)convertSFTitleSubtitleData:(id)arg1;
- (void)updateWithRowModel:(id)arg1;
- (id)setupContentView;

@end

