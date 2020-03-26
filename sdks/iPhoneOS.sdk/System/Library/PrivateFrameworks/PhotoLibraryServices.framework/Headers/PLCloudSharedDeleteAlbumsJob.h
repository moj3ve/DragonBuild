//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSString;

@interface PLCloudSharedDeleteAlbumsJob : PLCloudSharingJob
{
    NSArray *_albumCloudGUIDsToDelete;
    NSString *_inviterAddress;
}

+ (void)deleteLocalAlbumForMSASAlbumGUID:(id)arg1 inviterAddress:(id)arg2;
+ (void)deleteLocalAlbumsForMSASAlbumGUIDs:(id)arg1;
@property(retain, nonatomic) NSString *inviterAddress; // @synthesize inviterAddress=_inviterAddress;
@property(retain, nonatomic) NSArray *albumCloudGUIDsToDelete; // @synthesize albumCloudGUIDsToDelete=_albumCloudGUIDsToDelete;
// - (void).cxx_destruct;
- (void)runDaemonSide;
- (void)run;
- (long long)daemonOperation;
- (id)description;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;

@end

