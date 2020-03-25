//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PSSearchEntry, PSSearchResultsController, PSSpecifierAction, UIImage;

@protocol PSSearchResultsControllerDelegate <NSObject>
- (UIImage *)searchResultsController:(PSSearchResultsController *)arg1 iconForSearchEntry:(PSSearchEntry *)arg2;
- (PSSpecifierAction *)searchResultsController:(PSSearchResultsController *)arg1 switchActionForSearchEntry:(PSSearchEntry *)arg2;
- (BOOL)searchResultsController:(PSSearchResultsController *)arg1 shouldShowSwitchForSearchEntry:(PSSearchEntry *)arg2;
- (void)searchResultsController:(PSSearchResultsController *)arg1 didSelectSearchEntry:(PSSearchEntry *)arg2;
@end

