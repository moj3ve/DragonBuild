//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKInvisibleInkEffectViewDelegate-Protocol.h>

@class CKInvisibleInkEffectView, NSTimer, UIView;
@protocol CKInvisibleInkEffectHostView;

@interface CKInvisibleInkEffectController : NSObject <CKInvisibleInkEffectViewDelegate>
{
    BOOL _enabled;
    BOOL _paused;
    BOOL _suspended;
    BOOL _effectViewNeedsReset;
    CKInvisibleInkEffectView *_effectView;
    UIView<CKInvisibleInkEffectHostView> *_hostView;
    NSTimer *_resumeTimer;
    UIView *_borrowedEffectViewSnapshot;
}

@property(retain, nonatomic) UIView *borrowedEffectViewSnapshot; // @synthesize borrowedEffectViewSnapshot=_borrowedEffectViewSnapshot;
@property(retain, nonatomic) NSTimer *resumeTimer; // @synthesize resumeTimer=_resumeTimer;
@property(nonatomic) BOOL effectViewNeedsReset; // @synthesize effectViewNeedsReset=_effectViewNeedsReset;
@property(nonatomic) __weak UIView<CKInvisibleInkEffectHostView> *hostView; // @synthesize hostView=_hostView;
@property(retain, nonatomic) CKInvisibleInkEffectView *effectView; // @synthesize effectView=_effectView;
@property(nonatomic, getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;
@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
// - (void).cxx_destruct;
- (void)invisibleInkEffectViewWasUncovered:(id)arg1;
- (void)returnBorrowedEffectView;
- (void)updateBorrowedEffectViewSnapshot;
- (id)borrowEffectView;
- (void)_updateBorrowedEffectViewSnapshot;
- (void)hostViewDidUpdateSnapshot:(id)arg1;
- (void)hostViewDidLayoutSubviews;
- (void)prepareForDisplay;
- (void)suspendForTimeInterval:(double)arg1;
- (void)resumeTimerFired:(id)arg1;
- (void)dealloc;
- (id)initWithHostView:(id)arg1;

@end

