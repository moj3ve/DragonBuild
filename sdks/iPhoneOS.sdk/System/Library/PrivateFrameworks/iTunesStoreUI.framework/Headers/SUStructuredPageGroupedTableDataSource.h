//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUStructuredPageTableDataSource.h>

@interface SUStructuredPageGroupedTableDataSource : SUStructuredPageTableDataSource
{
}

- (id)_subtitleForSectionIndex:(long long)arg1;
- (long long)tableViewStyle;
- (void)reloadCellContexts;
- (id)newHeaderViewForSection:(long long)arg1;
- (double)heightForFooterInSection:(long long)arg1;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (Class)cellConfigurationClassForItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1 reuseIdentifier:(id )arg2;
- (BOOL)canShowItemOfferButtonForItem:(id)arg1;

@end

