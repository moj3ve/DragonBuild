//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <HealthUI/HKGraphViewDelegate-Protocol.h>

@class HKLollipopController, HKScalarGraphViewController, NSArray, UIView;

@interface HKScalarGraphCollectionViewCell : UICollectionViewCell <HKGraphViewDelegate>
{
    NSArray *_graphSeries;
    HKScalarGraphViewController *_graphViewController;
    HKLollipopController *_lollipopController;
    UIView *_header;
}

+ (id)reuseIdentifier;
@property(nonatomic) __weak UIView *header; // @synthesize header=_header;
@property(nonatomic) __weak HKLollipopController *lollipopController; // @synthesize lollipopController=_lollipopController;
@property(nonatomic) __weak HKScalarGraphViewController *graphViewController; // @synthesize graphViewController=_graphViewController;
@property(retain, nonatomic) NSArray *graphSeries; // @synthesize graphSeries=_graphSeries;
// - (void).cxx_destruct;
- (void)_alignYAxesForSeries:(id)arg1;
- (void)graphViewDidTapYAxis:(id)arg1;
- (void)graphView:(id)arg1 didUpdateLegendViewsWithTopLegendFrame:(CGRect)arg2;
- (void)graphView:(id)arg1 didUpdateSeries:(id)arg2 newDataArrived:(BOOL)arg3;
- (void)graphView:(id)arg1 didUpdateYAxisWidth:(double)arg2 toWidth:(double)arg3;
- (void)graphViewSizeChanged:(id)arg1;
- (void)graphView:(id)arg1 didFinishUserScrollingToValueRange:(id)arg2;
- (void)graphView:(id)arg1 didUpdateVisibleValueRange:(id)arg2 changeContext:(long long)arg3;
- (void)graphView:(id)arg1 didUpdateFromDateZoom:(long long)arg2 toDateZoom:(long long)arg3 newVisibleRange:(id)arg4;
- (void)graphViewDidEndSelection:(id)arg1;
- (void)graphView:(id)arg1 didUpdateSelectedPoint:(id)arg2;
- (void)graphViewDidBeginSelection:(id)arg1;
- (id)seriesSelectionLineColorForGraphView:(id)arg1;
- (id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;
- (long long)stackCountForGraphView:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;

@end

