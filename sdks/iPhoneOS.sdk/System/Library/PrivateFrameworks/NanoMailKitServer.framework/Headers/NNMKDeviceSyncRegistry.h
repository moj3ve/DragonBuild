//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NNMKSQLiteConnection, NSDate, NSNumber, NSString;

@interface NNMKDeviceSyncRegistry : NSObject
{
    BOOL _isMessagesSyncSuspendedByConnectivity;
    BOOL _organizeByThread;
    BOOL _protectedContentChannelSupported;
    BOOL _recreatedFromScratch;
    NSString *_path;
    NSUInteger _fullSyncVersion;
    NSNumber *_supportsWebKit;
    double _deviceScreenWidth;
    double _deviceScreenScale;
    NSDate *_disconnectedSince;
    NSUInteger _currentDatabaseSchemaVersion;
    NNMKSQLiteConnection *_database;
}

@property(retain, nonatomic) NNMKSQLiteConnection *database; // @synthesize database=_database;
@property(readonly, nonatomic) BOOL recreatedFromScratch; // @synthesize recreatedFromScratch=_recreatedFromScratch;
@property(nonatomic) NSUInteger currentDatabaseSchemaVersion; // @synthesize currentDatabaseSchemaVersion=_currentDatabaseSchemaVersion;
@property(retain, nonatomic) NSDate *disconnectedSince; // @synthesize disconnectedSince=_disconnectedSince;
@property(nonatomic) BOOL protectedContentChannelSupported; // @synthesize protectedContentChannelSupported=_protectedContentChannelSupported;
@property(nonatomic) double deviceScreenScale; // @synthesize deviceScreenScale=_deviceScreenScale;
@property(nonatomic) double deviceScreenWidth; // @synthesize deviceScreenWidth=_deviceScreenWidth;
@property(nonatomic) BOOL organizeByThread; // @synthesize organizeByThread=_organizeByThread;
@property(nonatomic) BOOL isMessagesSyncSuspendedByConnectivity; // @synthesize isMessagesSyncSuspendedByConnectivity=_isMessagesSyncSuspendedByConnectivity;
@property(nonatomic) NSNumber *supportsWebKit; // @synthesize supportsWebKit=_supportsWebKit;
@property(nonatomic) NSUInteger fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
// - (void).cxx_destruct;
- (BOOL)hasMailboxSyncedActive;
- (void)_insureTransactionFor:(id /* CDUnknownBlockType */)arg1;
- (id)_ungroupGroupedValue:(id)arg1;
- (id)_selectSyncedAccountsWhere:(id)arg1 blockForBinding:(id /* CDUnknownBlockType */)arg2;
- (id)_selectSyncedMessagesIdsWhere:(id)arg1 count:(NSUInteger)arg2 blockForBinding:(id /* CDUnknownBlockType */)arg3;
- (id)_selectSyncedMessagesWhere:(id)arg1 blockForBinding:(id /* CDUnknownBlockType */)arg2;
- (void)_deleteAllObjectsFromTable:(id)arg1 mailboxId:(id)arg2;
- (void)_deleteAllObjectsFromTable:(id)arg1;
- (void)_removeControlValueForKey:(id)arg1;
- (void)_setControlValueForKey:(id)arg1 withBlockForBinding:(id /* CDUnknownBlockType */)arg2;
- (void)_loadAllControlValues;
- (id)_idsIdentifiersForObjectId:(id)arg1 type:(id)arg2;
- (void)deleteObjectId:(id)arg1 fromIDSIdentifiersNotYetAckdOfType:(id)arg2;
- (id)datesForIDSIdentifiersScheduledToBeResent;
- (void)prepareIDSIdentifiersForResendForErrorCode:(long long)arg1;
- (void)rescheduleIDSIdentifier:(id)arg1 resendInterval:(NSUInteger)arg2 withDateToResend:(id)arg3 errorCode:(long long)arg4;
- (void)markIDSIdentifierAsAckd:(id)arg1;
- (id)typeForIDSIdentifierNotYetAckd:(id)arg1;
- (id)objectIdsForType:(id)arg1;
- (id)objectIdsForIDSIdentifierNotYetAckd:(id)arg1 type:(id )arg2 resendInterval:(NSUInteger )arg3;
- (void)addObjectIds:(id)arg1 type:(id)arg2 resendInterval:(NSUInteger)arg3 forIDSIdentifierNotYetAckd:(id)arg4;
- (void)removeProgressForComposedMessageWithId:(id)arg1;
- (void)removePendingComposedMessages;
- (id)pendingComposedMessageIds;
- (long long)progressForComposedMessageWithId:(id)arg1;
- (void)setProgress:(long long)arg1 forComposedMessageWithId:(id)arg2;
- (id)_mailboxFromCurrentRowInStatement:(struct sqlite3_stmt )arg1;
- (id)_selectMailboxesWhere:(id)arg1 blockForBinding:(id /* CDUnknownBlockType */)arg2;
- (void)updateSyncRequestedForMailbox:(id)arg1;
- (void)updateSyncActiveForMailbox:(id)arg1;
- (void)updateSyncEnabledForMailbox:(id)arg1;
- (void)deleteAllMailboxes;
- (id)mailboxIdForDeletedMessageId:(id)arg1;
- (void)insertDeletedMessageId:(id)arg1 mailboxId:(id)arg2;
- (void)updateSyncVersion:(NSUInteger)arg1 forMailboxId:(id)arg2;
- (NSUInteger)syncVersionForMailboxId:(id)arg1;
- (id)mailboxesForAccountId:(id)arg1;
- (id)mailboxWithId:(id)arg1;
- (void)resetSyncRequestedFromMailboxes;
- (void)deleteMailboxWithId:(id)arg1 startTransaction:(BOOL)arg2;
- (void)deleteMailboxWithId:(id)arg1;
- (id)activeMailboxes;
- (id)syncEnabledMailboxes;
- (id)mailboxes;
- (void)addOrUpdateMailbox:(id)arg1;
- (void)updateSourceType:(NSUInteger)arg1 forAccountId:(id)arg2;
- (id)accountIdForUsername:(id)arg1;
- (NSUInteger)accountSourceTypeForAccountId:(id)arg1;
- (NSUInteger)accountSourceTypeForMailboxId:(id)arg1;
- (NSUInteger)accountSourceTypeForMessageId:(id)arg1;
- (id)syncedAccountIdsResendRequested;
- (void)removeSyncedAccountForAccountWithId:(id)arg1;
- (void)addOrUpdateSyncedAccount:(id)arg1;
- (id)syncedAccountForAccountWithId:(id)arg1;
- (id)allSyncedAccountsKeyedByAccountId;
- (id)syncedMessagesKeyedByMessageIdAfterDateReceived:(id)arg1 mailboxId:(id)arg2;
- (void)removeSyncedMessagesBeforeDateReceived:(id)arg1 mailbox:(id)arg2;
- (id)messageIdForSanitizedMessageId:(id)arg1;
- (NSUInteger)syncedMessagesCountForMailboxId:(id)arg1;
- (NSUInteger)syncedMessagesCount;
- (id)oldestDateReceivedForMailboxId:(id)arg1;
- (id)firstSyncedMessageIdsContentNotSyncedOrRequestedByUser:(NSUInteger)arg1;
- (id)syncedMessageIdsContentRequestedByUser;
- (id)syncedMessageIdsResendRequested;
- (id)syncedMessagesForConversationWithId:(id)arg1;
- (void)removeSyncedMessageForMessageWithId:(id)arg1;
- (void)addOrUpdateSyncedMessage:(id)arg1;
- (id)syncedMessageForMessageWithId:(id)arg1;
- (BOOL)containsSyncedMessageForMessageWithId:(id)arg1;
- (void)cleanUpForInitialSync;
- (void)incrementSyncVersionForMailboxId:(id)arg1;
- (void)cleanUpForFullSyncWithMailbox:(id)arg1;
- (void)endUpdates;
- (void)beginUpdates;
- (id)initWithPath:(id)arg1;

@end

