//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTSourceAvailabilityEntry-Protocol.h>

@class FCNetworkReachability;

@interface NTParsecSourceAvailabilityEntry : NSObject <NTSourceAvailabilityEntry>
{
    id /* CDUnknownBlockType */ _availabilityChangedNotificationBlock;
    FCNetworkReachability *_networkReachability;
}

@property(readonly, nonatomic) FCNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
@property(copy, nonatomic) id /* CDUnknownBlockType */ availabilityChangedNotificationBlock; // @synthesize availabilityChangedNotificationBlock=_availabilityChangedNotificationBlock;
// - (void).cxx_destruct;
@property(readonly, nonatomic, getter=isAvailable) BOOL available;
@property(readonly, nonatomic) Class todayResultsFetchDescriptorClass;
- (id)initWithNetworkReachability:(id)arg1;
- (id)init;

@end

