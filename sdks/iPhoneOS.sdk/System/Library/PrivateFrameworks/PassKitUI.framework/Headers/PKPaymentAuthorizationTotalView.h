//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, PKPaymentAuthorizationLayout, UIActivityIndicatorView, UILabel;

@interface PKPaymentAuthorizationTotalView : UIView
{
    UILabel *_labelView;
    UILabel *_valueView;
    UIActivityIndicatorView *_processingIndicator;
    UIView *_separatorView;
    NSLayoutConstraint *_leftMarginConstraint;
    NSLayoutConstraint *_rightMarginConstraint;
    NSLayoutConstraint *_labelBaselineConstraint;
    NSLayoutConstraint *_valueBaselineConstraint;
    NSLayoutConstraint *_labelValueRelationConstraint;
    NSLayoutConstraint *_valueBaselineLargeTextConstraint;
    NSLayoutConstraint *_labelValueRelationLargeTextConstraint;
    NSLayoutConstraint *_rightMarginLargeTextConstraint;
    BOOL _isPendingTotal;
    BOOL _processing;
    BOOL _showsBoldValueText;
    PKPaymentAuthorizationLayout *_layout;
    long long _style;
    long long _labelNumberOfLines;
}

@property(nonatomic) BOOL showsBoldValueText; // @synthesize showsBoldValueText=_showsBoldValueText;
@property(nonatomic) long long labelNumberOfLines; // @synthesize labelNumberOfLines=_labelNumberOfLines;
@property(nonatomic, getter=isProcessing) BOOL processing; // @synthesize processing=_processing;
@property(nonatomic) BOOL isPendingTotal; // @synthesize isPendingTotal=_isPendingTotal;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) PKPaymentAuthorizationLayout *layout; // @synthesize layout=_layout;
// - (void).cxx_destruct;
- (id)_valueAttributedStringWithString:(id)arg1;
- (id)_labelAttributedStringWithString:(id)arg1;
- (void)_prepareConstraints;
- (double)_initialLeading;
- (void)updateConstraints;
- (BOOL)_hasAccessibilityLargeText;
- (void)_createSubviews;
- (void)setLabel:(id)arg1 value:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(CGRect)arg1 style:(long long)arg2;

@end

