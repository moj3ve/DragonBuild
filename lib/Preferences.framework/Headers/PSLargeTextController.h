//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class PSLargeTextSliderListController;

@interface PSLargeTextController : PSListController
{
    PSLargeTextSliderListController *_sliderListController;
    PSLargeTextSliderListController *_extendedRangeSliderListController;
    BOOL _usesExtendedRange;
    BOOL _showsExtendedRangeSwitch;
}

@property(nonatomic) BOOL showsExtendedRangeSwitch; // @synthesize showsExtendedRangeSwitch=_showsExtendedRangeSwitch;
// - (void).cxx_destruct;
- (id)usesExtendedRangeForSpecifier:(id)arg1;
- (void)setUsesExtendedRange:(id)arg1 forSpecifier:(id)arg2;
- (void)sizeCategoryDidChange:(id)arg1;
- (id)specifiers;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end

