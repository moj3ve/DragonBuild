//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HUBlendedSeparatorView, HUClipScrubberPlayheadView, UIButton, UICollectionView;

@interface HUClipScrubberView : UIView
{
    BOOL _isPlayingMedia;
    HUClipScrubberPlayheadView *_playHeadView;
    UIView *_contentView;
    UIButton *_leftActionButton;
    UIButton *_rightActionButton;
    UICollectionView *_clipCollectionView;
    NSUInteger _displayMode;
    HUBlendedSeparatorView *_leftBlendedSeparator;
    HUBlendedSeparatorView *_rightBlendedSeparator;
}

@property(nonatomic) BOOL isPlayingMedia; // @synthesize isPlayingMedia=_isPlayingMedia;
@property(retain, nonatomic) HUBlendedSeparatorView *rightBlendedSeparator; // @synthesize rightBlendedSeparator=_rightBlendedSeparator;
@property(retain, nonatomic) HUBlendedSeparatorView *leftBlendedSeparator; // @synthesize leftBlendedSeparator=_leftBlendedSeparator;
@property(nonatomic) NSUInteger displayMode; // @synthesize displayMode=_displayMode;
@property(retain, nonatomic) UICollectionView *clipCollectionView; // @synthesize clipCollectionView=_clipCollectionView;
@property(retain, nonatomic) UIButton *rightActionButton; // @synthesize rightActionButton=_rightActionButton;
@property(retain, nonatomic) UIButton *leftActionButton; // @synthesize leftActionButton=_leftActionButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) HUClipScrubberPlayheadView *playHeadView; // @synthesize playHeadView=_playHeadView;
// - (void).cxx_destruct;
- (id)_deleteImage;
- (id)_pauseImage;
- (id)_playImage;
- (void)hideEditInterface;
- (void)displayEditInterface;
- (void)updateDisplayMode:(NSUInteger)arg1;
- (void)updateMode:(NSUInteger)arg1;
- (void)navigateToOffset:(double)arg1;
- (void)navigateToLivePosition;
- (void)updateTimeControlStatus:(NSUInteger)arg1 forEngineMode:(NSUInteger)arg2;
- (id)playOrPauseImageForEngineMode:(NSUInteger)arg1;
- (void)layoutSubviews;
- (void)_addConstraints;
- (id)initWithFrame:(CGRect)arg1;

@end

