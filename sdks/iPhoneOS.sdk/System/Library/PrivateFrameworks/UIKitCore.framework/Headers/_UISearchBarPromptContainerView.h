//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface _UISearchBarPromptContainerView : UIView
{
    long long _barMetrics;
    UILabel *_promptLabel;
    UIEdgeInsets _contentInset;
}

@property(retain, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(nonatomic) UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) long long barMetrics; // @synthesize barMetrics=_barMetrics;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (BOOL)useMini;
- (BOOL)_isKnownUISearchBarComponentContainer;

@end

