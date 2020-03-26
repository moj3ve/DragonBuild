//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSCloudKitMirroringRequestOptions, NSData, NSEntityDescription, NSManagedObjectContext, NSPersistentContainer, NSPersistentStore, NSSet, RCDatabaseMetadata, RCPersistentContainer, RCSavedRecordingsController;

@interface RCSavedRecordingsModel : NSObject <NSFetchedResultsControllerDelegate>
{
    RCPersistentContainer *_container;
    RCDatabaseMetadata *_metadata;
    NSPersistentStore *_localStore;
    NSPersistentStore *_cloudStore;
    NSManagedObjectContext *_context;
    NSEntityDescription *_cloudRecordingEntity;
    RCSavedRecordingsController *_recordingsController;
    RCSavedRecordingsController *_availableRecordingsController;
    RCSavedRecordingsController *_deletedRecordingsController;
    NSCloudKitMirroringRequestOptions *_mirroringRequestOptions;
    BOOL _valid;
    BOOL _disableSaveNotifications;
    long long _isSavingDisabledCount;
}

+ (id)_moveFileIntoRecordingsDirectory:(id)arg1;
+ (id)_copyFileIntoRecordingsDirectory:(id)arg1;
+ (void)_insertRecordingWithImportableAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
+ (void)_importImportableRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
+ (void)importRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
+ (void)determineImportabilityOfRecordingWithAudioURL:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
+ (id)creationDateFromStandardRecordingURL:(id)arg1;
+ (id)standardURLForRecordingWithCreationDate:(id)arg1;
+ (id)standardPathForRecordingWithCreationDate:(id)arg1 uniqueID:(id)arg2;
+ (id)standardPathForRecording:(id)arg1;
+ (id)_dateFormatterComponentFormatting;
+ (id)savedRecordingsDirectory;
+ (id)newPrivateModel;
+ (id)newSyncModel;
+ (id)cloudMirroringModel;
+ (BOOL)migrateDatabaseIfNecessary;
+ (id)sharedModelForQueue:(id)arg1;
+ (id)sharedModelForMainQueue;
+ (id)startStoreServers:(id /* CDUnknownBlockType */)arg1;
+ (id)currentLocationBasedName;
@property(readonly, nonatomic) RCSavedRecordingsController *deletedRecordingsController; // @synthesize deletedRecordingsController=_deletedRecordingsController;
@property(readonly, nonatomic) RCSavedRecordingsController *availableRecordingsController; // @synthesize availableRecordingsController=_availableRecordingsController;
@property(readonly, nonatomic) RCSavedRecordingsController *recordingsController; // @synthesize recordingsController=_recordingsController;
@property(nonatomic) BOOL disableSaveNotifications; // @synthesize disableSaveNotifications=_disableSaveNotifications;
@property(nonatomic) long long isSavingDisabledCount; // @synthesize isSavingDisabledCount=_isSavingDisabledCount;
@property BOOL valid; // @synthesize valid=_valid;
// - (void).cxx_destruct;
- (id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3;
- (id)nextRecordingDefaultLabelWithCustomLabelBase:(id)arg1;
- (BOOL)fetchExportProgress:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)fetchObjectsFromCloud:(id)arg1 entityToAttributesToFetch:(NSDictionary )arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (BOOL)importFromCloud:(id /* CDUnknownBlockType */)arg1;
- (BOOL)exportToCloud:(id /* CDUnknownBlockType */)arg1;
- (BOOL)resetCloud:(id /* CDUnknownBlockType */)arg1;
- (void)_scheduleAutomaticRecordingDeletions;
- (void)_deleteRecordingsWithDurationLessThan:(double)arg1 passingTest:(id /* CDUnknownBlockType */)arg2;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)metadataValueForKey:(id)arg1;
- (BOOL)deleteDatabaseProperty:(id)arg1;
- (id)valueForDatabaseProperty:(id)arg1;
- (BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2 save:(BOOL)arg3;
- (void)performWithSavingDisabled:(id /* CDUnknownBlockType */)arg1;
- (void)performBlockAndWaitInTemporaryContext:(id /* CDUnknownBlockType */)arg1;
- (void)performBlockAndWait:(id /* CDUnknownBlockType */)arg1;
- (void)finishSaveByUpdatingSearchableIndexWithChangeContext:(id)arg1;
- (void)_synchronizeRecordingsMetadata;
- (BOOL)__saveManagedObjectContext:(id )arg1;
- (void)_deliverSaveNotifications;
- (BOOL)saveIfNecessary:(id )arg1;
- (void)saveIfNecessary;
- (id)recordingsForSpotlightSearch:(id)arg1;
- (id)_labelPresetsForQuery:(id)arg1;
- (BOOL)hasExistingRecordingForAudioFile:(id)arg1;
- (void)mergeRecordings:(id)arg1 allTransactions:(id)arg2;
- (id)duplicateRecording:(id)arg1 error:(id )arg2;
- (void)eraseAllDeleted;
- (void)eraseRecordingsDeletedBeforeDate:(id)arg1;
@property(readonly, nonatomic) NSArray *deletedRecordings;
- (void)restoreDeletedRecording:(id)arg1;
- (void)deleteRecording:(id)arg1;
- (void)eraseRecording:(id)arg1;
- (void)setTitle:(id)arg1 ofRecording:(id)arg2;
- (id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3 customTitleBase:(id)arg4 uniqueID:(id)arg5;
- (id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3 customLabelBase:(id)arg4;
- (id)nextRecordingDefaultLabelWithCustomTitleBase:(id)arg1;
@property(readonly, nonatomic) NSPersistentContainer *container;
- (id)context;
@property(readonly, nonatomic) NSData *currentChangeToken;
- (id)currentPersistentHistoryToken;
- (id)transactionForToken:(id)arg1;
- (id)enumerateChangeHistorySinceToken:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (id)_transactionHistorySinceToken:(id)arg1;
- (void)_enumerateFetchedRecordingTitles:(id /* CDUnknownBlockType */)arg1;
- (id)_allTitles;
- (id)enumerateExistingRecordingsSinceChangeToken:(id)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (void)enumerateExistingRecordingsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_enumerateRecordingsWithEntityDescription:(id)arg1 propertiesToFetch:(id)arg2 withBlock:(id /* CDUnknownBlockType */)arg3;
- (id)recordingsWithPredicate:(id)arg1;
- (id)recordingsWithUniqueID:(id)arg1;
- (id)recordingWithUniqueID:(id)arg1;
- (id)mostRecentRecording;
- (id)_recordingsWithUniqueID:(id)arg1 templateName:(id)arg2;
- (id)recordingWithPath:(id)arg1;
- (id)recordingWithITunesPersistentID:(long long)arg1;
- (id)recordingWithURIRepresentation:(id)arg1;
- (id)recordingWithID:(id)arg1;
- (id)indexPathForRecording:(id)arg1;
- (id)recordingAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) NSArray *recordings;
@property(readonly, nonatomic) NSUInteger count;
@property(readonly, nonatomic) NSSet *audioProperties;
@property(readonly, nonatomic) NSArray *allRecordings;
- (id)mirroringRequestOptions;
- (id)mirroringOptions;
- (id)cloudRecordingEntity;
- (id)cloudStore;
- (void)controllerDidChangeContent:(id)arg1;
- (void)dealloc;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)_initWithContainer:(id)arg1 concurrencyType:(NSUInteger)arg2;
- (id)init;

@end

