//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIProductPageTableSection.h>

@class NSArray, NSNumberFormatter, SKUIClientContext, SKUIColorScheme, SKUIProductPageTableExpandableHeaderView;

__attribute__((visibility("hidden")))
@interface SKUIProductPageTableInAppPurchasesSection : SKUIProductPageTableSection
{
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    SKUIProductPageTableExpandableHeaderView *_headerView;
    NSArray *_inAppPurchases;
    NSNumberFormatter *_numberFormatter;
}

@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
// - (void).cxx_destruct;
- (void)_reloadHeaderView;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (void)setExpanded:(BOOL)arg1;
- (long long)numberOfRowsInSection;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)headerViewForTableView:(id)arg1;
- (id)initWithInAppPurchases:(id)arg1 clientContext:(id)arg2;

@end

