//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSDictionary, NSNumber, NSString, NSUUID;

@interface STAskForTimeRequest : NSObject <NSSecureCoding>
{
    BOOL _oneMoreMinute;
    long long _usageType;
    NSString *_requestedResourceIdentifier;
    NSString *_resourceDisplayName;
    NSNumber *_timeRequested;
    NSDate *_timeStamp;
    NSUUID *_requestIdentifier;
    NSNumber *_requestingUserDSID;
    NSString *_requestingUserDisplayName;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *requestingUserDisplayName; // @synthesize requestingUserDisplayName=_requestingUserDisplayName;
@property(retain, nonatomic) NSNumber *requestingUserDSID; // @synthesize requestingUserDSID=_requestingUserDSID;
@property(retain, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSDate *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) BOOL oneMoreMinute; // @synthesize oneMoreMinute=_oneMoreMinute;
@property(retain, nonatomic) NSNumber *timeRequested; // @synthesize timeRequested=_timeRequested;
@property(copy, nonatomic) NSString *resourceDisplayName; // @synthesize resourceDisplayName=_resourceDisplayName;
@property(readonly, copy, nonatomic) NSString *requestedResourceIdentifier; // @synthesize requestedResourceIdentifier=_requestedResourceIdentifier;
@property(readonly, nonatomic) long long usageType; // @synthesize usageType=_usageType;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *payload;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1;
- (id)initWithUsageType:(long long)arg1 requestedResourceIdentifier:(id)arg2;

@end

