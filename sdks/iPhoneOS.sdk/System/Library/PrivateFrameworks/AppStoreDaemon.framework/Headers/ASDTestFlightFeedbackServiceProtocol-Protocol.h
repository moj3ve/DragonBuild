//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ASDBetaAppFeedback, ASDBetaAppLaunchInfo, ASDBetaAppVersion, NSDictionary, NSString;

@protocol ASDTestFlightFeedbackServiceProtocol
- (void)updateTestNotes:(NSDictionary *)arg1 forVersion:(ASDBetaAppVersion *)arg2 withCompletionHandler:(void (^)(NSError *))arg3;
- (void)submitFeedback:(ASDBetaAppFeedback *)arg1 withCompletionHandler:(void (^)(NSError *))arg2;
- (void)setLaunchInfo:(ASDBetaAppLaunchInfo *)arg1 withCompletionHandler:(void (^)(NSError *))arg2;
- (void)setLaunchScreenEnabled:(BOOL)arg1 forVersion:(ASDBetaAppVersion *)arg2 withCompletionHandler:(void (^)(NSError *))arg3;
- (void)setFeedbackEnabled:(BOOL)arg1 forVersion:(ASDBetaAppVersion *)arg2 withCompletionHandler:(void (^)(NSError *))arg3;
- (void)isLaunchScreenEnabledForBundleID:(NSString *)arg1 withCompletionHandler:(void (^)(BOOL))arg2;
- (void)isFeedbackEnabledForBundleID:(NSString *)arg1 withCompletionHandler:(void (^)(BOOL))arg2;
- (void)getLaunchInfoForVersion:(ASDBetaAppVersion *)arg1 withCompletionHandler:(void (^)(ASDBetaAppLaunchInfo *, NSError *))arg2;
- (void)getLaunchInfoForBundleID:(NSString *)arg1 withCompletionHandler:(void (^)(ASDBetaAppLaunchInfo *, NSError *))arg2;
- (void)getFeedbackMetadataForBundleID:(NSString *)arg1 withCompletionHandler:(void (^)(ASDBetaAppFeedbackMetadata *, NSError *))arg2;
- (void)getEmailAddressForBundleID:(NSString *)arg1 withCompletionHandler:(void (^)(NSString *))arg2;
- (void)getDisplayNamesForBundleID:(NSString *)arg1 withCompletionHandler:(void (^)(ASDBetaAppDisplayNames *))arg2;
@end

