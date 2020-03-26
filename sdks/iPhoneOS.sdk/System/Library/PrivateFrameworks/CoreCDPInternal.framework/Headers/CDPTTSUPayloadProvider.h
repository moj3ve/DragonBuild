//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPKeychainCircleProxy-Protocol.h>

@class KCPairingChannel;
@protocol CDPDCircleProxy;

@interface CDPTTSUPayloadProvider : NSObject <CDPKeychainCircleProxy>
{
    KCPairingChannel *_pairingChannel;
    BOOL _complete;
    id <CDPDCircleProxy> _circleProxy;
}

// - (void).cxx_destruct;
- (BOOL)requiresInitialSync;
- (BOOL)supportsInteractiveAuth;
- (BOOL)isComplete;
- (id)processIncomingPayload:(id)arg1 error:(id )arg2;
- (id)initiatingPayload:(id )arg1;
- (id)initWithCircleProxy:(id)arg1;

@end

