//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KTApplicationPublicKeyStore, NSString;

@interface KTPatConfigInclusionProofVerifier : NSObject
{
    KTApplicationPublicKeyStore *_keyStore;
    NSString *_application;
}

@property(retain) NSString *application; // @synthesize application=_application;
@property(readonly) KTApplicationPublicKeyStore *keyStore; // @synthesize keyStore=_keyStore;
// - (void).cxx_destruct;
- (BOOL)verifyPatConfigInclusionProofWithPerAppLogEntry:(id)arg1 topLevelTreeEntry:(id)arg2 error:(id )arg3;
- (id)initWithKeyStore:(id)arg1 application:(id)arg2;

@end

