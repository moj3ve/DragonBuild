//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CKConversation, CKSearchViewController, NSString;

@protocol CKContainerSearchControllerDelegate
- (void)searchViewController:(CKSearchViewController *)arg1 requestsPushOfSearchController:(CKSearchViewController *)arg2;
- (void)searchControllerDidBeginDragging:(CKSearchViewController *)arg1;
- (void)searchController:(CKSearchViewController *)arg1 didSelectItem:(NSString *)arg2 inChat:(NSString *)arg3;
- (CKConversation *)searchController:(CKSearchViewController *)arg1 conversationForChatGUID:(NSString *)arg2;
@end

