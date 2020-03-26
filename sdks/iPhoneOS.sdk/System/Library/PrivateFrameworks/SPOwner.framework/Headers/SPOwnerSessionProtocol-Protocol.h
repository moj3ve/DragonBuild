//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class FMFuture, NSArray, NSSet, SPBeacon, SPCommand;

@protocol SPOwnerSessionProtocol <NSObject>
@property(readonly, copy, nonatomic) NSSet *allBeacons;
@property(copy, nonatomic) id /* CDUnknownBlockType */ latestLocationsUpdatedBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ beaconRemovedBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ beaconAddedBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ beaconsChangedBlock;
@property(copy, nonatomic) NSSet *locationSources;
- (void)shareBeacon:(SPBeacon *)arg1 handles:(NSArray *)arg2 completion:(void (^)(NSDictionary *))arg3;
- (void)executeCommand:(SPCommand *)arg1 completion:(void (^)(NSError *))arg2;
- (FMFuture *)executeCommand:(SPCommand *)arg1;
- (void)removeBeacon:(SPBeacon *)arg1 completion:(void (^)(NSError *))arg2;
- (void)locationsForBeacons:(NSArray *)arg1 completion:(void (^)(NSDictionary *))arg2;
- (void)unacceptedBeaconsWithCompletion:(void (^)(NSSet *))arg1;
- (void)allBeaconsWithCompletion:(void (^)(NSSet *))arg1;
- (void)stopRefreshing;
- (void)startRefreshingBeacons:(NSArray *)arg1;
- (void)startRefreshing;
@end

