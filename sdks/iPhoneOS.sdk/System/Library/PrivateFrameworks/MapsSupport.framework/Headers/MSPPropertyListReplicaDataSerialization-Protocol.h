//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MSPReplica, NSData;
@protocol MSPReplicaMergeOptions;

@protocol MSPPropertyListReplicaDataSerialization <NSObject>
@property(readonly, nonatomic) NSData *propertyListDataRepresentation;
- (id)replicaByMergingWithReplica:(MSPReplica *)arg1 mergeOptions:(id <MSPReplicaMergeOptions>)arg2 userVisibleEffectiveContentsChanged:(out BOOL )arg3;
@end

