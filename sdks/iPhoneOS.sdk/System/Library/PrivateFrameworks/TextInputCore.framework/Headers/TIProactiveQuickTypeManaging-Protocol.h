//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSSet, NSString, TIKeyboardSecureCandidateRenderTraits, TIKeyboardSecureCandidateRenderer;

@protocol TIProactiveQuickTypeManaging <NSObject>
- (NSArray *)getMeCardEmailAddresses;
- (void)suggestionNotAccepted:(NSArray *)arg1;
- (void)suggestionAccepted:(NSString *)arg1 fieldType:(NSString *)arg2;
- (void)userActionWithNoNewTriggers:(NSString *)arg1 fieldType:(NSString *)arg2;
- (BOOL)isAutoCompleteEnabled;
- (BOOL)isAutoPopupEnabled;
- (BOOL)isEnabled;
- (void)reset;
- (NSArray *)generateAndRenderProactiveSuggestionsWithInput:(NSString *)arg1 withSecureCandidateRenderer:(TIKeyboardSecureCandidateRenderer *)arg2 withRenderTraits:(TIKeyboardSecureCandidateRenderTraits *)arg3 textContentType:(NSString *)arg4;
- (void)generateAndRenderProactiveSuggestionsWithInput:(NSString *)arg1 withSecureCandidateRenderer:(TIKeyboardSecureCandidateRenderer *)arg2 withRenderTraits:(TIKeyboardSecureCandidateRenderTraits *)arg3 textContentType:(NSString *)arg4 async:(BOOL)arg5 completion:(void (^)(NSArray *))arg6;
- (NSArray *)generateAndRenderProactiveSuggestionsWithTriggers:(NSArray *)arg1 withAdditionalPredictions:(NSArray *)arg2 withSecureCandidateRenderer:(TIKeyboardSecureCandidateRenderer *)arg3 withRenderTraits:(TIKeyboardSecureCandidateRenderTraits *)arg4 withInput:(NSString *)arg5 withRecipient:(NSString *)arg6 withApplication:(NSString *)arg7 withLocale:(NSString *)arg8 withTextContentType:(NSString *)arg9 withAvailableApps:(NSSet *)arg10 logBlock:(void (^)(NSString *))arg11;
- (void)generateAndRenderProactiveSuggestionsWithTriggers:(NSArray *)arg1 withAdditionalPredictions:(NSArray *)arg2 withSecureCandidateRenderer:(TIKeyboardSecureCandidateRenderer *)arg3 withRenderTraits:(TIKeyboardSecureCandidateRenderTraits *)arg4 withInput:(NSString *)arg5 withRecipient:(NSString *)arg6 withApplication:(NSString *)arg7 withLocale:(NSString *)arg8 withTextContentType:(NSString *)arg9 withAvailableApps:(NSSet *)arg10 logBlock:(void (^)(NSString *))arg11 async:(BOOL)arg12 completion:(void (^)(NSArray *))arg13;
@end

