//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSMPIdentity.h>

@class NSData;

@interface IDSMPFullAccountIdentity : IDSMPIdentity
{
}

+ (id)fullAccountIdentityWithError:(id )arg1;
+ (id)identityWithData:(id)arg1 error:(id )arg2;
- (id)dataRepresentationWithError:(id )arg1;
- (id)signData:(id)arg1 withError:(id )arg2;
- (id)rolledAccountIdenityWithError:(id )arg1;
- (id)publicAccountIdentityWithError:(id )arg1;
@property(readonly, nonatomic) NSData *publicName;

@end

