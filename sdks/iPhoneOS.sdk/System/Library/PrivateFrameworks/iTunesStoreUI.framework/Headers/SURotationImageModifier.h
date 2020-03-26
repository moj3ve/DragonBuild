//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUImageModifier.h>

@interface SURotationImageModifier : SUImageModifier
{
    float _degrees;
    long long _orientation;
}

@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) float degrees; // @synthesize degrees=_degrees;
- (CGRect)imageFrameForImage:(id)arg1 currentFrame:(CGRect)arg2 finalSize:(CGSize)arg3;
- (void)drawBeforeImageForContext:(CGContext )arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3;
- (BOOL)isEqual:(id)arg1;

@end

