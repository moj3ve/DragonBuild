//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosPlayer/ISChangeObserver-Protocol.h>

@class ISAnimatedImage, ISAnimatedImageTimer, NSHashTable;

@interface ISAnimatedImagePlayer : NSObject <ISChangeObserver>
{
    NSHashTable *_weakDestinations;
    ISAnimatedImage *_image;
    ISAnimatedImageTimer *_timer;
    CGImage _currentImage;
    BOOL _hasStartedAnimating;
    BOOL _hasFinishedAnimating;
    double _timeAccumulator;
    double _previousFrameTime;
    BOOL _infiniteLoop;
    NSUInteger _remainingLoopCount;
    BOOL _playing;
    BOOL _allowFrameDrops;
    NSUInteger _displayedFrameIndex;
}

@property(nonatomic) BOOL allowFrameDrops; // @synthesize allowFrameDrops=_allowFrameDrops;
@property(nonatomic) NSUInteger displayedFrameIndex; // @synthesize displayedFrameIndex=_displayedFrameIndex;
@property(nonatomic, getter=isPlaying) BOOL playing; // @synthesize playing=_playing;
// - (void).cxx_destruct;
- (void)animationTimerFired:(double)arg1;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)updateAnimation;
- (void)_resetAnimationState;
- (BOOL)_shouldAnimate;
- (void)_setCurrentFrame:(CGImage )arg1;
- (CGImage )currentImage;
- (void)_seekToBeginning;
- (BOOL)_anyDestinationIsReady;
- (void)_notifyDestinationsOfAnimationEnd;
- (void)_notifyDestinationsOfAnimationStart;
- (void)_notifyDestinationsOfFrameChange;
- (void)unregisterDestination:(id)arg1;
- (void)registerDestination:(id)arg1;
@property(readonly, nonatomic) ISAnimatedImage *animatedImage;
- (void)dealloc;
- (id)initWithAnimatedImage:(id)arg1;

@end

