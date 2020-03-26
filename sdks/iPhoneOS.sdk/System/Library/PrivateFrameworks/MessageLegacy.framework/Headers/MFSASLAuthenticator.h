//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFAccount, MFAuthScheme, MFConnection;

@interface MFSASLAuthenticator : NSObject
{
    MFConnection *_connection;
    MFAuthScheme *_authScheme;
    MFAccount *_account;
    int _authenticationState;
}

- (void)setMissingPasswordError;
- (BOOL)couldRetry;
- (BOOL)base64EncodeResponseData;
- (BOOL)isUsingSSL;
- (id)securityLayer;
- (BOOL)justSentPlainTextPassword;
- (void)setAuthenticationState:(int)arg1;
- (int)authenticationState;
- (id)responseForServerData:(id)arg1;
- (BOOL)supportsInitialClientResponse;
- (id)saslName;
- (id)account;
- (id)authScheme;
- (void)dealloc;
- (id)initWithAuthScheme:(id)arg1 account:(id)arg2 connection:(id)arg3;

@end

