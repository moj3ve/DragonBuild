//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TelephonyUI/TPSimpleNumberPadDelegate-Protocol.h>

@class NSString, TPPasscodeView, TPSimpleNumberPad, UILabel, UIView;
@protocol TPSetPINViewControllerDelegate;

@interface TPSetPINViewController : UIViewController <TPSimpleNumberPadDelegate>
{
    BOOL _confirmPIN;
    int _initialState;
    int _state;
    unsigned int _minPINLength;
    unsigned int _maxPINLength;
    id <TPSetPINViewControllerDelegate> _delegate;
    NSString *_promptTextForOldPIN;
    NSString *_promptTextForNewPIN;
    NSString *_promptTextForConfirmingNewPIN;
    NSString *_promptTextForSavingPIN;
    UIView *_customBackgroundView;
    UILabel *_statusLabel;
    TPPasscodeView *_passcodeView;
    TPSimpleNumberPad *_numberPad;
    NSString *_oldPIN;
    NSString *_unconfirmedPIN;
}

@property(retain) NSString *unconfirmedPIN; // @synthesize unconfirmedPIN=_unconfirmedPIN;
@property(retain) NSString *oldPIN; // @synthesize oldPIN=_oldPIN;
@property(retain) TPSimpleNumberPad *numberPad; // @synthesize numberPad=_numberPad;
@property(retain) TPPasscodeView *passcodeView; // @synthesize passcodeView=_passcodeView;
@property(retain) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property BOOL confirmPIN; // @synthesize confirmPIN=_confirmPIN;
@property unsigned int maxPINLength; // @synthesize maxPINLength=_maxPINLength;
@property unsigned int minPINLength; // @synthesize minPINLength=_minPINLength;
@property(nonatomic) int state; // @synthesize state=_state;
@property int initialState; // @synthesize initialState=_initialState;
@property(retain) UIView *customBackgroundView; // @synthesize customBackgroundView=_customBackgroundView;
@property(retain, nonatomic) NSString *promptTextForSavingPIN; // @synthesize promptTextForSavingPIN=_promptTextForSavingPIN;
@property(retain, nonatomic) NSString *promptTextForConfirmingNewPIN; // @synthesize promptTextForConfirmingNewPIN=_promptTextForConfirmingNewPIN;
@property(retain, nonatomic) NSString *promptTextForNewPIN; // @synthesize promptTextForNewPIN=_promptTextForNewPIN;
@property(retain, nonatomic) NSString *promptTextForOldPIN; // @synthesize promptTextForOldPIN=_promptTextForOldPIN;
@property id <TPSetPINViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_updateUIForStateChange;
- (void)_updateStatusLabel;
- (void)_updateNavBarButtons;
- (void)_updateDeleteAllowed;
- (void)simpleNumberPadDeletePressed:(id)arg1;
- (void)simpleNumberPad:(id)arg1 buttonPressedWithCharacter:(id)arg2;
- (void)_cancelButtonTapped;
- (void)_doneButtonTapped;
- (void)resetWithErrorPrompt:(id)arg1 title:(id)arg2;
- (void)resetWithErrorPrompt:(id)arg1;
- (BOOL)wantsFullScreenLayout;
- (double)numberPadTopConstraintConstant;
- (void)loadView;
- (void)dealloc;
- (id)initForChangePINWithMinLength:(unsigned int)arg1 maxLength:(unsigned int)arg2 confirmPIN:(BOOL)arg3;
- (id)initForNewPINWithMinLength:(unsigned int)arg1 maxLength:(unsigned int)arg2 confirmPIN:(BOOL)arg3;
- (id)_initForMinLength:(unsigned int)arg1 maxLength:(unsigned int)arg2 confirmPIN:(BOOL)arg3;
- (id)init;

@end

