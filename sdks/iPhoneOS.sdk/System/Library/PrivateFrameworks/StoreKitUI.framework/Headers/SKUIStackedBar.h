//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, _UIBackdropView;
@protocol SKUIStackedBarDelegate;

@interface SKUIStackedBar : UIView
{
    id <SKUIStackedBarDelegate> _delegate;
    _UIBackdropView *_backdropView;
    NSArray *_items;
    NSArray *_cells;
    BOOL _lastItemExpanded;
    BOOL _hidesStatusBar;
    BOOL _splitViewStyle;
    BOOL _alwaysShowsBackButton;
    BOOL _zeroHeightWhenFirstChildExpanded;
    double _offset;
    UIView *_wrapperView;
    UIView *_maskView;
    double _newOffset;
}

@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) BOOL zeroHeightWhenFirstChildExpanded; // @synthesize zeroHeightWhenFirstChildExpanded=_zeroHeightWhenFirstChildExpanded;
@property(nonatomic) BOOL splitViewStyle; // @synthesize splitViewStyle=_splitViewStyle;
@property(nonatomic) BOOL hidesStatusBar; // @synthesize hidesStatusBar=_hidesStatusBar;
@property(nonatomic) BOOL lastItemExpanded; // @synthesize lastItemExpanded=_lastItemExpanded;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) BOOL alwaysShowsBackButton; // @synthesize alwaysShowsBackButton=_alwaysShowsBackButton;
@property __weak id <SKUIStackedBarDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_selectItemAtIndex:(long long)arg1;
- (void)_reload;
- (void)_resetNewOffset;
- (void)_backAction:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)animateToFullSizeIfNecessary;
- (void)sizeToFit;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)setLastItemExpanded:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end

