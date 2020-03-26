//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHPresetImager.h>

@class TSCHChartType;

__attribute__((visibility("hidden")))
@interface TSCHPresetImagerInfoBased : TSCHPresetImager
{
    TSCHChartType *mChartType;
}

+ (id)presetImagerForChartType:(id)arg1;
// - (void).cxx_destruct;
- (double)p_canvasScale;
- (CGRect)p_updateSwatchFrameForInwardLayoutIfNeeded:(CGRect)arg1 outImageSize:(CGSize )arg2 outImageScale:(double )arg3 outSwatchOffset:(CGPoint )arg4 outCanvasScale:(double )arg5;
- (CGRect)p_updateSwatchFrameForRectAdjustmentIfNeeded:(CGRect)arg1 rectAdjustment:(id)arg2 outSwatchOffset:(CGPoint )arg3;
- (void)p_debugGenerateLayoutCacheWithPreset:(id)arg1 target:(int)arg2 imageSize:(CGSize)arg3 imageScale:(double)arg4 swatchFrame:(CGRect)arg5;
- (id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(CGSize)arg3 imageScale:(double)arg4 swatchFrame:(CGRect)arg5 documentRoot:(id)arg6 shouldCache:(BOOL )arg7;
- (UIEdgeInsets)swatchImageEdgeInsetsForSize:(CGSize)arg1;
- (id)p_rectAdjustmentForChartType:(id)arg1;
- (id)p_imageRectAdjustments;
- (id)p_chartType;
- (id)initWithChartType:(id)arg1;

@end

