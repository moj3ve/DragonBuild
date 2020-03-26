//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>


@class NSAttributedString, UIButton, UILabel, UITextView, UIView;

@interface HKOrganDonationCallToActionTableViewCell : UITableViewCell <UITextViewDelegate>
{
    UILabel *_titleLabel;
    UITextView *_callToActionTextView;
    UIButton *_actionButton;
    UIView *_spacerView;
}

+ (id)defaultReuseIdentifier;
@property(retain, nonatomic) UIView *spacerView; // @synthesize spacerView=_spacerView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UITextView *callToActionTextView; // @synthesize callToActionTextView=_callToActionTextView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
// - (void).cxx_destruct;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(_NSRange)arg3 interaction:(long long)arg4;
@property(readonly, nonatomic) NSAttributedString *callToActionTextViewString;
- (void)setupConstraints;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

