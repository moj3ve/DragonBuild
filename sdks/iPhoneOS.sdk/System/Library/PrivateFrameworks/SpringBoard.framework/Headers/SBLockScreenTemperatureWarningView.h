//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBLockOverlayView.h>

@class UIImageView;

@interface SBLockScreenTemperatureWarningView : SBLockOverlayView
{
    UIImageView *_warningIconView;
}

// - (void).cxx_destruct;
- (void)layoutSubviews;
- (double)_iconYPosition;
- (double)_subtitleBaseline;
- (double)_titleBaseline;
- (id)_subtitleFont;
- (id)_titleFont;
- (id)initWithFrame:(CGRect)arg1;

@end

