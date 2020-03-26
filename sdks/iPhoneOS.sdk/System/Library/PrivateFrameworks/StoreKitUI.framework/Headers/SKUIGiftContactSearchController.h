//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/MFContactsSearchConsumer-Protocol.h>

@class MFContactsSearchManager, NSArray, NSMutableArray, NSNumber, UITableView, UIView;
@protocol SKUIGiftContactSearchDelegate;

__attribute__((visibility("hidden")))
@interface SKUIGiftContactSearchController : NSObject <MFContactsSearchConsumer, UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *_autocompleteSearchResults;
    id <SKUIGiftContactSearchDelegate> _delegate;
    NSArray *_results;
    MFContactsSearchManager *_searchManager;
    UIView *_searchResultsView;
    NSNumber *_searchTaskIdentifier;
    UITableView *_tableView;
}

@property(nonatomic) __weak id <SKUIGiftContactSearchDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)_tableView;
- (void)_setResults:(id)arg1;
- (void)_finishSearchWithResults:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeChildLabelsSupportDarkMode:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)finishedSearchingForAutocompleteResults;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
@property(readonly, nonatomic) UIView *searchResultsView;
- (void)searchForText:(id)arg1;
- (void)resetSearch;
@property(readonly, nonatomic) long long numberOfResults;
- (BOOL)cancelSearch;
- (void)dealloc;

@end

