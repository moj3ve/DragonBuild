//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface TPLCDBar : UIView
{
    UIImageView *_shadowView;
}

+ (id)backgroundImage;
+ (double)defaultHeightForOrientation:(long long)arg1;
+ (double)defaultHeight;
@property(readonly) UIImageView *shadowView; // @synthesize shadowView=_shadowView;
// - (void).cxx_destruct;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 updateFrame:(BOOL)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithDefaultSize;
- (id)initWithDefaultSizeForOrientation:(long long)arg1;

@end

