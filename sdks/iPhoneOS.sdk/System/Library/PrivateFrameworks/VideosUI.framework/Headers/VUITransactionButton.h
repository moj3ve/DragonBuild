//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIButton.h>

@class NSString, VUICircularProgress;

__attribute__((visibility("hidden")))
@interface VUITransactionButton : VUIButton
{
    BOOL _waitingForTransactionToStart;
    BOOL _monitorTransaction;
    VUICircularProgress *_progressIndicator;
    NSString *_textContentTitleBackup;
}

@property(copy, nonatomic) NSString *textContentTitleBackup; // @synthesize textContentTitleBackup=_textContentTitleBackup;
@property(retain, nonatomic) VUICircularProgress *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(nonatomic) BOOL monitorTransaction; // @synthesize monitorTransaction=_monitorTransaction;
@property(nonatomic, getter=isWaitingForTransactionToStart) BOOL waitingForTransactionToStart; // @synthesize waitingForTransactionToStart=_waitingForTransactionToStart;
// - (void).cxx_destruct;
- (void)_handleTransactionDidFinishNotification:(id)arg1;
- (void)_handleTransactionDidStartNotification:(id)arg1;
- (void)_unregisterTransactionNotifications;
- (void)_registerForTransactionNotification;
- (void)_addProgressIndicatorWithFrame:(CGRect)arg1;
- (id)_transactionBuyParams;
- (void)_updateProgressIndicatorTintColor:(id)arg1;
- (void)_buttonTapped:(id)arg1 eventName:(id)arg2;
- (void)_layoutProgressIndicatorIfNeeded;
- (id)_carouselView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)updateWithElement:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 interfaceStyle:(long long)arg2;

@end

