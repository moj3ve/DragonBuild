//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol NARWorkspaceService <NSObject>
- (oneway void)getWorkspaceInfoIncludingHiddenApps:(BOOL)arg1 completion:(void (^)(NARWorkspaceInfo *))arg2;
- (oneway void)getWorkspaceInfoWithCompletion:(void (^)(NARWorkspaceInfo *))arg1;
@end

