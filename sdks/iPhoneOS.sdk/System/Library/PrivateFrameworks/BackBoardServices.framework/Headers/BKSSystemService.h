//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSSystemService;

@interface BKSSystemService : NSObject
{
    FBSSystemService *_fbsSystemService;
}

// - (void).cxx_destruct;
- (void)cleanupClientPort:(unsigned int)arg1;
- (unsigned int)createClientPort;
- (void)openURL:(id)arg1 application:(id)arg2 options:(id)arg3 clientPort:(unsigned int)arg4 withResult:(id /* CDUnknownBlockType */)arg5;
- (void)openApplication:(id)arg1 options:(id)arg2 clientPort:(unsigned int)arg3 withResult:(id /* CDUnknownBlockType */)arg4;
- (void)terminateApplicationGroup:(int)arg1 forReason:(int)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4;
- (void)terminateApplication:(id)arg1 forReason:(int)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4;
- (void)openApplication:(id)arg1 options:(id)arg2 withResult:(id /* CDUnknownBlockType */)arg3;
- (BOOL)canOpenApplication:(id)arg1 reason:(int )arg2;
- (int)pidForApplication:(id)arg1;
- (id)systemApplicationBundleIdentifier;
- (id)init;

@end

