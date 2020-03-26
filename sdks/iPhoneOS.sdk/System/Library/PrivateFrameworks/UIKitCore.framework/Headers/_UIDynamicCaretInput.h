//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

@class NSTimer, TIHandwritingStrokes, UIDelayedAction, _UIDynamicCaretDot;

__attribute__((visibility("hidden")))
@interface _UIDynamicCaretInput : UIView
{
    CGContext _bitmapContext;
    long long _fadeCount;
    CGPoint _lastViewLoc;
    CGRect _inkedAreaOfBitmapContext;
    NSTimer *_fadeTimer;
    TIHandwritingStrokes *_accumulatedStrokes;
    UIDelayedAction *_committedAction;
    _UIDynamicCaretDot *_dotView;
}

@property(retain, nonatomic) _UIDynamicCaretDot *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) UIDelayedAction *committedAction; // @synthesize committedAction=_committedAction;
@property(retain, nonatomic) TIHandwritingStrokes *accumulatedStrokes; // @synthesize accumulatedStrokes=_accumulatedStrokes;
@property(retain, nonatomic) NSTimer *fadeTimer; // @synthesize fadeTimer=_fadeTimer;
// - (void).cxx_destruct;
- (void)cancelTouchAtPoint:(CGPoint)arg1;
- (void)endTouchAtPoint:(CGPoint)arg1;
- (void)addTouchAtPoint:(CGPoint)arg1;
- (void)startTouchAtPoint:(CGPoint)arg1;
- (void)addInkPoint:(CGPoint)arg1 fromLastPoint:(BOOL)arg2;
- (void)send;
- (void)clearAndNotify:(BOOL)arg1;
- (void)committedStrokes;
- (void)log;
- (void)drawPoint:(CGPoint)arg1;
- (void)drawRect:(CGRect)arg1;
- (void)_fadeInk;
- (void)clearFadeTimer;
- (void)setNeedsDisplayInRect:(CGRect)arg1;
- (double)inkWidth;
@property(readonly, nonatomic) BOOL isInking;
@property(readonly, nonatomic) BOOL hasInk;
- (void)setFrame:(CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

