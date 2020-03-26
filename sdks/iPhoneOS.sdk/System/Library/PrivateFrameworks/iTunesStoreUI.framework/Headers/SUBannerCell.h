//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUTableCell.h>

#import <iTunesStoreUI/SUCellConfigurationView-Protocol.h>

@class UIButton;

@interface SUBannerCell : SUTableCell <SUCellConfigurationView>
{
    UIButton *_leftButton;
    UIButton *_rightButton;
}

- (void)_reloadButtons;
- (id)_newButton;
- (void)_buttonAction:(id)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setConfiguration:(id)arg1;
- (void)layoutSubviews;
- (void)reloadView;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

