//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, TIInputMode, TILanguageModelAdaptationContext;
@protocol TILanguageLikelihoodModeling, TILanguageSelectionControllerDelegate, TIMultilingualPreferenceProviding;

@interface TILanguageSelectionController : NSObject
{
    id <TILanguageLikelihoodModeling> _languageLikelihoodModel;
    vector_5bda1073 m_buffered_tokens;
    id <TILanguageSelectionControllerDelegate> _delegate;
    TILanguageModelAdaptationContext *_adaptationContext;
    NSArray *_activeInputModes;
    id <TIMultilingualPreferenceProviding> _preferenceProvider;
    TIInputMode *_primaryInputMode;
    TIInputMode *_preferredSecondaryInputMode;
    TIInputMode *_inferredSecondaryInputMode;
    NSArray *_userEnabledInputModes;
    NSMutableDictionary *_inputModeProbabilities;
    NSDictionary *_referenceInputModeProbabilities;
    NSMutableArray *_bufferedTokenStrings;
}

+ (void)reportTypedTokens:(const vector_5bda1073 )arg1 activeInputModes:(id)arg2;
+ (id)inputModesForLanguageIdentifiers:(id)arg1;
+ (id)inputModeForLanguageIdentifier:(id)arg1;
+ (id)inferInputModeForLanguage:(id)arg1 enabled:(id)arg2;
+ (id)inferSecondaryInputModeForPrimary:(id)arg1 enabled:(id)arg2 enabledExcludingPreferredLanguages:(id)arg3;
+ (id)inferSecondaryInputModeForPrimary:(id)arg1 enabled:(id)arg2;
+ (id)multilingualInputModesForInputModes:(id)arg1;
+ (id)sharedLanguageLikelihoodModel;
@property(readonly, nonatomic) NSMutableArray *bufferedTokenStrings; // @synthesize bufferedTokenStrings=_bufferedTokenStrings;
@property(copy, nonatomic) NSDictionary *referenceInputModeProbabilities; // @synthesize referenceInputModeProbabilities=_referenceInputModeProbabilities;
@property(readonly, nonatomic) NSMutableDictionary *inputModeProbabilities; // @synthesize inputModeProbabilities=_inputModeProbabilities;
@property(retain, nonatomic) NSArray *userEnabledInputModes; // @synthesize userEnabledInputModes=_userEnabledInputModes;
@property(retain, nonatomic) TIInputMode *inferredSecondaryInputMode; // @synthesize inferredSecondaryInputMode=_inferredSecondaryInputMode;
@property(retain, nonatomic) TIInputMode *preferredSecondaryInputMode; // @synthesize preferredSecondaryInputMode=_preferredSecondaryInputMode;
@property(retain, nonatomic) TIInputMode *primaryInputMode; // @synthesize primaryInputMode=_primaryInputMode;
@property(readonly, nonatomic) id <TIMultilingualPreferenceProviding> preferenceProvider; // @synthesize preferenceProvider=_preferenceProvider;
@property(readonly, nonatomic) id <TILanguageLikelihoodModeling> languageLikelihoodModel; // @synthesize languageLikelihoodModel=_languageLikelihoodModel;
@property(retain, nonatomic) NSArray *activeInputModes; // @synthesize activeInputModes=_activeInputModes;
@property(retain, nonatomic) TILanguageModelAdaptationContext *adaptationContext; // @synthesize adaptationContext=_adaptationContext;
@property(nonatomic) id <TILanguageSelectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)flushBuffer;
- (double)lastOfflineAdaptationTimeForApp:(id)arg1;
- (void)removeTokenString:(id)arg1 tokenID:(struct TITokenID)arg2 context:(const struct TITokenID )arg3 contextLength:(NSUInteger)arg4;
- (void)addTokenString:(id)arg1 tokenID:(struct TITokenID)arg2 context:(const struct TITokenID )arg3 contextLength:(NSUInteger)arg4;
- (BOOL)bufferIsCompatibleWithContext:(const struct TITokenID )arg1 contextLength:(NSUInteger)arg2;
- (float)priorProbabilityForInputMode:(id)arg1;
- (void)feedBufferedTokenStringsToModel;
- (BOOL)updateInputModeProbabilities;
- (BOOL)didProbabilityChangeSignificantly;
- (void)updateActiveInputModesSuppressingNotification:(BOOL)arg1;
- (void)appleKeyboardsInternalSettingsChanged:(id)arg1;
- (void)appleKeyboardsPreferencesChanged:(id)arg1;
- (id)fetchPreferredSecondaryInputMode;
- (id)fetchUserEnabledInputModesExcludingPreferredLanguages;
- (id)fetchUserEnabledInputModes;
- (void)dealloc;
- (id)initWithLanguageLikelihoodModel:(id)arg1 preferenceProvider:(id)arg2;
- (id)init;

@end

