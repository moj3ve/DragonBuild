//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSMutableArray, NSString;

@interface NTPBPersonalizationLocalData : PBCodable <NSCopying>
{
    NSMutableArray *_closedChangeGroups;
    NSString *_currentInstanceIdentifier;
    NSMutableArray *_openChangeGroupDeltas;
    NSData *_remoteRecordData;
}

+ (Class)closedChangeGroupsType;
+ (Class)openChangeGroupDeltasType;
@property(retain, nonatomic) NSString *currentInstanceIdentifier; // @synthesize currentInstanceIdentifier=_currentInstanceIdentifier;
@property(retain, nonatomic) NSData *remoteRecordData; // @synthesize remoteRecordData=_remoteRecordData;
@property(retain, nonatomic) NSMutableArray *closedChangeGroups; // @synthesize closedChangeGroups=_closedChangeGroups;
@property(retain, nonatomic) NSMutableArray *openChangeGroupDeltas; // @synthesize openChangeGroupDeltas=_openChangeGroupDeltas;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasCurrentInstanceIdentifier;
@property(readonly, nonatomic) BOOL hasRemoteRecordData;
- (id)closedChangeGroupsAtIndex:(NSUInteger)arg1;
- (NSUInteger)closedChangeGroupsCount;
- (void)addClosedChangeGroups:(id)arg1;
- (void)clearClosedChangeGroups;
- (id)openChangeGroupDeltasAtIndex:(NSUInteger)arg1;
- (NSUInteger)openChangeGroupDeltasCount;
- (void)addOpenChangeGroupDeltas:(id)arg1;
- (void)clearOpenChangeGroupDeltas;
- (void)dealloc;

@end

