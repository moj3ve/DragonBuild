//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDMessagePersistence, EMThread, EMThreadObjectID, NSArray, _EDThreadPersistence_SQLHelper, _EDThreadPersistence_ThreadMessages;

@interface _EDThreadPersistence_PersistedThread : NSObject
{
    BOOL _didCreateTempMessagesView;
    _EDThreadPersistence_ThreadMessages *_messages;
    long long _threadDatabaseID;
    _EDThreadPersistence_SQLHelper *_sqlHelper;
}

@property(readonly, nonatomic) _EDThreadPersistence_SQLHelper *sqlHelper; // @synthesize sqlHelper=_sqlHelper;
@property(readonly, nonatomic) long long threadDatabaseID; // @synthesize threadDatabaseID=_threadDatabaseID;
@property(readonly, nonatomic) _EDThreadPersistence_ThreadMessages *messages; // @synthesize messages=_messages;
// - (void).cxx_destruct;
- (void)dropTemporaryView;
- (void)_ensureTempMessagesView;
- (BOOL)addRecipients:(id)arg1 ofType:(NSUInteger)arg2;
- (id)recipientDatabaseIDsAndDatesForRecipientType:(NSUInteger)arg1;
- (BOOL)addRecipientsForType:(NSUInteger)arg1;
- (BOOL)setPriorityForDisplayMessageSender;
- (BOOL)addSenders:(id)arg1;
- (id)senderDatabaseIDsAndDates;
- (BOOL)addSenders;
- (id)_mailboxDatabaseIDsForWrappedMessages;
- (BOOL)addMailboxes;
- (void)addKeyPathsForDisplayMessageChangeToKeyPaths:(id)arg1;
- (BOOL)updateDisplayMessageWithUnreadWrappedMessages:(id)arg1;
- (BOOL)updateNewestReadMessage:(id)arg1;
- (id)updateNewestReadAndDisplayMessage;
@property(readonly, nonatomic) EMThread *thread;
@property(readonly, nonatomic) NSArray *wrappedMessages;
@property(readonly, nonatomic) EMThreadObjectID *threadObjectID;
@property(readonly, nonatomic) long long threadScopeDatabaseID;
@property(readonly, nonatomic) EDMessagePersistence *messagePersistence;
- (id)debugDescription;
- (id)initWithMessages:(id)arg1 threadDatabaseID:(long long)arg2;

@end

