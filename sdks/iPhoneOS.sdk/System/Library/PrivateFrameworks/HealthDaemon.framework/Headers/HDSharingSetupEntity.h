//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDSharingSetupEntity : HDHealthEntity
{
}

+ (BOOL)enumerateSharesWithProfile:(id)arg1 error:(id )arg2 handler:(id /* CDUnknownBlockType */)arg3;
+ (id)_sampleTypesForSetupWithPersistentID:(long long)arg1 database:(id)arg2 error:(id )arg3;
+ (BOOL)createShareWithProfile:(id)arg1 identifier:(id)arg2 predicate:(id)arg3 error:(id )arg4;
+ (id)privateSubEntities;
+ (long long)protectionClass;
+ (const CDStruct_4c492439 )columnDefinitionsWithCount:(NSUInteger )arg1;
+ (id)databaseTable;

@end

