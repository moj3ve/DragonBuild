//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIPreviewInteractionHighlighting-Protocol.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionSystemHighlighter : NSObject <_UIPreviewInteractionHighlighting>
{
    BOOL _blinderViewEnabled;
    UIView *_initialSnapshotView;
    UIView *_updatedSnapshotView;
    UIView *_blinderView;
}

@property(retain, nonatomic) UIView *blinderView; // @synthesize blinderView=_blinderView;
@property(nonatomic) BOOL blinderViewEnabled; // @synthesize blinderViewEnabled=_blinderViewEnabled;
@property(retain, nonatomic) UIView *updatedSnapshotView; // @synthesize updatedSnapshotView=_updatedSnapshotView;
@property(retain, nonatomic) UIView *initialSnapshotView; // @synthesize initialSnapshotView=_initialSnapshotView;
// - (void).cxx_destruct;
- (id)_newSnapshotViewForPreviewingContext:(id)arg1 afterScreenUpdates:(BOOL)arg2;
- (void)finalizeHighlightForPreviewingContext:(id)arg1;
- (id)highlightShouldBeginInContainerView:(id)arg1 presentationContainerView:(id)arg2 previewingContext:(id)arg3;
- (void)prepareHighlightWithPreviewingContext:(id)arg1;

@end

