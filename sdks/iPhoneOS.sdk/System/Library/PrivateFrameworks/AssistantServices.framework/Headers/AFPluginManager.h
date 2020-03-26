//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface AFPluginManager : NSObject
{
    NSString *_path;
    NSArray *_domainKeys;
    id /* CDUnknownBlockType */ _factoryInitializationBlock;
    NSMutableDictionary *_domainKeyDictionary;
    BOOL _hasLoadedBundles;
}

+ (id)pluginManagerForPath:(id)arg1 domainKeys:(id)arg2 factoryInitializationBlock:(id /* CDUnknownBlockType */)arg3;
// - (void).cxx_destruct;
- (id)description;
- (void)_registerBundle:(id)arg1;
- (void)_loadBundlesIfNeeded;
- (void)preloadBundles;
- (void)enumerateFactoryInstancesForDomainKey:(id)arg1 groupIdentifier:(id)arg2 classIdentifier:(id)arg3 usingBlock:(id /* CDUnknownBlockType */)arg4;
- (id)initWithPath:(id)arg1 domainKeys:(id)arg2 factoryInitializationBlock:(id /* CDUnknownBlockType */)arg3;

@end

