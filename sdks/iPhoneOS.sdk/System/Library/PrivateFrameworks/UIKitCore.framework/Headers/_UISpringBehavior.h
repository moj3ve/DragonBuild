//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIDynamicBehavior.h"

@class UIAttachmentBehavior;

__attribute__((visibility("hidden")))
@interface _UISpringBehavior : UIDynamicBehavior
{
    UIAttachmentBehavior *_topLeft;
    UIAttachmentBehavior *_topRight;
    UIAttachmentBehavior *_bottomRight;
    UIAttachmentBehavior *_bottomLeft;
    double _damping;
    double _frequency;
    CGPoint _anchorPoint;
}

@property(nonatomic) double frequency; // @synthesize frequency=_frequency;
@property(nonatomic) double damping; // @synthesize damping=_damping;
@property(nonatomic) CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
// - (void).cxx_destruct;
- (id)init;
- (id)initWithItem:(id)arg1 anchorPoint:(CGPoint)arg2;

@end

