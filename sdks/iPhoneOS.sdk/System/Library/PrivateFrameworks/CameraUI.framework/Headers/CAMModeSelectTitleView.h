//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel;

@interface CAMModeSelectTitleView : UIView
{
    UIColor *_textColor;
    UILabel *__titleLabel;
}

@property(readonly, nonatomic) UILabel *_titleLabel; // @synthesize _titleLabel=__titleLabel;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
// - (void).cxx_destruct;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *text;
- (id)initWithFrame:(CGRect)arg1;

@end

