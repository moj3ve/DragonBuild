//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDHAPAccessory;

@interface HMDAccessoryBundle : HMFObject
{
    HMDHAPAccessory *accessory;
    HMFObject *context;
}

@property(retain, nonatomic) HMFObject *context; // @synthesize context;
@property(retain, nonatomic) HMDHAPAccessory *accessory; // @synthesize accessory;
// - (void).cxx_destruct;
- (id)initWithAccessory:(id)arg1 context:(id)arg2;

@end

