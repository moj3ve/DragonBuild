//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSLayoutConstraint, NSSet;

@protocol _UILAPropertySource <NSObject>
@property(readonly, nonatomic) NSSet *invalidBaselineConstraints;
@property(readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property(readonly, nonatomic) NSSet *_newlyHiddenItems;
@property(nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling;
@property(nonatomic) BOOL layoutFillsCanvas;
@property(nonatomic) long long axis;
- (void)_invalidateBaselineConstraint:(NSLayoutConstraint *)arg1;
@end

