//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKBundleComplicationDataSourceLoader.h>

@class NSOrderedSet;

@interface NTKBundleAggregateComplicationLoader : NTKBundleComplicationDataSourceLoader
{
    NSOrderedSet *_loaders;
}

@property(copy, nonatomic) NSOrderedSet *loaders; // @synthesize loaders=_loaders;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)_loadClassesUsingBlock:(id /* CDUnknownBlockType */)arg1;

@end

