//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUtilitySmallRingComplicationView.h>

@class CLKProgressProvider, UIView;
@protocol NTKComplicationImageView;

@interface NTKUtilitySmallRingImageComplicationView : NTKUtilitySmallRingComplicationView
{
    UIView<NTKComplicationImageView> *_imageView;
    CLKProgressProvider *_progressProvider;
    NSNumber _progressUpdateToken;
}

+ (BOOL)handlesComplicationTemplate:(id)arg1;
// - (void).cxx_destruct;
- (id)ringColor;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_enumerateColoringViewsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)updateRingWithProgressProvider:(id)arg1;
- (void)_updateForTemplateChange;
- (void)_updateWithImageProvider:(id)arg1;
- (void)layoutSubviews;

@end

