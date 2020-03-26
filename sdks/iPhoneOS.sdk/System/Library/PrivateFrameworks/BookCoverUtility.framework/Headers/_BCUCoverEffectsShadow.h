//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _BCUCoverEffectsShadow : NSObject
{
    CGImage _image;
    NSString *_blendMode;
    UIEdgeInsets _insets;
}

@property(readonly, nonatomic) NSString *blendMode; // @synthesize blendMode=_blendMode;
@property(readonly, nonatomic) CGImage image; // @synthesize image=_image;
@property(readonly, nonatomic) UIEdgeInsets insets; // @synthesize insets=_insets;
// - (void).cxx_destruct;
- (UIEdgeInsets)roundedInsetsWithSize:(CGSize)arg1;
- (CGRect)contentsCenter;
- (CGSize)size;
- (id)initWithImage:(CGImage )arg1 insets:(UIEdgeInsets)arg2;
- (id)initWithImage:(CGImage )arg1 insets:(UIEdgeInsets)arg2 blendMode:(id)arg3;

@end

