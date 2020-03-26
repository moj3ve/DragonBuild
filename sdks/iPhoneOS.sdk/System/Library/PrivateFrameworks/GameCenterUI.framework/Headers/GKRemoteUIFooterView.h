//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <GameCenterUI/RemoteUITableFooter-Protocol.h>

@class GKLabel;

@interface GKRemoteUIFooterView : UIView <RemoteUITableFooter>
{
    BOOL _shouldApplyGameCenterTheme;
    int _layoutStyle;
    GKLabel *_textLabel;
    double _leftMargin;
    double _rightMargin;
    double _bottomMargin;
    double _paragraphMargin;
}

@property(nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) BOOL shouldApplyGameCenterTheme; // @synthesize shouldApplyGameCenterTheme=_shouldApplyGameCenterTheme;
@property(nonatomic) double paragraphMargin; // @synthesize paragraphMargin=_paragraphMargin;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(retain, nonatomic) GKLabel *textLabel; // @synthesize textLabel=_textLabel;
// - (void).cxx_destruct;
- (id)attributedStringForString:(id)arg1 withStyle:(id)arg2;
- (double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (id)initWithAttributes:(id)arg1;

@end

