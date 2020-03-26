//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSString;

@interface SOSiteCode : NSObject <NSSecureCoding>
{
    NSString *_code;
    NSDate *_timeStamp;
    NSString *_networkFingerprint;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *networkFingerprint; // @synthesize networkFingerprint=_networkFingerprint;
@property(readonly, nonatomic) NSDate *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(readonly, nonatomic) NSString *code; // @synthesize code=_code;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)age;
- (id)description;
- (id)initWithSiteCode:(id)arg1 forNetworkFingerprint:(id)arg2;

@end

