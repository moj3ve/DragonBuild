//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class IKViewElement, VUISeasonPickerButton;

__attribute__((visibility("hidden")))
@interface VUIEpisodeShelfHeaderView : UICollectionReusableView
{
    VUISeasonPickerButton *_button;
    IKViewElement *_viewElement;
}

+ (id)configureWithElement:(id)arg1 existingView:(id)arg2;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(readonly, nonatomic) VUISeasonPickerButton *button; // @synthesize button=_button;
// - (void).cxx_destruct;
- (CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2;
- (void)switchToIndex:(NSUInteger)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;

@end

