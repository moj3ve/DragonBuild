//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MediaControls/MTVisualStylingProviderObservingPrivate-Protocol.h>

@class CCUICAPackageView, MTVisualStylingProvider, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface MediaControlsRouteView : UIView <MTVisualStylingProviderObservingPrivate>
{
    BOOL _labelHidden;
    NSString *_title;
    NSString *_packageName;
    MTVisualStylingProvider *_visualStylingProvider;
    UILabel *_titleLabel;
    CCUICAPackageView *_packageView;
}

@property(retain, nonatomic) CCUICAPackageView *packageView; // @synthesize packageView=_packageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic, getter=isLabelHidden) BOOL labelHidden; // @synthesize labelHidden=_labelHidden;
@property(retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // @synthesize visualStylingProvider=_visualStylingProvider;
@property(retain, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (void)_updateLabelVisualStyling;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (void)setGlyphState:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

