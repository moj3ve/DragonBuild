//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppSupportUI/NUIContainerGridView.h>

@class MTUIDigitalClockLabel, NSArray, NSDictionary, NSString, UIFont, UILabel, UISwitch;

@interface MTUIAlarmView : NUIContainerGridView
{
    id _contentSizeFontAdjustObserver;
    BOOL _shouldAddLayoutConstraints;
    long long _style;
    MTUIDigitalClockLabel *_timeLabel;
    NSString *_name;
    NSString *_repeatText;
    UILabel *_detailLabel;
    UIFont *_nameFont;
    UIFont *_repeatFont;
    UISwitch *_enabledSwitch;
    NSDictionary *_viewsByIdentifier;
    NSArray *_currentConstraints;
}

@property(retain, nonatomic) NSArray *currentConstraints; // @synthesize currentConstraints=_currentConstraints;
@property(nonatomic) BOOL shouldAddLayoutConstraints; // @synthesize shouldAddLayoutConstraints=_shouldAddLayoutConstraints;
@property(readonly, nonatomic) NSDictionary *viewsByIdentifier; // @synthesize viewsByIdentifier=_viewsByIdentifier;
@property(readonly, nonatomic) UISwitch *enabledSwitch; // @synthesize enabledSwitch=_enabledSwitch;
@property(retain, nonatomic) UIFont *repeatFont; // @synthesize repeatFont=_repeatFont;
@property(retain, nonatomic) UIFont *nameFont; // @synthesize nameFont=_nameFont;
@property(readonly, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(copy, nonatomic) NSString *repeatText; // @synthesize repeatText=_repeatText;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) MTUIDigitalClockLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) long long style; // @synthesize style=_style;
// - (void).cxx_destruct;
- (void)setLayoutMargins:(UIEdgeInsets)arg1;
- (void)_loadFontsWithTextStyles;
- (void)setName:(id)arg1 andRepeatText:(id)arg2 textColor:(id)arg3;
- (void)updatePreferredMaxLayoutWidthForDetailContainerLabels;
- (void)tearDownContentSizeChangeObserver;
@property(nonatomic, getter=isSwitchVisible) BOOL switchVisible;
- (id)initWithFrame:(CGRect)arg1;

@end

