//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDCloudGroupChange, HMDCloudShareGroup, NSArray, NSMutableSet;

@interface HMDCloudShareGroupChange : HMFObject
{
    HMDCloudGroupChange *_cloudGroupChange;
    HMDCloudShareGroup *_cloudShareGroup;
    NSMutableSet *_changedObjectIDs;
    NSMutableSet *_changedRecordNames;
}

+ (id)shortDescription;
@property(retain, nonatomic) NSMutableSet *changedRecordNames; // @synthesize changedRecordNames=_changedRecordNames;
@property(retain, nonatomic) NSMutableSet *changedObjectIDs; // @synthesize changedObjectIDs=_changedObjectIDs;
@property(readonly, nonatomic) __weak HMDCloudShareGroup *cloudShareGroup; // @synthesize cloudShareGroup=_cloudShareGroup;
@property(readonly, nonatomic) __weak HMDCloudGroupChange *cloudGroupChange; // @synthesize cloudGroupChange=_cloudGroupChange;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *objectChanges;
- (BOOL)isRootRecord:(id)arg1;
- (BOOL)isRootRecordName:(id)arg1;
- (void)flushAllChangesToCache;
- (void)setDeleteAsProcessedWithRecordID:(id)arg1;
- (void)resetRecordWithRecordID:(id)arg1;
- (void)setSaveAsProcessedWithRecord:(id)arg1;
- (void)addRootRecordChange;
- (id)rootRecordModelObject;
- (void)fetchBatchToUpload:(id /* CDUnknownBlockType */)arg1;
- (void)collectRecordsForBatch;
- (BOOL)isRootRecordRequired;
- (BOOL)moreChangesToProcess;
@property(readonly, nonatomic) BOOL hasValidChanges;
- (void)removeChangeWithObjectID:(id)arg1;
- (void)addChange:(id)arg1 setAsProcessing:(BOOL)arg2;
- (void)loadCloudRecordsAndDetermineDeletesFromCache:(id /* CDUnknownBlockType */)arg1;
- (void)loadCloudRecordsFromCache:(id /* CDUnknownBlockType */)arg1;
- (void)loadCloudChangeTreeFromCache:(id /* CDUnknownBlockType */)arg1;
- (void)addChangeWithDeletedRecordID:(id)arg1;
- (void)addChangeWithRecord:(id)arg1;
- (void)addChangeWithObjectChange:(id)arg1;
- (void)_addChange:(id)arg1;
- (id)cloudRecordWithName:(id)arg1;
- (id)changeWithRecordName:(id)arg1;
- (id)cloudRecordWithObjectID:(id)arg1;
- (id)changeWithObjectID:(id)arg1;
@property(readonly, nonatomic) NSArray *processedTransactionStoreRowIDs;
@property(readonly, nonatomic) NSArray *allTransactionStoreRowIDs;
- (id)description;
- (id)shortDescription;
- (id)initWithShareGroup:(id)arg1 groupChange:(id)arg2;
- (id)init;

@end

