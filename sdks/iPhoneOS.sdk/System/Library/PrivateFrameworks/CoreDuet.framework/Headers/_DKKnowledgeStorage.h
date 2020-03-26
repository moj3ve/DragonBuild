//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKCoreDataStorageDelegate-Protocol.h>
#import <CoreDuet/_DKKnowledgeDeleting-Protocol.h>
#import <CoreDuet/_DKKnowledgeEventStreamDeleting-Protocol.h>
#import <CoreDuet/_DKKnowledgeQuerying-Protocol.h>
#import <CoreDuet/_DKKnowledgeSaving-Protocol.h>

@class NSHashTable, NSString, NSURL, NSUUID, _DKCoreDataStorage, _DKPreferences, _DKTombstonePolicy;
@protocol OS_dispatch_queue;

@interface _DKKnowledgeStorage : NSObject <_DKCoreDataStorageDelegate, _DKKnowledgeEventStreamDeleting, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying>
{
    NSObject<OS_dispatch_queue> *_executionQueue;
    NSObject<OS_dispatch_queue> *_defaultResponseQueue;
    NSString *_directory;
    NSURL *_modelURL;
    NSHashTable *_knowledgeStorageEventNotificationDelegates;
    NSUInteger _insertsAndDeletesObserverCount;
    NSUUID *_deviceUUID;
    BOOL _localOnly;
    _DKCoreDataStorage *_syncStorage;
    _DKTombstonePolicy *_tombstonePolicy;
    _DKCoreDataStorage *_storage;
    _DKPreferences *_defaults;
}

