//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>


@class NSString;

@interface SBPasscodeAlertItem : SBAlertItem <UITextFieldDelegate>
{
    int _mode;
    int _unlockScreenType;
    int _simplePasscodeType;
    NSString *_errorString;
    BOOL _hasEmergencyCall;
    BOOL _alreadySubmittedPassword;
}

// - (void).cxx_destruct;
- (void)didEndCall;
- (void)_setErrorString:(id)arg1;
- (BOOL)shouldShowInLockScreen;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)configureTextField:(id)arg1;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)_clearAlertController;
- (void)makeEmergencyCall;
- (void)submitPassword;
- (void)dealloc;
- (id)initWithPasscodeMode:(int)arg1 unlockScreenType:(int)arg2 simplePasscodeType:(int)arg3;

@end

