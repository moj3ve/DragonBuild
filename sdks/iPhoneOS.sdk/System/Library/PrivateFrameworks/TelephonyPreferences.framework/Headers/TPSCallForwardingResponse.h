//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyPreferences/TPSResponse.h>

@class CTCallForwardingValue;

@interface TPSCallForwardingResponse : TPSResponse
{
    CTCallForwardingValue *_value;
}

+ (id)unarchivedObjectFromData:(id)arg1 error:(id )arg2;
+ (id)unarchivedObjectClasses;
@property(readonly, nonatomic) CTCallForwardingValue *value; // @synthesize value=_value;
// - (void).cxx_destruct;
- (id)archivedDataWithError:(id )arg1;
- (BOOL)isEqualToResponse:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithSubscriptionContext:(id)arg1 error:(id)arg2 value:(id)arg3;
- (id)initWithSubscriptionContext:(id)arg1 error:(id)arg2;

@end

