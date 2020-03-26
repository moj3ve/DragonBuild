//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HAPCharacteristic;

@interface HAPCharacteristicConfigurationRequestTuple : HMFObject
{
    BOOL _broadcastEnable;
    HAPCharacteristic *_characteristic;
    NSUInteger _broadcastInterval;
}

+ (id)configurationTupleForCharacteristic:(id)arg1 broadcastEnable:(BOOL)arg2 broadcastInterval:(NSUInteger)arg3;
@property(nonatomic) NSUInteger broadcastInterval; // @synthesize broadcastInterval=_broadcastInterval;
@property(nonatomic) BOOL broadcastEnable; // @synthesize broadcastEnable=_broadcastEnable;
@property(retain, nonatomic) HAPCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
// - (void).cxx_destruct;

@end

