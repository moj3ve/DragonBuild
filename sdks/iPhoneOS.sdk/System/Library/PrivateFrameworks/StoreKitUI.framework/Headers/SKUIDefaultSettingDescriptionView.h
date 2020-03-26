//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUISettingDescriptionView.h>

@class SKUIViewReuseView, UIView;

__attribute__((visibility("hidden")))
@interface SKUIDefaultSettingDescriptionView : SKUISettingDescriptionView
{
    BOOL _hasDisclosureChevron;
    UIEdgeInsets _padding;
    UIView *_viewElementView;
    SKUIViewReuseView *_viewReuseView;
}

+ (UIEdgeInsets)_paddingForStyle:(id)arg1;
+ (CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;
// - (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
- (BOOL)hasDisclosureChevron;

@end

