//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSNumber, SAPersonAttribute;

@interface SAPhoneCall : SADomainCommand
{
}

+ (id)callWithDictionary:(id)arg1 context:(id)arg2;
+ (id)call;
- (BOOL)requiresResponse;
@property(nonatomic) BOOL speakerphoneCall;
@property(nonatomic) BOOL handsFreeCall;
@property(nonatomic) BOOL faceTimeAudio;
@property(nonatomic) BOOL faceTime;
@property(copy, nonatomic) NSNumber *emergencyCall;
@property(retain, nonatomic) SAPersonAttribute *callRecipient;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

