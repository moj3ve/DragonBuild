//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSAttributedString, PXBadgedThumbnailView, PXInboxTableViewCellLayoutCoordinator, PXRoundedCornerOverlayView, UIImageView, UILabel;
@protocol PXInboxModel;

@interface PXInboxTableViewCell : UITableViewCell
{
    BOOL _unseen;
    id <PXInboxModel> _model;
    NSAttributedString *_title;
    PXInboxTableViewCellLayoutCoordinator *_layoutCoordinator;
    UIImageView *_placeholderImageView;
    PXRoundedCornerOverlayView *_cornerOverlayView;
    PXBadgedThumbnailView *_thumbnailView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

+ (void)preloadResources;
+ (id)thumbnailBadgeImageForTintColor:(id)arg1;
+ (id)unseenHighlightColor;
+ (id)placeholderEmptyImage;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) PXBadgedThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) PXRoundedCornerOverlayView *cornerOverlayView; // @synthesize cornerOverlayView=_cornerOverlayView;
@property(retain, nonatomic) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
@property(retain, nonatomic) PXInboxTableViewCellLayoutCoordinator *layoutCoordinator; // @synthesize layoutCoordinator=_layoutCoordinator;
@property(nonatomic, getter=isUnseen) BOOL unseen; // @synthesize unseen=_unseen;
@property(retain, nonatomic) NSAttributedString *title; // @synthesize title=_title;
@property(copy, nonatomic) id <PXInboxModel> model; // @synthesize model=_model;
// - (void).cxx_destruct;
- (void)_updateTitleLabel;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)setFrame:(CGRect)arg1;
@property(retain, nonatomic) NSAttributedString *subtitle;
- (void)_updateTitle;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

