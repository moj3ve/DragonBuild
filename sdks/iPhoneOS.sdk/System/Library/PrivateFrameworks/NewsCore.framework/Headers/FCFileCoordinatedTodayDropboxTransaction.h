//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSSet;

@interface FCFileCoordinatedTodayDropboxTransaction : NSObject <NSCopying>
{
    NSUInteger _transactionType;
    NSArray *_insertedOrUpdatedHistoryItems;
    NSSet *_deletedArticleIDs;
}

+ (void)_mergeItem:(id)arg1 intoItem:(id)arg2;
+ (id)collapsedTransactionOfTransactions:(id)arg1;
+ (id)transactionToMutateSeenArticlesWithInsertedOrUpdatedHistoryItems:(id)arg1 deletedArticleIDs:(id)arg2;
+ (id)transactionToClearSeenArticles;
+ (id)transactionOfIdentity;
@property(copy, nonatomic) NSSet *deletedArticleIDs; // @synthesize deletedArticleIDs=_deletedArticleIDs;
@property(copy, nonatomic) NSArray *insertedOrUpdatedHistoryItems; // @synthesize insertedOrUpdatedHistoryItems=_insertedOrUpdatedHistoryItems;
@property(nonatomic) NSUInteger transactionType; // @synthesize transactionType=_transactionType;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)_mergeItem:(id)arg1 intoItem:(id)arg2;
- (id /* CDUnknownBlockType */)todayPrivateDataAccessor;
- (id)initWithTransactionType:(NSUInteger)arg1 insertedOrUpdatedHistoryItems:(id)arg2 deletedArticleIDs:(id)arg3;
- (id)init;

@end

