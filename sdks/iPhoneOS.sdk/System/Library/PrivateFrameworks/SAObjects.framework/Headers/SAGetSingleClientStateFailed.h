//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSString, SAAceClientState;

@interface SAGetSingleClientStateFailed : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)getSingleClientStateFailedWithReason:(id)arg1;
+ (id)getSingleClientStateFailedWithErrorCode:(long long)arg1;
+ (id)getSingleClientStateFailedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getSingleClientStateFailed;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SAAceClientState *attemptedClientState;
@property(copy, nonatomic) NSString *reason;
@property(nonatomic) long long errorCode;
- (id)initWithReason:(id)arg1;
- (id)initWithErrorCode:(long long)arg1;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

