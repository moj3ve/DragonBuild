//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3Client.h>

@interface ML3DaemonClient : ML3Client
{
}

+ (id)sharedDaemonClient;
- (int)processID;
- (id)name;
- (id)bundleID;
- (id)init;

@end

