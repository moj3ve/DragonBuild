//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFTargetControlItemProvider : HFItemProvider
{
    id /* CDUnknownBlockType */ _filter;
    HMHome *_home;
    NSMutableSet *_remoteControlAccessoryItems;
}

@property(retain, nonatomic) NSMutableSet *remoteControlAccessoryItems; // @synthesize remoteControlAccessoryItems=_remoteControlAccessoryItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(copy, nonatomic) id /* CDUnknownBlockType */ filter; // @synthesize filter=_filter;
// - (void).cxx_destruct;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (id)initWithHome:(id)arg1;

@end

