//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol QLThumbnailAdditionIndexInterface, QLThumbnailsInterface;

@interface QLThumbnailServiceProxy : NSObject
{
    NSXPCConnection *_connection;
    NSObject<QLThumbnailsInterface> *_proxy;
    NSObject<QLThumbnailAdditionIndexInterface> *_indexProxy;
}

+ (id)interface;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)updateLastHitDateOfAddition:(id)arg1 onPhysicalURL:(id)arg2;
- (void)touchOrAddThumbnailAddition:(id)arg1 forURL:(id)arg2;
- (void)askThumbnailAdditionIndex:(id /* CDUnknownBlockType */)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)indexProxy;
- (void)dealloc;
- (id)init;

@end