+ (id)sourceDeviceIdentityFromObject:(id)arg1;
+ (id)sourceDeviceIdentityFromDeviceID:(id)arg1;
+ (id)storageWithDirectory:(id)arg1 readOnly:(BOOL)arg2 localOnly:(BOOL)arg3;
+ (id)storageWithDirectory:(id)arg1 readOnly:(BOOL)arg2;
+ (id)storeWithDirectory:(id)arg1 readOnly:(BOOL)arg2;
@property(readonly, nonatomic) _DKPreferences *defaults; // @synthesize defaults=_defaults;
@property(readonly, nonatomic) _DKCoreDataStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) BOOL localOnly; // @synthesize localOnly=_localOnly;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *executionQueue; // @synthesize executionQueue=_executionQueue;
@property(retain) _DKTombstonePolicy *tombstonePolicy; // @synthesize tombstonePolicy=_tombstonePolicy;
// - (void).cxx_destruct;
- (id)syncStorageAssertion;
- (id)sourceDeviceIdentity;
- (void)configureDeviceUUID;
- (id)deviceUUID;
- (void)decrementInsertsAndDeletesObserverCount;
- (void)incrementInsertsAndDeletesObserverCount;
- (void)_databaseChangedWithNotification:(id)arg1;
- (id)lastChangeSetWithEntityName:(id)arg1 error:(id )arg2;
- (void)startSyncUpToCloudWithResponseQueue:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)startSyncDownFromCloudWithResponseQueue:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (NSUInteger)lastSequenceNumberForChangeSetWithEntityName:(id)arg1 error:(id )arg2;
- (BOOL)saveChangeSetsForSync:(id)arg1 error:(id )arg2;
- (id)fetchSyncChangesSinceDate:(id)arg1 error:(id )arg2;
- (id)fetchLocalChangesSinceDate:(id)arg1 error:(id )arg2;
- (id)_requestForChangeSinceDate:(id)arg1;
- (NSUInteger)deleteHistogram:(id)arg1;
- (void)saveHistogram:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (BOOL)coreDataStorage:(id)arg1 didAutoMigratePersistentStore:(id)arg2 toManagedObjectModel:(id)arg3 havingVersion:(NSUInteger)arg4 error:(id )arg5;
- (BOOL)coreDataStorage:(id)arg1 willAutoMigrateStoreAtURL:(id)arg2 fromManagedObjectModel:(id)arg3 havingVersion:(NSUInteger)arg4 error:(id )arg5;
- (id)coreDataStorage:(id)arg1 needsManagedObjectModelNameForVersion:(NSUInteger)arg2;
- (BOOL)coreDataStorage:(id)arg1 shouldCallDelegateAfterAutoMigrationToManagedObjectModelHavingVersion:(NSUInteger)arg2;
- (BOOL)coreDataStorage:(id)arg1 shouldCallDelegateBeforeAutoMigrationFromManagedObjectModelHavingVersion:(NSUInteger)arg2;
- (void)closeSyncStorage;
- (void)closeStorage;
- (NSUInteger)deleteObjectsInEventStream:(id)arg1 ifNeededToLimitEventCount:(NSUInteger)arg2 batchLimit:(NSUInteger)arg3;
- (NSUInteger)deleteObjectsInEventStreams:(id)arg1 olderThanDate:(id)arg2 limit:(NSUInteger)arg3;
- (id)eventCountPerStreamName;
- (NSUInteger)eventCount;
- (NSUInteger)deleteOrphanedEntities;
- (NSUInteger)deleteOldObjectsIfNeededToLimitTotalNumber:(NSUInteger)arg1 excludingPredicate:(id)arg2 limit:(NSUInteger)arg3;
- (NSUInteger)deleteEventsMatchingPredicate:(id)arg1 limit:(NSUInteger)arg2;
- (NSUInteger)deleteEventsStartingEarlierThanDate:(id)arg1 limit:(NSUInteger)arg2;
- (NSUInteger)deleteObjectsOlderThanDate:(id)arg1 excludingPredicate:(id)arg2 limit:(NSUInteger)arg3;
- (id)_executeQuery:(id)arg1 error:(id )arg2;
- (id)executeQuery:(id)arg1 error:(id )arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2;
- (NSUInteger)_deleteAllEventsMatchingPredicate:(id)arg1 error:(id )arg2;
- (NSUInteger)deleteAllEventsMatchingPredicate:(id)arg1 error:(id )arg2;
- (void)deleteAllEventsMatchingPredicate:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (NSUInteger)deleteAllEventsInEventStream:(id)arg1 error:(id )arg2;
- (void)deleteAllEventsInEventStream:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)_tombstoneObjects:(id)arg1 error:(id )arg2;
- (id)_tombstoneObjectsMatchingPredicate:(id)arg1 batchSize:(NSUInteger)arg2 error:(id )arg3;
- (BOOL)_deleteObjects:(id)arg1 error:(id )arg2;
- (BOOL)deleteObjects:(id)arg1 error:(id )arg2;
- (void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (BOOL)_saveObjects:(id)arg1 error:(id )arg2;
- (BOOL)saveObjects:(id)arg1 error:(id )arg2;
- (void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)_sendTombstoneNotificationsForRequirementIdentifiers:(id)arg1;
- (void)_sendTombstoneNotificationsWithStreamNameCounts:(id)arg1;
- (void)_sendEventsNotificationName:(id)arg1 withObjects:(id)arg2;
- (void)_sendInsertEventsNotificationWithObjects:(id)arg1;
- (id)errorForException:(id)arg1;
- (id)nilArrayError;
- (id)removeBadObjects:(id)arg1;
- (void)removeKnowledgeStorageEventNotificationDelegate:(id)arg1;
- (void)addKnowledgeStorageEventNotificationDelegate:(id)arg1;
- (BOOL)deleteSyncStorage;
- (BOOL)deleteStorage;
@property(readonly, nonatomic) _DKCoreDataStorage *syncStorage; // @synthesize syncStorage=_syncStorage;
- (id)syncStorageIfAvailable;
- (id)initWithDirectory:(id)arg1 readOnly:(BOOL)arg2 localOnly:(BOOL)arg3;
- (void)removeSyncPeer:(id)arg1;
- (BOOL)saveSyncPeer:(id)arg1 error:(id )arg2;
- (id)syncPeersWithError:(id )arg1;
- (void)removeKeyValueObjectForKey:(id)arg1 domain:(id)arg2;
- (void)setKeyValueObject:(id)arg1 forKey:(id)arg2 domain:(id)arg3;
- (id)keyValueObjectForKey:(id)arg1 domain:(id)arg2;
- (id)keyValueStoreForDomain:(id)arg1;
- (BOOL)copyValueToManagedObject:(id)arg1;
- (BOOL)updateDataAfterAutoMigrationToVersion:(NSUInteger)arg1 inPersistentStore:(id)arg2 error:(id )arg3;
- (BOOL)updateDataBeforeAutoMigrationFromVersion:(NSUInteger)arg1 inStoreAtURL:(id)arg2 error:(id )arg3;
- (id)versionsRequiringManualMigration;
- (id)versionsRequiringManualSetup;
@property(readonly, nonatomic) NSUInteger finalMigrationVersion;
- (void)updateToFinalMetadata:(id)arg1;

@end

