//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDBlockDispatcher-Protocol.h>

@class HDMaintenanceWorkCoordinator;

@interface HDMaintenanceWorkCoordinatorBlockDispatcher : NSObject <HDBlockDispatcher>
{
    HDMaintenanceWorkCoordinator *_maintenanceWorkCoordinator;
}

// - (void).cxx_destruct;
- (void)dispatchBlock:(id /* CDUnknownBlockType */)arg1 name:(id)arg2;
- (id)initWithMaintenanceWorkCoordinator:(id)arg1;
- (id)init;

@end

