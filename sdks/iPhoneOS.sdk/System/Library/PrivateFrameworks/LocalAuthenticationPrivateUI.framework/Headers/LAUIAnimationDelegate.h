//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface LAUIAnimationDelegate : NSObject <CAAnimationDelegate>
{
    id /* CDUnknownBlockType */ _didStartHandler;
    id /* CDUnknownBlockType */ _didStopHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ didStopHandler; // @synthesize didStopHandler=_didStopHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ didStartHandler; // @synthesize didStartHandler=_didStartHandler;
// - (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animationDidStart:(id)arg1;
- (void)dealloc;

@end

