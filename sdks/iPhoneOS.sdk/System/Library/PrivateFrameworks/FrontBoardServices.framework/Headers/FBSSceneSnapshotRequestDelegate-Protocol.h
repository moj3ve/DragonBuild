//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class FBSSceneSnapshotContext, FBSSceneSnapshotRequest;

@protocol FBSSceneSnapshotRequestDelegate <NSObject>
- (BOOL)snapshotRequest:(FBSSceneSnapshotRequest *)arg1 performWithContext:(FBSSceneSnapshotContext *)arg2;
- (BOOL)snapshotRequestAllowSnapshot:(FBSSceneSnapshotRequest *)arg1;
@end

