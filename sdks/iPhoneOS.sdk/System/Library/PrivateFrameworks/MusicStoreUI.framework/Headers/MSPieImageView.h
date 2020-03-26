//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIBezierPath, UIImage;

@interface MSPieImageView : UIView
{
    UIImage *_backgroundImage;
    UIBezierPath *_clipPath;
    UIImage *_foregroundImage;
    double _pieFraction;
    double _pieRadius;
}

@property(nonatomic) double pieRadius; // @synthesize pieRadius=_pieRadius;
@property(nonatomic) double pieFraction; // @synthesize pieFraction=_pieFraction;
@property(retain, nonatomic) UIImage *foregroundImage; // @synthesize foregroundImage=_foregroundImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
- (void)_reloadClipPath;
- (void)sizeToFit;
- (void)setFrame:(CGRect)arg1;
- (void)drawRect:(CGRect)arg1;
- (void)dealloc;

@end

