//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKThreadsafeCache.h>

#import <GameCenterUI/GKScreenConfigurationListener-Protocol.h>

@interface GKThreadsafeImageCache : GKThreadsafeCache <GKScreenConfigurationListener>
{
}

- (void)applicationDidEnterBackground:(id)arg1;
- (void)greatestScreenScaleDidChange:(double)arg1;
- (id)initWithName:(id)arg1 maxCount:(NSUInteger)arg2;

@end

