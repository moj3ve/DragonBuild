//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HDDiagnosticReporter : NSObject
{
}

+ (void)_reportSnapshotWithType:(id)arg1 subType:(id)arg2 context:(id)arg3 processIdentifier:(id)arg4 thresholdValues:(id)arg5;
+ (void)reportDatabaseMigrationFailureWithContext:(id)arg1;
+ (void)reportNotFinalSeriesSampleWithClass:(Class)arg1 count:(long long)arg2 datumCount:(long long)arg3 reason:(id)arg4;
+ (void)reportQueryDurationWithServer:(id)arg1 dataCount:(long long)arg2 duration:(double)arg3;

@end

