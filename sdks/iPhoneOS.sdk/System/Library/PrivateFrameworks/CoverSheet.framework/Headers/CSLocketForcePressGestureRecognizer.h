//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILongPressGestureRecognizer.h>


@class UIInteractionProgress;

@interface CSLocketForcePressGestureRecognizer : UILongPressGestureRecognizer <UIInteractionProgressObserver>
{
    UIInteractionProgress *_interactionProgress;
    BOOL _forceTouchCompleted;
}

@property(nonatomic) BOOL forceTouchCompleted; // @synthesize forceTouchCompleted=_forceTouchCompleted;
// - (void).cxx_destruct;
- (void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2;
@property(readonly, nonatomic) double percentComplete;
- (void)setView:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

