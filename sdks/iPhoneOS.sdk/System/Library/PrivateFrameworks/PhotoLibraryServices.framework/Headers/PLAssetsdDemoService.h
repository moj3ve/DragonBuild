//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLAssetsdDemoServiceProtocol-Protocol.h>

@class PLAssetsdConnectionAuthorization;

@interface PLAssetsdDemoService : NSObject <PLAssetsdDemoServiceProtocol>
{
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
}

// - (void).cxx_destruct;
- (void)hasCompletedMomentAnalysisWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)hasCompletedRestorePostProcessingWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)cleanupForStoreDemoMode;
- (id)initWithConnectionAuthorization:(id)arg1;

@end

