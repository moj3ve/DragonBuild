//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

#import <UIKitCore/_UIStatusBarDisplayable-Protocol.h>

@class NSArray, UIStackView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarMultilineStringView : UIView <_UIStatusBarDisplayable>
{
    long long _numberOfLines;
    UIStackView *_stackView;
}

@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
// - (void).cxx_destruct;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)applyStyleAttributes:(id)arg1;
@property(readonly, nonatomic) NSArray *stringViews;
- (id)initWithFrame:(CGRect)arg1;

@end

