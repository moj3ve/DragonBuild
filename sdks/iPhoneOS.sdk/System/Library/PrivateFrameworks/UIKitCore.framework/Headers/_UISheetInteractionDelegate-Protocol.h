//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class _UISheetInteraction;

@protocol _UISheetInteractionDelegate <NSObject>

@optional
- (BOOL)sheetInteraction:(_UISheetInteraction *)arg1 shouldBeginHorizontalRubberBandingAtPoint:(CGPoint)arg2;
- (CGPoint)offsetForInterruptedAnimationInSheetInteraction:(_UISheetInteraction *)arg1;
- (void)sheetInteraction:(_UISheetInteraction *)arg1 didChangeOffset:(CGPoint)arg2;
@end

