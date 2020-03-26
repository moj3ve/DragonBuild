//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString, PLPhotoTilePlaceholderView, PLTiledLayer, PLVideoView, UILabel, UIView;

@interface PLImageView : UIImageView
{
    NSString *_name;
    UIView *_borderView;
    PLVideoView *_videoView;
    PLPhotoTilePlaceholderView *_placeholderView;
    UIView *_leftAccessoryView;
    UIView *_bottomRightAccessoryView;
    CGSize _leftAccessoryViewOffset;
    UILabel *_textBadge;
    unsigned int _shadowEnabled:1;
    unsigned int _suppressShadowDrawing:1;
    unsigned int _borderViewIsVisible:1;
    unsigned int _drawsBorder:1;
    float _aspectRatio;
    double _lastBorderAlphaTime;
    double _lastShadowAlphaTime;
    double _transitionProgress;
    BOOL _edgeAntialiasingEnabled;
    PLTiledLayer *_fullSizeImageTiledLayer;
    long long _fullSizeImageOrientation;
    BOOL _showsPlaceholder;
    double _accessoryViewsAlpha;
    double _placeholderScale;
}

+ (id)textBadgeForString:(id)arg1 photoSize:(CGSize)arg2;
+ (CGSize)badgeOffset;
+ (BOOL)shouldDrawShadows;
+ (void)initialize;
@property(nonatomic) double placeholderScale; // @synthesize placeholderScale=_placeholderScale;
@property(readonly, nonatomic) BOOL showsPlaceholder; // @synthesize showsPlaceholder=_showsPlaceholder;
@property(nonatomic) double accessoryViewsAlpha; // @synthesize accessoryViewsAlpha=_accessoryViewsAlpha;
@property(retain, nonatomic) UIView *bottomRightAccessoryView; // @synthesize bottomRightAccessoryView=_bottomRightAccessoryView;
@property(nonatomic) CGSize leftAccessoryViewOffset; // @synthesize leftAccessoryViewOffset=_leftAccessoryViewOffset;
@property(retain, nonatomic) UIView *leftAccessoryView; // @synthesize leftAccessoryView=_leftAccessoryView;
@property(nonatomic) double transitionProgress; // @synthesize transitionProgress=_transitionProgress;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) PLVideoView *videoView;
- (void)setBottomRightAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (void)setTextBadgeString:(id)arg1;
- (id)textBadgeString;
- (void)_updatePlaceholderAlpha;
- (void)_updatePlaceholderLayout;
@property(readonly, nonatomic) CGSize placeholderSize;
- (void)setEdgeAntialiasingEnabled:(BOOL)arg1;
@property(nonatomic, getter=isDimmed) BOOL dimmed;
@property(nonatomic) BOOL drawsBorder;
@property(nonatomic) float borderAndAccessoriesAlpha;
- (void)setBorderAndAccessoriesAlpha:(float)arg1 forced:(BOOL)arg2;
- (void)parentDidLayout;
@property(nonatomic, getter=isBorderAndAccessoriesVisible) BOOL borderAndAccessoriesVisible;
@property(nonatomic, getter=isShadowEnabled) BOOL shadowEnabled;
- (void)_setShadowEnabled:(BOOL)arg1 force:(BOOL)arg2;
- (void)setImage:(id)arg1;
- (CGAffineTransform)_transformForFullSizeImageTiledLayer;
- (void)updateFullSizeImageVisibleArea;
- (void)setFullSizeImageJPEGData:(id)arg1 size:(CGSize)arg2 orientation:(long long)arg3;
- (void)_updateShadowPath;
- (void)layoutSubviews;
- (CGRect)_bottomRightAccessoryViewFrame;
- (CGRect)_leftAccessoryViewFrame;
- (void)renderSnapshotInContext:(CGContext )arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1 allowRounding:(BOOL)arg2;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

