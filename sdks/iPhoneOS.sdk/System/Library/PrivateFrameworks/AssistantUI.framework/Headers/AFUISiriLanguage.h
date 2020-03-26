//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol AFUISiriLanguageDelegate;

@interface AFUISiriLanguage : NSObject
{
    BOOL _setupAssistantHasCompletedInitialRunChecked;
    BOOL _setupAssistantHasCompletedInitialRunAvailable;
    NSString *_spokenLanguageCode;
    id <AFUISiriLanguageDelegate> _delegate;
}

@property(nonatomic, getter=_setupAssistantHasCompletedInitialRunAvailable) BOOL setupAssistantHasCompletedInitialRunAvailable; // @synthesize setupAssistantHasCompletedInitialRunAvailable=_setupAssistantHasCompletedInitialRunAvailable;
@property(nonatomic) BOOL setupAssistantHasCompletedInitialRunChecked; // @synthesize setupAssistantHasCompletedInitialRunChecked=_setupAssistantHasCompletedInitialRunChecked;
@property(readonly, nonatomic, getter=_delegate) __weak id <AFUISiriLanguageDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic, setter=_setSpokenLanguageCode:) NSString *spokenLanguageCode; // @synthesize spokenLanguageCode=_spokenLanguageCode;
// - (void).cxx_destruct;
- (id)_computeSpokenLanguageCode;
- (void)_updateSpokenLanguageCode;
- (void)_spokenLanguageDidChange:(id)arg1;
- (void)_currentLocaleDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end

