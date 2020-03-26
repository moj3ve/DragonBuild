//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <GameCenterUI/RUIPageAccessory-Protocol.h>
#import <GameCenterUI/RemoteUITableFooter-Protocol.h>

@class GKButton, NSArray, NSDictionary;
@protocol GKRemoteUIAuxiliaryViewDelegate;

@interface GKRemoteUITableFooterView : UIView <RUIPageAccessory, RemoteUITableFooter>
{
    BOOL _pinToBottom;
    int _layoutStyle;
    id <GKRemoteUIAuxiliaryViewDelegate> _delegate;
    GKButton *_button;
    NSDictionary *_attributes;
    NSArray *_replaceableConstraints;
    double _buttonBaselineOffset;
}

@property(nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) double buttonBaselineOffset; // @synthesize buttonBaselineOffset=_buttonBaselineOffset;
@property(retain, nonatomic) NSArray *replaceableConstraints; // @synthesize replaceableConstraints=_replaceableConstraints;
@property(nonatomic) BOOL pinToBottom; // @synthesize pinToBottom=_pinToBottom;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) GKButton *button; // @synthesize button=_button;
// - (void).cxx_destruct;
- (void)tableViewDidUpdateContentInset:(id)arg1;
- (void)objectModelDidChange:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (void)didMoveToSuperview;
- (void)adjustSizeToFillSuperview:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (void)layoutSubviews;
@property(nonatomic) id <GKRemoteUIAuxiliaryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)createButtonWithAttributes:(id)arg1;
- (id)initWithAttributes:(id)arg1;

@end

