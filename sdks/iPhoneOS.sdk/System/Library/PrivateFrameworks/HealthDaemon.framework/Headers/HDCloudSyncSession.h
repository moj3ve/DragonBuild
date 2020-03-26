//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSyncSession.h>

@class HDCloudSyncSequenceRecord, NSSet;

@interface HDCloudSyncSession : HDSyncSession
{
    NSSet *_excludedSyncStores;
    HDCloudSyncSequenceRecord *_sequenceRecord;
}

@property(retain, nonatomic) HDCloudSyncSequenceRecord *sequenceRecord; // @synthesize sequenceRecord=_sequenceRecord;
// - (void).cxx_destruct;
- (long long)maxEncodedBytesPerMessageForSyncEntityClass:(Class)arg1;
- (id)newChangeWithSyncEntityClass:(Class)arg1;
- (void)setExcludedSyncStores:(id)arg1;
- (id)excludedSyncStores;

@end

