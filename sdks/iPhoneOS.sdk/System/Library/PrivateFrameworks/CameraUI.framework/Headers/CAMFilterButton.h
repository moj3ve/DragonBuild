//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <CameraUI/CAMAccessibilityHUDImageProvider-Protocol.h>

@interface CAMFilterButton : UIButton <CAMAccessibilityHUDImageProvider>
{
    long long _layoutStyle;
    long long _orientation;
    UIEdgeInsets _tappableEdgeInsets;
}

+ (id)filterButtonWithLayoutStyle:(long long)arg1;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (id)imageForAccessibilityHUD;
- (void)setOrientation:(long long)arg1 animated:(BOOL)arg2;
- (id)_filterOnImage;
- (id)_filterImage;
@property(nonatomic, getter=isOn) BOOL on;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (UIEdgeInsets)alignmentRectInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)_commonCAMFilterButtonInitializationWithStyle:(long long)arg1;

@end

