//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber;

@interface CEMSystemSiriDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAllowAssistant;
    NSNumber *_payloadAllowDictation;
    NSNumber *_payloadAllowAssistantUserGeneratedContent;
    NSNumber *_payloadForceAssistantProfanityFilter;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowAssistant:(id)arg2 withAllowDictation:(id)arg3 withAllowAssistantUserGeneratedContent:(id)arg4 withForceAssistantProfanityFilter:(id)arg5;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadForceAssistantProfanityFilter; // @synthesize payloadForceAssistantProfanityFilter=_payloadForceAssistantProfanityFilter;
@property(copy, nonatomic) NSNumber *payloadAllowAssistantUserGeneratedContent; // @synthesize payloadAllowAssistantUserGeneratedContent=_payloadAllowAssistantUserGeneratedContent;
@property(copy, nonatomic) NSNumber *payloadAllowDictation; // @synthesize payloadAllowDictation=_payloadAllowDictation;
@property(copy, nonatomic) NSNumber *payloadAllowAssistant; // @synthesize payloadAllowAssistant=_payloadAllowAssistant;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

@end

