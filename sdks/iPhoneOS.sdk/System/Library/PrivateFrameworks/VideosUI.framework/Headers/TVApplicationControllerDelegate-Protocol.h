//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class JSContext, NSDictionary, NSError, TVApplicationController, TVPlayer;

@protocol TVApplicationControllerDelegate <NSObject>

@optional
- (TVPlayer *)playerForAppController:(TVApplicationController *)arg1;
- (void)appController:(TVApplicationController *)arg1 didStopWithOptions:(NSDictionary *)arg2;
- (void)appController:(TVApplicationController *)arg1 didFailWithError:(NSError *)arg2;
- (void)appController:(TVApplicationController *)arg1 didFinishLaunchingWithOptions:(NSDictionary *)arg2;
- (void)appController:(TVApplicationController *)arg1 evaluateAppJavaScriptInContext:(JSContext *)arg2;
@end

