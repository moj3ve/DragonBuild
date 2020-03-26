//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKBubbleControl.h>

@class NSArray;

@interface GKBaseBubbleWithTextControl : GKBubbleControl
{
    double _referenceZPosition;
    NSArray *_labels;
    id _updateRasterizationScaleToken;
}

@property(retain, nonatomic) id updateRasterizationScaleToken; // @synthesize updateRasterizationScaleToken=_updateRasterizationScaleToken;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(nonatomic) double referenceZPosition; // @synthesize referenceZPosition=_referenceZPosition;
- (void)didMoveToSuperview;
- (void)updateLabelRasterizationScaleForLabels;
- (void)updateTextFieldsFor3DScaling;
- (id)_scaledTextStyle:(id)arg1;
- (void)dealloc;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)isFlipped;

@end

