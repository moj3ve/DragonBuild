//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SABackgroundContextObject-Protocol.h>

@class NSString;

@interface SAMicroblogSocialCredential : AceObject <SABackgroundContextObject>
{
}

+ (id)socialCredentialWithDictionary:(id)arg1 context:(id)arg2;
+ (id)socialCredential;
@property(copy, nonatomic) NSString *tokenSecret;
@property(copy, nonatomic) NSString *socialNetwork;
@property(copy, nonatomic) NSString *personalizationPermission;
@property(copy, nonatomic) NSString *accessToken;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

