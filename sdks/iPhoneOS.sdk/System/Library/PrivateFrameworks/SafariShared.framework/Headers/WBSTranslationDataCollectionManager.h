//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBSTranslationDataCollectionManager : NSObject
{
}

+ (void)sendUserPerformedTranslationURLDataToDifferentialPrivacyIfNecessary:(id)arg1;
+ (id)_translationDomainFromURLString:(id)arg1;
+ (void)_sendDomainDataToDifferentialPrivacy:(id)arg1 withKey:(id)arg2;
+ (void)_sendNormalizedHighLevelDomainDataToDifferentialPrivacy:(id)arg1 withKey:(id)arg2;
+ (void)_sendDataToDifferentialPrivacyWithKey:(id)arg1 value:(id)arg2;
+ (void)sendUserMayWantTranslationURLDataToDifferentialPrivacyIfNecessary:(id)arg1;
+ (void)sendDataToDifferentialPrivacyWithContextResponse:(id)arg1;
+ (id)_currentLanguage;

@end

