//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSDictionary, NSString, NUAdBannerView;
@protocol NUAdLayoutOptions;

@protocol NUAdProvider <NSObject>
- (void)bannerViewDidUnload:(NUAdBannerView *)arg1;
- (void)bannerViewDidLoad:(NUAdBannerView *)arg1;
- (void)videoPlaylistAdForContextProviders:(NSArray *)arg1 withCompletionBlock:(void (^)(NUAdBannerView *, NSURL *, NSUInteger, NSError *))arg2;
- (void)prerollForContextProviders:(NSArray *)arg1 withCompletionBlock:(void (^)(NUAdBannerView *, NSURL *, NSUInteger, NSError *))arg2;
- (void)interstitialViewForContextProviders:(NSArray *)arg1 contextProvidersWithKeys:(NSDictionary *)arg2 layoutOptions:(id <NUAdLayoutOptions>)arg3 withCompletionBlock:(void (^)(ADInterstitialAd *, NSError *))arg4;
- (void)interstitialViewForContextProviders:(NSArray *)arg1 layoutOptions:(id <NUAdLayoutOptions>)arg2 withCompletionBlock:(void (^)(ADInterstitialAd *, NSError *))arg3;
- (void)bannerViewForIdentifier:(NSString *)arg1 contextProviders:(NSArray *)arg2 layoutOptions:(id <NUAdLayoutOptions>)arg3 withCompletionBlock:(void (^)(NUAdBannerView *, NSError *))arg4;
@end

