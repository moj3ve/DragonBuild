//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPAccessory.h>

#import <CoreHAP/HAPAccessoryServerInternalDelegate-Protocol.h>
#import <CoreHAP/HAPRelayActivationClientDelegate-Protocol.h>
#import <CoreHAP/HAPRelayPairingClientDelegate-Protocol.h>

@class HAPCharacteristic, HAPRelayActivationClient, HAPRelayPairingClient, NSString;

@interface HAPRelayAccessory : HAPAccessory <HAPAccessoryServerInternalDelegate, HAPRelayActivationClientDelegate, HAPRelayPairingClientDelegate>
{
    BOOL _relayEnabled;
    HAPRelayActivationClient *_relayActivationClient;
    HAPRelayPairingClient *_relayPairingClient;
    NSUInteger _relayState;
    HAPCharacteristic *_relayControlPointCharacteristic;
    HAPCharacteristic *_relayEnabledCharacteristic;
    NSString *_relayAccessoryIdentifier;
}

+ (id)requiredRelayServiceCharacteristics;
@property(retain, nonatomic) NSString *relayAccessoryIdentifier; // @synthesize relayAccessoryIdentifier=_relayAccessoryIdentifier;
@property(retain, nonatomic) HAPCharacteristic *relayEnabledCharacteristic; // @synthesize relayEnabledCharacteristic=_relayEnabledCharacteristic;
@property(retain, nonatomic) HAPCharacteristic *relayControlPointCharacteristic; // @synthesize relayControlPointCharacteristic=_relayControlPointCharacteristic;
// - (void).cxx_destruct;
- (void)accessoryServer:(id)arg1 didUpdateValueForCharacteristic:(id)arg2;
- (BOOL)_parseRelayService:(id)arg1;
- (BOOL)_parseServices;
- (void)relayPairingClient:(id)arg1 didReceiveAccessToken:(id)arg2 accessoryIdentifier:(id)arg3;
- (void)relayPairingClient:(id)arg1 didReceiveControllerIdentifier:(id)arg2;
- (void)relayPairingClient:(id)arg1 didCloseWithError:(id)arg2;
- (void)removeRelayPairingWithIdentifier:(id)arg1 queue:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)addRelayPairingWithIdentifier:(id)arg1 accessToken:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)_handleRelayPairingAccessTokenRequestWithAccessToken:(id)arg1 accessoryIdentifier:(id)arg2;
- (void)_handleRelayPairingPairingTokenRequestForControllerIdentifier:(id)arg1;
- (void)_handleRelayPairingIdentifierRequest;
- (void)_stopRelayPairingWithError:(id)arg1;
- (void)startRelayPairingWithPairingClient:(id)arg1;
- (void)_setRelayPairingClient:(id)arg1;
- (id)_relayPairingClient;
@property(readonly, nonatomic) HAPRelayPairingClient *relayPairingClient; // @synthesize relayPairingClient=_relayPairingClient;
- (void)relayActivationClient:(id)arg1 didReceiveRelayCertificate:(id)arg2;
- (void)relayActivationClient:(id)arg1 didReceiveChallenge:(id)arg2;
- (void)relayActivationClient:(id)arg1 didCloseWithError:(id)arg2;
- (void)_handleRelayActivationCertificate:(id)arg1;
- (void)_handleRelayActivationChallenge:(id)arg1;
- (void)_stopRelayActivationWithError:(id)arg1;
- (void)startRelayActivationWithActivationClient:(id)arg1;
- (void)_setRelayActivationClient:(id)arg1;
- (id)_relayActivationClient;
@property(readonly, nonatomic) HAPRelayActivationClient *relayActivationClient; // @synthesize relayActivationClient=_relayActivationClient;
- (void)_setRelayState:(NSUInteger)arg1;
- (NSUInteger)_relayState;
@property(readonly, nonatomic) NSUInteger relayState; // @synthesize relayState=_relayState;
- (void)_updateRelayEnabled:(BOOL)arg1;
- (void)_setRelayEnabled:(BOOL)arg1;
@property(nonatomic, getter=isRelayEnabled) BOOL relayEnabled; // @synthesize relayEnabled=_relayEnabled;
- (void)_handleRelayControlPointCharacteristicTransactionWithTLV8Data:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)supportsRelay;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3;

@end

