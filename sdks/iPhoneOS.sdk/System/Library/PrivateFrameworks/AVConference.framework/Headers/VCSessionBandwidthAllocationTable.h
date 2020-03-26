//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCSessionBandwidthAllocationTable : VCObject
{
    unsigned char _type;
    NSMutableDictionary *_aggregatedAudioOnlyTable;
    NSMutableDictionary *_aggregatedAudioVideoTable;
    NSMutableDictionary *_aggregatedAudioOnlyTableWithRedundancy;
    NSMutableDictionary *_aggregatedAudioVideoTableWithRedundancy;
    NSMutableDictionary *_audioTable;
    NSMutableDictionary *_videoTable;
    NSMutableDictionary *_audioOnlyBitrateToStreamIDsTable;
    NSMutableDictionary *_audioVideoBitrateToStreamIDsTable;
    NSMutableDictionary *_videoOnlyBitrateToStreamIDsTable;
    NSMutableDictionary *_streamIDToEntryTable;
}

@property(readonly, nonatomic) NSDictionary *aggregatedAudioVideoTableWithRedundancy; // @synthesize aggregatedAudioVideoTableWithRedundancy=_aggregatedAudioVideoTableWithRedundancy;
@property(readonly, nonatomic) NSDictionary *aggregatedAudioOnlyTableWithRedundancy; // @synthesize aggregatedAudioOnlyTableWithRedundancy=_aggregatedAudioOnlyTableWithRedundancy;
@property(readonly, nonatomic) NSDictionary *videoOnlyBitrateToStreamIDsTable; // @synthesize videoOnlyBitrateToStreamIDsTable=_videoOnlyBitrateToStreamIDsTable;
@property(readonly, nonatomic) NSDictionary *audioOnlyBitrateToStreamIDsTable; // @synthesize audioOnlyBitrateToStreamIDsTable=_audioOnlyBitrateToStreamIDsTable;
@property(readonly, nonatomic) NSDictionary *audioVideoBitrateToStreamIDsTable; // @synthesize audioVideoBitrateToStreamIDsTable=_audioVideoBitrateToStreamIDsTable;
@property(readonly, nonatomic) NSDictionary *aggregatedAudioVideoTable; // @synthesize aggregatedAudioVideoTable=_aggregatedAudioVideoTable;
@property(readonly, nonatomic) NSDictionary *aggregatedAudioOnlyTable; // @synthesize aggregatedAudioOnlyTable=_aggregatedAudioOnlyTable;
- (void)printTable:(id)arg1;
- (id)newBitrateToStreamIDsTableWithAudioTable:(id)arg1 videoTable:(id)arg2;
- (id)newAggregateTableWithAudioTable:(id)arg1 videoTable:(id)arg2 isVideoEnabled:(BOOL)arg3 isRedundancyEnabled:(BOOL)arg4;
- (void)generateVideoOnlyBitrateToStreamIDsTable;
- (void)generateAudioVideoBitrateToStreamIDsTable;
- (void)generateAudioOnlyBitrateToStreamIDsTable;
- (void)generateAudioVideoBandwidthAllocationTableWithRedundancy;
- (void)generateAudioOnlyBandwidthAllocationTableWithRedundancy;
- (void)generateAudioVideoBandwidthAllocationTable;
- (void)generateAudioOnlyBandwidthAllocationTable;
@property(readonly, nonatomic) NSArray *videoEntries;
@property(readonly, nonatomic) NSArray *audioEntries;
- (void)generate;
- (void)addBandwidthAllocationTableEntry:(id)arg1;
- (id)entryForStreamID:(id)arg1;
- (void)dealloc;
- (id)initWithType:(unsigned char)arg1;

@end

