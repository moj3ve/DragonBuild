//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol MPCPlaybackIntentDataSource, NSSecureCoding;

@interface MPCPlaybackIntent : NSObject
{
    id <MPCPlaybackIntentDataSource> _resolvedTracklistDataSource;
    BOOL _prefersEnqueuingUsingAirPlay;
    NSString *_localizedTitle;
    long long _tracklistSource;
    id <NSSecureCoding> _tracklistToken;
    long long _actionAfterQueueLoad;
    long long _shuffleMode;
    long long _repeatMode;
    NSString *_playActivityFeatureName;
    NSData *_playActivityRecommendationData;
    NSString *_siriAssetInfo;
    NSString *_siriReferenceIdentifier;
}

+ (id)tracklistDataSourceForSource:(long long)arg1;
+ (id)radioPlaybackIntentWithStationURL:(id)arg1;
+ (id)radioPlaybackIntentWithStationStringID:(id)arg1;
+ (id)radioPlaybackIntentWithStation:(id)arg1;
+ (id)radioPlaybackIntentFromSong:(id)arg1;
+ (id)radioPlaybackIntentFromArtist:(id)arg1;
+ (id)radioPlaybackIntentFromAlbum:(id)arg1;
+ (id)radioPlaybackIntentFromReference:(id)arg1;
+ (id)intentFromQueueDescriptor:(id)arg1;
@property(copy, nonatomic) NSString *siriReferenceIdentifier; // @synthesize siriReferenceIdentifier=_siriReferenceIdentifier;
@property(copy, nonatomic) NSString *siriAssetInfo; // @synthesize siriAssetInfo=_siriAssetInfo;
@property(copy, nonatomic) NSData *playActivityRecommendationData; // @synthesize playActivityRecommendationData=_playActivityRecommendationData;
@property(copy, nonatomic) NSString *playActivityFeatureName; // @synthesize playActivityFeatureName=_playActivityFeatureName;
@property(nonatomic) BOOL prefersEnqueuingUsingAirPlay; // @synthesize prefersEnqueuingUsingAirPlay=_prefersEnqueuingUsingAirPlay;
@property(nonatomic) long long repeatMode; // @synthesize repeatMode=_repeatMode;
@property(nonatomic) long long shuffleMode; // @synthesize shuffleMode=_shuffleMode;
@property(nonatomic) long long actionAfterQueueLoad; // @synthesize actionAfterQueueLoad=_actionAfterQueueLoad;
@property(retain, nonatomic) id <NSSecureCoding> tracklistToken; // @synthesize tracklistToken=_tracklistToken;
@property(nonatomic) long long tracklistSource; // @synthesize tracklistSource=_tracklistSource;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
// - (void).cxx_destruct;
- (void)getArchiveWithConfiguration:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getRepresentativeMetadataWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)getRemotePlaybackQueueRepresentationWithPlayerPath:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getPlaybackContextWithCompletion:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) id <MPCPlaybackIntentDataSource> tracklistDataSource;
- (id)description;
- (id)init;

@end

