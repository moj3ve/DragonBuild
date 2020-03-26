//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NewsUI/NUCrossFadeViewAnimatable-Protocol.h>

@class NUTextAndGlyph, UIImageView, UILabel;

@interface NUTextAndGlyphView : UIView <NUCrossFadeViewAnimatable>
{
    NUTextAndGlyph *_textAndGlyph;
    UILabel *_label;
    UIImageView *_imageView;
}

@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NUTextAndGlyph *textAndGlyph; // @synthesize textAndGlyph=_textAndGlyph;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;
- (void)nu_crossFadeViewSetValue:(id)arg1;
- (void)nu_crossFadeViewClearVisibleState;

@end

