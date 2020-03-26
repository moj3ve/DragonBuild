//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/PHAGraphServiceWorkerGraphUpdateJob.h>

@class PHAGraphServiceWorker;

@interface PHAGraphServiceWorkerCumulativeJob : PHAGraphServiceWorkerGraphUpdateJob
{
    PHAGraphServiceWorker *_worker;
}

+ (id)graphUpdateJobWithLibrary:(id)arg1 scenario:(NSUInteger)arg2 label:(id)arg3 updateBlock:(id /* CDUnknownBlockType */)arg4;
@property(nonatomic) __weak PHAGraphServiceWorker *worker; // @synthesize worker=_worker;
// - (void).cxx_destruct;
- (void)additionalWorkAfterUpdate;
- (long long)executionContext;
- (void)prepareProcessingForWorker:(id)arg1;

@end

