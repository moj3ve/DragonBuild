//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphDataModelEnrichmentProcessor-Protocol.h>

@protocol OS_os_log;

@interface PGGraphUserBehaviorEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>
{
    NSObject<OS_os_log> *_loggingConnection;
}

+ (double)backgroundJobTimeout;
+ (id)backgroundJobName;
+ (BOOL)supportsBackgroundJob;
@property(readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
// - (void).cxx_destruct;
- (void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(id /* CDUnknownBlockType */)arg3;

@end

