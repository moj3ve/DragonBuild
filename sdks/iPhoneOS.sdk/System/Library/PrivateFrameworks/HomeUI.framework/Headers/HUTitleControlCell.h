//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUControlPanelCell.h>

@class NSString, UIView;
@protocol HUControlView;

@interface HUTitleControlCell : HUControlPanelCell
{
}

- (void)prepareForReuse;
@property(copy, nonatomic) NSString *controlTitle;
@property(retain, nonatomic) UIView<HUControlView> *controlView;
- (id)allControlViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

