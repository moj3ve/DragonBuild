//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRContainerHelper-Protocol.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface BRCDaemonContainerHelper : NSObject <BRContainerHelper>
{
    NSSet *_disabledBundleIDs;
    NSSet *_knownBundleIDs;
}

// - (void).cxx_destruct;
- (id)itemIDForURL:(id)arg1 error:(id )arg2;
- (unsigned short)br_capabilityToMoveFromURL:(id)arg1 toNewParent:(id)arg2 error:(id )arg3;
- (unsigned short)br_capabilityToMoveFromLookup:(id)arg1 toNewParent:(id)arg2 session:(id)arg3 error:(id )arg4;
- (BOOL)cloudSyncTCCDisabledForContainerMeta:(id)arg1;
- (id)fetchContainerForURL:(id)arg1;
- (id)fetchAllContainersByIDWithError:(id )arg1;
- (BOOL)canFetchAllContainersByID;
- (id)init;

@end

