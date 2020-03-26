//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIImageDataConsumer.h>


@class SKUIColorScheme, UIColor;

@interface SKUIProductImageDataConsumer : SKUIImageDataConsumer <NSCopying>
{
    UIColor *_backgroundColor;
    CGSize _iconSize;
    SKUIColorScheme *_colorScheme;
}

+ (id)wishlistConsumer;
+ (id)smartBannerConsumer;
+ (id)giftResultConsumer;
+ (id)giftThemePosterConsumer;
+ (id)giftThemeLetterboxConsumer;
+ (id)giftThemeConsumer;
+ (id)giftComposePosterConsumer;
+ (id)giftComposeLetterboxConsumer;
+ (id)giftComposeConsumer;
+ (id)swooshConsumer;
+ (id)productPageConsumer;
+ (id)purchasedConsumer;
+ (id)updatesConsumer;
+ (id)chartsConsumer;
+ (id)cardConsumer;
+ (id)lockupConsumerWithSize:(long long)arg1 itemKind:(long long)arg2;
+ (id)gridConsumer;
+ (id)consumerWithSize:(CGSize)arg1;
@property(readonly, nonatomic) CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)imageForImage:(id)arg1;
- (id)imageForColor:(id)arg1 size:(CGSize)arg2;
- (id)imageForColor:(id)arg1;
@property(readonly, nonatomic) CGSize imageSize;

@end

