//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutBuilderAssociatedSeriesEntity : HDHealthEntity
{
}

+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (id)foreignKeys;
+ (const CDStruct_4c492439 )columnDefinitionsWithCount:(NSUInteger )arg1;
+ (id)databaseTable;
+ (id)allBuilderAssociatedSeriesWithProfile:(id)arg1 error:(id )arg2;
+ (BOOL)enumerateSeriesForBuilder:(id)arg1 transaction:(id)arg2 error:(id )arg3 block:(id /* CDUnknownBlockType */)arg4;
+ (id)seriesForBuilder:(id)arg1 profile:(id)arg2 error:(id )arg3;
+ (long long)associateSeries:(id)arg1 toWorkoutBuilderID:(id)arg2 profile:(id)arg3 error:(id )arg4;

@end

