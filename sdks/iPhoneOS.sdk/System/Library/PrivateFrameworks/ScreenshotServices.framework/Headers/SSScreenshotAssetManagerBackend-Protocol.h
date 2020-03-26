//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSString, SSScreenshotAssetManagerRegistrationOptions, UIImage;

@protocol SSScreenshotAssetManagerBackend <NSObject>
- (void)removeEntryWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)saveImageToTemporaryLocation:(UIImage *)arg1 withName:(NSString *)arg2 completionHandler:(void (^)(NSURL *, NSError *))arg3;
- (void)updateImage:(UIImage *)arg1 withModificationData:(NSData *)arg2 forEntryWithIdentifier:(NSString *)arg3 completionHandler:(void (^)(BOOL, NSError *))arg4;
- (void)imageForPreviouslyRegisteredIdentifier:(NSString *)arg1 imageHandler:(void (^)(UIImage *, NSError *))arg2;
- (void)registerEntryWithImage:(UIImage *)arg1 options:(SSScreenshotAssetManagerRegistrationOptions *)arg2 identifierHandler:(void (^)(NSString *, NSError *))arg3;
@end

