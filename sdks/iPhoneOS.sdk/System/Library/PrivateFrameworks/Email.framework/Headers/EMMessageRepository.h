//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMRepository.h>

#import <Email/EFFutureDelegate-Protocol.h>
#import <Email/EFLoggable-Protocol.h>

@class EMBlockedSenderManager, EMMailboxRepository, EMRemoteConnection, NSArray, NSCache, NSHashTable, NSMapTable;
@protocol EMVIPManager;

@interface EMMessageRepository : EMRepository <EFFutureDelegate, EFLoggable>
{
    NSMapTable *_observedMessageListItemCache;
    NSMapTable *_unobservedMessageListItemCache;
    NSHashTable *_actualObservers;
    NSHashTable *_recoverableObservers;
//     struct os_unfair_lock_s _messageListItemCacheLock;
//     struct os_unfair_lock_s _observersLock;
    EMRemoteConnection *_connection;
    id <EMVIPManager> _vipManager;
    EMBlockedSenderManager *_blockedSenderManager;
    NSCache *_queryCountCache;
    EMMailboxRepository *_mailboxRepository;
}

+ (id)remoteInterface;
+ (id)signpostLog;
+ (id)log;
@property(readonly, nonatomic) EMMailboxRepository *mailboxRepository; // @synthesize mailboxRepository=_mailboxRepository;
@property(retain, nonatomic) NSCache *queryCountCache; // @synthesize queryCountCache=_queryCountCache;
@property(readonly, nonatomic) EMBlockedSenderManager *blockedSenderManager; // @synthesize blockedSenderManager=_blockedSenderManager;
@property(readonly, nonatomic) id <EMVIPManager> vipManager; // @synthesize vipManager=_vipManager;
@property(retain) EMRemoteConnection *connection; // @synthesize connection=_connection;
// - (void).cxx_destruct;
- (void)_broadcastMessageListItemChangesToObservers:(id /* CDUnknownBlockType */)arg1;
- (void)_vipsDidChange:(id)arg1;
- (void)_blockedSendersDidChange:(id)arg1;
- (void)_detectChangesForMatchedAddedObjectIDs:(id)arg1 observerationIdentifier:(id)arg2 matchedChangesHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_applyChangesToCachedObjects:(id)arg1;
- (void)loadOlderMessagesForMailboxes:(id)arg1;
- (id)_predictMailboxForMovingMessagesWithIDs:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)predictMailboxForMovingMessages:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)cachedMetadataJSONForKey:(id)arg1 messageID:(id)arg2;
- (void)setCachedMetadataJSON:(id)arg1 forKey:(id)arg2 messageID:(id)arg3;
- (void)resetAllPrecomputedThreadScopes;
- (void)resetPrecomputedThreadScopesForMailboxObjectID:(id)arg1;
- (void)resetPrecomputedThreadScopesForMailboxType:(long long)arg1;
- (void)_updateObserversForChangeAction:(id)arg1;
- (id)_undoActionForConversationAction:(id)arg1;
- (id)performMessageChangeActionReturningUndoAction:(id)arg1;
- (void)performMessageChangeAction:(id)arg1;
- (id)requestRepresentationForMessageWithID:(id)arg1 requestID:(NSUInteger)arg2 options:(id)arg3 delegate:(id)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (id)requestRepresentationForMessageWithID:(id)arg1 options:(id)arg2 delegate:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)setQueryCount:(id)arg1 forQueryIdentifier:(id)arg2;
- (id)startCountingQuery:(id)arg1 includingServerCountsForMailboxScope:(id)arg2 withObserver:(id)arg3;
- (id)performQuery:(id)arg1 withObserver:(id)arg2;
@property(readonly, copy) NSArray *currentObservers;
- (BOOL)_anyObserver:(id)arg1 containsObjectID:(id)arg2;
- (id)_existingObservedItemForObjectID:(id)arg1;
- (id)_cachedItemForItem:(id)arg1 observers:(id)arg2 validationBlock:(id /* CDUnknownBlockType */)arg3;
- (id)messageForObjectID:(id)arg1;
- (id)messageListItemsForObjectIDs:(id)arg1 observationIdentifier:(id)arg2;
- (id)messageListItemsForObjectIDs:(id)arg1;
- (void)performCountQuery:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)performQuery:(id)arg1 limit:(long long)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)didFinishBlockingMainThreadForFuture:(id)arg1;
- (void)didStartBlockingMainThreadForFuture:(id)arg1;
- (void)_notifyRecoverableObservers;
- (id)initWithRemoteConnection:(id)arg1 mailboxRepository:(id)arg2 vipManager:(id)arg3 blockedSenderManager:(id)arg4;
- (id)initInternal;
- (NSUInteger)signpostID;

@end

