//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMFNetAddressInternal, NSString;

@interface HMFNetAddress : HMFObject
{
    HMFNetAddressInternal *_internal;
}

+ (id)localAddress;
@property(readonly, nonatomic) HMFNetAddressInternal *internal; // @synthesize internal=_internal;
// - (void).cxx_destruct;
- (id)dataUsingEncoding:(NSUInteger)arg1;
@property(readonly, copy, nonatomic) NSString *addressString;
@property(readonly, nonatomic) NSUInteger addressFamily;
- (id)attributeDescriptions;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithHostname:(id)arg1;
- (id)initWithSocketAddress:(const struct sockaddr )arg1;
- (id)init;

@end

