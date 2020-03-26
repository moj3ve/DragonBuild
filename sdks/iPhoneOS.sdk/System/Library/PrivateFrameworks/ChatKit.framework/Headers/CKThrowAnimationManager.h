//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKSendAnimationManager-Protocol.h>

@class CKChatControllerDummyAnimator, CKSendAnimationContext, CKSendAnimationWindow, CKTranscriptTypingIndicatorCell;
@protocol CKSendAnimationBalloonProvider, CKSendAnimationManagerDelegate, CKThrowAnimationManagerDelegate;

@interface CKThrowAnimationManager : NSObject <CKSendAnimationManager>
{
    id <CKSendAnimationManagerDelegate> _sendAnimationManagerDelegate;
    id <CKSendAnimationBalloonProvider> _sendAnimationBalloonProvider;
    id <CKThrowAnimationManagerDelegate> _throwManagerDelegate;
    CKSendAnimationContext *_currentContext;
    CKSendAnimationWindow *_sendAnimationWindow;
    CKChatControllerDummyAnimator *_animator;
    CKTranscriptTypingIndicatorCell *_fakeTypingIndicatorCell;
}

@property(retain, nonatomic) CKTranscriptTypingIndicatorCell *fakeTypingIndicatorCell; // @synthesize fakeTypingIndicatorCell=_fakeTypingIndicatorCell;
@property(retain, nonatomic) CKChatControllerDummyAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) CKSendAnimationWindow *sendAnimationWindow; // @synthesize sendAnimationWindow=_sendAnimationWindow;
@property(retain, nonatomic) CKSendAnimationContext *currentContext; // @synthesize currentContext=_currentContext;
@property(nonatomic) __weak id <CKThrowAnimationManagerDelegate> throwManagerDelegate; // @synthesize throwManagerDelegate=_throwManagerDelegate;
@property(nonatomic) __weak id <CKSendAnimationBalloonProvider> sendAnimationBalloonProvider; // @synthesize sendAnimationBalloonProvider=_sendAnimationBalloonProvider;
@property(nonatomic) __weak id <CKSendAnimationManagerDelegate> sendAnimationManagerDelegate; // @synthesize sendAnimationManagerDelegate=_sendAnimationManagerDelegate;
// - (void).cxx_destruct;
- (CGPoint)bestVisibleOffsetForBubbleAtIndex:(long long)arg1;
- (void)_setupThrowBalloonViews;
- (double)_changeInEntryViewHeight;
- (BOOL)_transcriptWillShiftDueToThrowAnimation;
- (void)_shiftFakeTypingIndicator;
- (void)_hideAddedChatItems;
- (void)_removeFakeTypingIndicatorIfNecessary;
- (void)_setupFakeTypingIndicatorIfNecessary;
- (void)_removeAllAnimations;
- (void)_setupThrowFrames;
- (void)_sendMessageAndPinTranscript;
- (void)_snapshotLiveBubbleIfNecessary;
- (id)_entryView;
- (id)_collectionViewController;
- (void)animateMessages:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (void)animationDidFinishWithContext:(id)arg1;
- (id)init;

@end

