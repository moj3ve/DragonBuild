//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSampleSyncEntity.h>

#import <HealthDaemon/HDNanoSyncEntity-Protocol.h>

@interface HDDeletedSampleSyncEntity : HDSampleSyncEntity <HDNanoSyncEntity>
{
}

+ (id)_basePruningPredicateForDate:(id)arg1 profile:(id)arg2;
+ (BOOL)_insertObjectsFromCodableObjectCollection:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id )arg4;
+ (id)_predicateForSyncSession:(id)arg1;
+ (Class)healthEntityClass;
+ (id)syncEntityIdentifier;
+ (NSUInteger)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (int)nanoSyncObjectType;

@end

