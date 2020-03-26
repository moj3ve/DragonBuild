//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSArray, NSSet, NSString, PKRule;

@protocol PDDiscoveryServiceExportedInterface <PDXPCServiceExportedInterface>
- (void)evaluateRulesWithIdentifiers:(NSSet *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)deleteRuleWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)insertRule:(PKRule *)arg1 completion:(void (^)(NSError *))arg2;
- (void)rulesWithCompletion:(void (^)(NSSet *, NSError *))arg1;
- (void)displayedDiscoveryItemWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)displayedDiscoveryEngagementMessageWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)removeDiscoveryMessageWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)insertDiscoveryEngagementMessages:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateDiscoveryEngagementMessageWithIdentifier:(NSString *)arg1 forAction:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)discoveryEngagementMessagesForPassUniqueIdentifier:(NSString *)arg1 active:(NSUInteger)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)processDiscoveryItemsAndMessagesWithCompletion:(void (^)(NSError *))arg1;
- (void)insertDiscoveryItems:(NSArray *)arg1 discoveryArticleLayouts:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;
- (void)discoveryArticleLayoutForItemWithIdentifier:(NSString *)arg1 completion:(void (^)(PKDiscoveryArticleLayout *, NSError *))arg2;
- (void)discoveryItemsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)updateDiscoveryItemWithIdentifier:(NSString *)arg1 forAction:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)updateDiscoveryManifestWithCompletion:(void (^)(NSError *))arg1;
- (void)discoveryArticleLayoutsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
@end

