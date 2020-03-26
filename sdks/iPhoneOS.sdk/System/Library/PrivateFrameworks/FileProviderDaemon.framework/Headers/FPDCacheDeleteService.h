//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FPDExtensionManager;

__attribute__((visibility("hidden")))
@interface FPDCacheDeleteService : NSObject
{
    FPDExtensionManager *_extensionManager;
}

+ (int)urgencyAtWhichItIsAcceptableToPurgeItemWithLastUsedDate:(id)arg1;
@property(retain, nonatomic) FPDExtensionManager *extensionManager; // @synthesize extensionManager=_extensionManager;
// - (void).cxx_destruct;
- (void)dumpStateTo:(id)arg1;
- (id)evictableByProviderDomainID:(int)arg1;
- (id)queryWithAttributes:(id)arg1;
- (void)evictItems:(id)arg1;
- (void)enumerateProviderDomainOnVolume:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)enumeratePurgeableFilesOnVolume:(id)arg1 forUrgency:(int)arg2 sizeOnly:(BOOL)arg3 handler:(id /* CDUnknownBlockType */)arg4;
- (id)allStorageVolumes;
- (id)volumesByProviderDomain;
- (BOOL)getVolume:(int )arg1 forPath:(id)arg2;
- (BOOL)shouldSearchableItem:(id)arg1 beEvictedAtUrgency:(int)arg2;
- (void)registerActivity;
- (id)nonPurgableSpacePerProviderOnVolume:(id)arg1;
- (id)purgableSpaceForAllUrgenciesOnVolume:(id)arg1;
- (void)start;

@end

