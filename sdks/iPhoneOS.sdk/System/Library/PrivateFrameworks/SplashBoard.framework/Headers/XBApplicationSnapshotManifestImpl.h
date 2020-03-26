//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SplashBoard/XBApplicationSnapshotManifest.h>

#import <SplashBoard/BSDescriptionProviding-Protocol.h>

@class BSAtomicSignal, BSTimer, NSFileManager, NSMutableArray, NSMutableDictionary, NSString, XBSnapshotContainerIdentity, XBSnapshotManifestIdentity;

@interface XBApplicationSnapshotManifestImpl : XBApplicationSnapshotManifest <NSSecureCoding, BSDescriptionProviding>
{
    XBSnapshotContainerIdentity *_containerIdentity;
    XBSnapshotManifestIdentity *_identity;
    NSMutableDictionary *_snapshotGroupsByID;
    NSFileManager *_imageAccessFileManger;
    _Atomic NSUInteger _bytesWaitingToWriteOut;
    BSTimer *_reapingTimer;
    BSAtomicSignal *_invalidatedSignal;
    NSUInteger _clientCount;
    NSUInteger _pendingOperations;
    NSMutableArray *_archiveSchedulingQueue_synchronizeCompletions;
    BOOL _archiveSchedulingQueue_dirty;
    BOOL _archiveSchedulingQueue_scheduled;
//     struct os_unfair_lock_s _accessLock;
}

+ (BOOL)supportsSecureCoding;
+ (long long)_outputFormatForSnapshot:(id)arg1;
+ (void)_configureSnapshot:(id)arg1 withCompatibilityInfo:(id)arg2 forLaunchRequest:(id)arg3;
+ (id)_snapshotPredicateForRequest:(id)arg1;
+ (void)_flushManifestQueue;
+ (BOOL)isUnderMemoryPressure;
+ (void)_workloop_noteManifestInvalidated:(id)arg1;
+ (void)relinquishManifest:(id)arg1;
+ (id)acquireManifestForContainerIdentity:(id)arg1 store:(id)arg2 creatingIfNecessary:(BOOL)arg3;
+ (void)initialize;
@property(readonly, copy, nonatomic) XBSnapshotManifestIdentity *identity; // @synthesize identity=_identity;
@property(readonly, copy, nonatomic) XBSnapshotContainerIdentity *containerIdentity; // @synthesize containerIdentity=_containerIdentity;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_workloop_reallyCheckClientCount;
- (void)_workloop_checkClientCount;
- (void)_workloop_decrementClientCount;
- (void)_workloop_incrementClientCount;
- (BOOL)_imageAccessQueue_saveData:(id)arg1 forSnapshot:(id)arg2;
- (id)_access_snapshotGroupForID:(id)arg1 creatingIfNeeded:(BOOL)arg2;
- (id)_access_snapshotsMatchingPredicate:(id)arg1;
- (id)_access_snapshotsForGroupIDs:(id)arg1 matchingPredicate:(id)arg2;
- (id)_access_snapshotsForGroupIDs:(id)arg1;
- (void)_access_gatherPaths:(id)arg1 forSnapshot:(id)arg2;
- (void)_access_purgeSnapshotsWithProtectedContent;
- (void)_access_deleteSnapshots:(id)arg1;
- (void)_access_deletePaths:(id)arg1;
- (void)_access_accessSnapshotsWithBlock:(id /* CDUnknownBlockType */)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_access_workloop_reapExpiredAndInvalidSnapshots;
- (BOOL)_access_validateWithContainerIdentity:(id)arg1;
- (BOOL)_validateWithContainerIdentity:(id)arg1;
- (void)_access_doArchiveWithCompletions:(id)arg1;
- (void)_handleMemoryPressure;
- (void)_scheduleArchivingIfNecessaryWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_synchronizeDataStoreWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_noteDirtied;
- (id)_allSnapshotGroups;
- (void)_access_addSnapshotToGroup:(id)arg1;
- (void)_addSnapshotToGroup:(id)arg1;
- (id)_createSnapshotWithGroupID:(id)arg1 generationContext:(id)arg2;
- (id)_generatableSnapshotForGroupID:(id)arg1 generationContext:(id)arg2;
- (BOOL)_invalidate;
- (id)_snapshotGroupsByID;
- (void)beginSnapshotAccessTransaction:(id /* CDUnknownBlockType */)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)deleteAllSnapshots;
- (void)purgeSnapshotsWithProtectedContent;
- (void)deleteSnapshotsForGroupID:(id)arg1;
- (void)deleteSnapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2;
- (void)deleteSnapshotsForGroupID:(id)arg1 predicateBuilder:(id /* CDUnknownBlockType */)arg2;
- (void)deleteSnapshotsUsingPredicateBuilder:(id /* CDUnknownBlockType */)arg1;
- (void)deleteSnapshotsMatchingPredicate:(id)arg1;
- (void)deleteSnapshots:(id)arg1;
- (void)deleteSnapshot:(id)arg1;
- (void)saveSnapshot:(id)arg1 atPath:(id)arg2 withContext:(id)arg3;
- (void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 writeToFile:(BOOL)arg3 didGenerateImage:(id /* CDUnknownBlockType */)arg4 didSaveImage:(id /* CDUnknownBlockType */)arg5;
- (id)createVariantForSnapshot:(id)arg1 withIdentifier:(id)arg2;
- (id)createSnapshotWithGroupID:(id)arg1;
- (id)snapshotsForGroupIDs:(id)arg1 fetchRequest:(id)arg2;
- (id)snapshotsForGroupIDs:(id)arg1 matchingPredicate:(id)arg2;
- (id)snapshotsForGroupIDs:(id)arg1;
- (id)snapshotsForGroupID:(id)arg1 fetchRequest:(id)arg2;
- (id)snapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2;
- (id)snapshotsForGroupID:(id)arg1;
- (id)defaultGroupIdentifier;
- (id)containerPath;
- (id)bundleIdentifier;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)_initWithContainerIdentity:(id)arg1;
- (id)init;
- (void)_commonInit;

@end

