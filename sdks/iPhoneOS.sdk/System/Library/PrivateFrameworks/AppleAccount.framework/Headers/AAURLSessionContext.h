//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class AAAbsintheSigner, AAAttestationSigner, AARemoteServer, AKAppleIDSession;
@protocol OS_dispatch_queue;

@interface AAURLSessionContext : NSObject <NSCoding, NSCopying, NSSecureCoding, NSURLSessionAppleIDContext>
{
    AKAppleIDSession *_appleIDSession;
//     struct os_unfair_lock_s _signerLock;
    NSObject<OS_dispatch_queue> *_signingQueue;
    BOOL _requiresSigning;
    AAAbsintheSigner *_absintheSigner;
    AAAttestationSigner *_attestationSigner;
    AARemoteServer *_remoteServer;
}

+ (id)_relevantHTTPStatusCodes;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) AARemoteServer *remoteServer; // @synthesize remoteServer=_remoteServer;
@property(retain, nonatomic) AAAttestationSigner *attestationSigner; // @synthesize attestationSigner=_attestationSigner;
@property(retain, nonatomic) AAAbsintheSigner *absintheSigner; // @synthesize absintheSigner=_absintheSigner;
@property(readonly, nonatomic) BOOL requiresSigning; // @synthesize requiresSigning=_requiresSigning;
// - (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 getAppleIDHeadersForResponse:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (id)relevantHTTPStatusCodes;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_additionalAttestationHeadersForData:(id)arg1 withValidity:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_additionalAbsintheHeadersForData:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_additionalHeadersForRequest:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)initWithCoder:(id)arg1;
- (id)_initRequiringSigning:(BOOL)arg1 appleIDSession:(id)arg2;
- (id)initRequiringSigning:(BOOL)arg1;
- (id)init;

@end

