//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDMessageChangeHookResponder-Protocol.h>
#import <EmailDaemon/EFLoggable-Protocol.h>

@class EDCachingMailboxPredictor, EDMailboxPersistence, EDPersistenceHookRegistry;
@protocol EDMailboxPredictionQueryAdapter, EMUserProfileProvider, OS_dispatch_queue;

@interface EDMailboxPredictionController : NSObject <EDMessageChangeHookResponder, EFLoggable>
{
    id <EDMailboxPredictionQueryAdapter> _queryAdapter;
    NSObject<OS_dispatch_queue> *_processingQueue;
    EDCachingMailboxPredictor *_cachingPredictor;
    EDMailboxPersistence *_mailboxPersistence;
    EDPersistenceHookRegistry *_hookRegistry;
    id <EMUserProfileProvider> _userProfileProvider;
}

+ (id)log;
@property(readonly, nonatomic) id <EMUserProfileProvider> userProfileProvider; // @synthesize userProfileProvider=_userProfileProvider;
@property(readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry; // @synthesize hookRegistry=_hookRegistry;
@property(readonly, nonatomic) EDMailboxPersistence *mailboxPersistence; // @synthesize mailboxPersistence=_mailboxPersistence;
@property(readonly, nonatomic) EDCachingMailboxPredictor *cachingPredictor; // @synthesize cachingPredictor=_cachingPredictor;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(readonly, nonatomic) id <EDMailboxPredictionQueryAdapter> queryAdapter; // @synthesize queryAdapter=_queryAdapter;
// - (void).cxx_destruct;
- (id)_createPredictor;
- (void)_invalidateCacheForAddedMessage:(id)arg1;
- (id)_processPredictionForMessages:(id)arg1;
- (id)predictMailboxForMovingMessages:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)persistenceWillAddMessage:(id)arg1 fromExistingMessage:(BOOL)arg2;
- (void)dealloc;
- (id)initWithMessagePersistence:(id)arg1 mailboxPersistence:(id)arg2 hookRegistry:(id)arg3 userProfileProvider:(id)arg4;

@end

