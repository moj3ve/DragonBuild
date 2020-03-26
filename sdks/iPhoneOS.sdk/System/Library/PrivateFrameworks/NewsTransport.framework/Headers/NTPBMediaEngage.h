//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSMutableArray, NSString, NTPBAlternateHeadline, NTPBIssueData, NTPBIssueExposureData, NTPBIssueViewData, NTPBWidgetEngagement;

@interface NTPBMediaEngage : PBCodable <NSCopying>
{
    long long _backendArticleVersionInt64;
    long long _mediaDuration;
    long long _mediaPausePosition;
    long long _mediaResumePosition;
    long long _mediaResumeTimePlayed;
    long long _mediaTimePlayed;
    long long _personalizationTreatmentId;
    long long _previousArticlePublisherArticleVersion;
    long long _publisherArticleVersionInt64;
    NTPBAlternateHeadline *_alternateHeadline;
    NSString *_articleId;
    NSData *_articleSessionId;
    int _articleType;
    NSData *_articleViewingSessionId;
    int _backendArticleVersion;
    int _feedCellSection;
    NSString *_feedId;
    int _feedType;
    NSData *_feedViewExposureId;
    NSMutableArray *_fractionalCohortMemberships;
    NSString *_groupFeedId;
    int _groupType;
    NSData *_groupViewExposureId;
    NSString *_iadNativeAd;
    NSString *_iadNativeCampaign;
    NSString *_iadNativeCampaignAd;
    NSString *_iadNativeLine;
    NTPBIssueData *_issueData;
    NTPBIssueExposureData *_issueExposureData;
    NTPBIssueViewData *_issueViewData;
    int _loadFailureReason;
    NSString *_mediaId;
    int _mediaPauseLocation;
    int _mediaPauseMethod;
    int _mediaPlayLocation;
    int _mediaPlayMethod;
    int _mediaResumeMethod;
    int _mediaType;
    NSString *_metadata;
    int _muteButtonState;
    NSMutableArray *_namedEntities;
    NSString *_nativeCampaignData;
    float _osVolumeLevel;
    NSString *_previousArticleId;
    NSString *_previousArticleVersion;
    int _publisherArticleVersion;
    int _rankInVideoPlaylist;
    NSString *_referencedArticleId;
    NSString *_sectionHeadlineId;
    NSString *_sourceChannelId;
    NSString *_surfacedByChannelId;
    NSString *_surfacedBySectionId;
    NSString *_surfacedByTopicId;
    int _topStoryType;
    int _userAction;
    int _videoType;
    NTPBWidgetEngagement *_widgetEngagement;
    BOOL _adSupportedChannel;
    BOOL _isBreakingNewsArticle;
    BOOL _isDigitalReplicaAd;
    BOOL _isNativeAd;
    BOOL _isTopStoryArticle;
    BOOL _isUserSubscribedToFeed;
    BOOL _isVideoInFeed;
    struct {
        unsigned int backendArticleVersionInt64:1;
        unsigned int mediaDuration:1;
        unsigned int mediaPausePosition:1;
        unsigned int mediaResumePosition:1;
        unsigned int mediaResumeTimePlayed:1;
        unsigned int mediaTimePlayed:1;
        unsigned int personalizationTreatmentId:1;
        unsigned int previousArticlePublisherArticleVersion:1;
        unsigned int publisherArticleVersionInt64:1;
        unsigned int articleType:1;
        unsigned int backendArticleVersion:1;
        unsigned int feedCellSection:1;
        unsigned int feedType:1;
        unsigned int groupType:1;
        unsigned int loadFailureReason:1;
        unsigned int mediaPauseLocation:1;
        unsigned int mediaPauseMethod:1;
        unsigned int mediaPlayLocation:1;
        unsigned int mediaPlayMethod:1;
        unsigned int mediaResumeMethod:1;
        unsigned int mediaType:1;
        unsigned int muteButtonState:1;
        unsigned int osVolumeLevel:1;
        unsigned int publisherArticleVersion:1;
        unsigned int rankInVideoPlaylist:1;
        unsigned int topStoryType:1;
        unsigned int userAction:1;
        unsigned int videoType:1;
        unsigned int adSupportedChannel:1;
        unsigned int isBreakingNewsArticle:1;
        unsigned int isDigitalReplicaAd:1;
        unsigned int isNativeAd:1;
        unsigned int isTopStoryArticle:1;
        unsigned int isUserSubscribedToFeed:1;
        unsigned int isVideoInFeed:1;
    } _has;
}

+ (Class)fractionalCohortMembershipType;
+ (Class)namedEntitiesType;
@property(retain, nonatomic) NTPBIssueViewData *issueViewData; // @synthesize issueViewData=_issueViewData;
@property(retain, nonatomic) NTPBIssueExposureData *issueExposureData; // @synthesize issueExposureData=_issueExposureData;
@property(retain, nonatomic) NTPBIssueData *issueData; // @synthesize issueData=_issueData;
@property(nonatomic) int rankInVideoPlaylist; // @synthesize rankInVideoPlaylist=_rankInVideoPlaylist;
@property(retain, nonatomic) NTPBAlternateHeadline *alternateHeadline; // @synthesize alternateHeadline=_alternateHeadline;
@property(retain, nonatomic) NSData *groupViewExposureId; // @synthesize groupViewExposureId=_groupViewExposureId;
@property(retain, nonatomic) NSString *iadNativeCampaignAd; // @synthesize iadNativeCampaignAd=_iadNativeCampaignAd;
@property(nonatomic) long long previousArticlePublisherArticleVersion; // @synthesize previousArticlePublisherArticleVersion=_previousArticlePublisherArticleVersion;
@property(retain, nonatomic) NSString *iadNativeAd; // @synthesize iadNativeAd=_iadNativeAd;
@property(retain, nonatomic) NSString *iadNativeLine; // @synthesize iadNativeLine=_iadNativeLine;
@property(retain, nonatomic) NSString *iadNativeCampaign; // @synthesize iadNativeCampaign=_iadNativeCampaign;
@property(nonatomic) float osVolumeLevel; // @synthesize osVolumeLevel=_osVolumeLevel;
@property(nonatomic) long long backendArticleVersionInt64; // @synthesize backendArticleVersionInt64=_backendArticleVersionInt64;
@property(nonatomic) long long publisherArticleVersionInt64; // @synthesize publisherArticleVersionInt64=_publisherArticleVersionInt64;
@property(retain, nonatomic) NSMutableArray *fractionalCohortMemberships; // @synthesize fractionalCohortMemberships=_fractionalCohortMemberships;
@property(retain, nonatomic) NSString *groupFeedId; // @synthesize groupFeedId=_groupFeedId;
@property(retain, nonatomic) NTPBWidgetEngagement *widgetEngagement; // @synthesize widgetEngagement=_widgetEngagement;
@property(retain, nonatomic) NSString *previousArticleVersion; // @synthesize previousArticleVersion=_previousArticleVersion;
@property(retain, nonatomic) NSString *previousArticleId; // @synthesize previousArticleId=_previousArticleId;
@property(retain, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSString *nativeCampaignData; // @synthesize nativeCampaignData=_nativeCampaignData;
@property(nonatomic) BOOL isNativeAd; // @synthesize isNativeAd=_isNativeAd;
@property(nonatomic) BOOL isTopStoryArticle; // @synthesize isTopStoryArticle=_isTopStoryArticle;
@property(nonatomic) BOOL isBreakingNewsArticle; // @synthesize isBreakingNewsArticle=_isBreakingNewsArticle;
@property(nonatomic) long long mediaDuration; // @synthesize mediaDuration=_mediaDuration;
@property(nonatomic) long long personalizationTreatmentId; // @synthesize personalizationTreatmentId=_personalizationTreatmentId;
@property(nonatomic) BOOL isVideoInFeed; // @synthesize isVideoInFeed=_isVideoInFeed;
@property(nonatomic) BOOL isDigitalReplicaAd; // @synthesize isDigitalReplicaAd=_isDigitalReplicaAd;
@property(retain, nonatomic) NSString *sectionHeadlineId; // @synthesize sectionHeadlineId=_sectionHeadlineId;
@property(retain, nonatomic) NSString *surfacedByTopicId; // @synthesize surfacedByTopicId=_surfacedByTopicId;
@property(retain, nonatomic) NSString *surfacedBySectionId; // @synthesize surfacedBySectionId=_surfacedBySectionId;
@property(retain, nonatomic) NSString *surfacedByChannelId; // @synthesize surfacedByChannelId=_surfacedByChannelId;
@property(nonatomic) BOOL adSupportedChannel; // @synthesize adSupportedChannel=_adSupportedChannel;
@property(nonatomic) int backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property(nonatomic) int publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property(retain, nonatomic) NSMutableArray *namedEntities; // @synthesize namedEntities=_namedEntities;
@property(nonatomic) BOOL isUserSubscribedToFeed; // @synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed;
@property(retain, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(nonatomic) long long mediaResumePosition; // @synthesize mediaResumePosition=_mediaResumePosition;
@property(nonatomic) long long mediaResumeTimePlayed; // @synthesize mediaResumeTimePlayed=_mediaResumeTimePlayed;
@property(nonatomic) long long mediaPausePosition; // @synthesize mediaPausePosition=_mediaPausePosition;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property(retain, nonatomic) NSData *articleSessionId; // @synthesize articleSessionId=_articleSessionId;
@property(retain, nonatomic) NSString *referencedArticleId; // @synthesize referencedArticleId=_referencedArticleId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(nonatomic) long long mediaTimePlayed; // @synthesize mediaTimePlayed=_mediaTimePlayed;
@property(retain, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasIssueViewData;
@property(readonly, nonatomic) BOOL hasIssueExposureData;
@property(readonly, nonatomic) BOOL hasIssueData;
@property(nonatomic) BOOL hasRankInVideoPlaylist;
@property(readonly, nonatomic) BOOL hasAlternateHeadline;
@property(readonly, nonatomic) BOOL hasGroupViewExposureId;
@property(readonly, nonatomic) BOOL hasIadNativeCampaignAd;
@property(nonatomic) BOOL hasPreviousArticlePublisherArticleVersion;
@property(readonly, nonatomic) BOOL hasIadNativeAd;
@property(readonly, nonatomic) BOOL hasIadNativeLine;
@property(readonly, nonatomic) BOOL hasIadNativeCampaign;
@property(nonatomic) BOOL hasOsVolumeLevel;
@property(nonatomic) BOOL hasMuteButtonState;
@property(nonatomic) int muteButtonState; // @synthesize muteButtonState=_muteButtonState;
@property(nonatomic) BOOL hasBackendArticleVersionInt64;
@property(nonatomic) BOOL hasPublisherArticleVersionInt64;
- (int)StringAsVideoType:(id)arg1;
- (id)videoTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasVideoType;
@property(nonatomic) int videoType; // @synthesize videoType=_videoType;
- (id)fractionalCohortMembershipAtIndex:(NSUInteger)arg1;
- (NSUInteger)fractionalCohortMembershipsCount;
- (void)addFractionalCohortMembership:(id)arg1;
- (void)clearFractionalCohortMemberships;
@property(readonly, nonatomic) BOOL hasGroupFeedId;
- (int)StringAsGroupType:(id)arg1;
- (id)groupTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasGroupType;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
@property(readonly, nonatomic) BOOL hasWidgetEngagement;
@property(readonly, nonatomic) BOOL hasPreviousArticleVersion;
@property(readonly, nonatomic) BOOL hasPreviousArticleId;
@property(readonly, nonatomic) BOOL hasMetadata;
@property(readonly, nonatomic) BOOL hasNativeCampaignData;
@property(nonatomic) BOOL hasIsNativeAd;
@property(nonatomic) BOOL hasIsTopStoryArticle;
- (int)StringAsTopStoryType:(id)arg1;
- (id)topStoryTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasTopStoryType;
@property(nonatomic) int topStoryType; // @synthesize topStoryType=_topStoryType;
@property(nonatomic) BOOL hasLoadFailureReason;
@property(nonatomic) int loadFailureReason; // @synthesize loadFailureReason=_loadFailureReason;
@property(nonatomic) BOOL hasIsBreakingNewsArticle;
@property(nonatomic) BOOL hasMediaDuration;
@property(nonatomic) BOOL hasMediaPauseLocation;
@property(nonatomic) int mediaPauseLocation; // @synthesize mediaPauseLocation=_mediaPauseLocation;
@property(nonatomic) BOOL hasPersonalizationTreatmentId;
@property(nonatomic) BOOL hasIsVideoInFeed;
@property(nonatomic) BOOL hasUserAction;
@property(nonatomic) int userAction; // @synthesize userAction=_userAction;
@property(nonatomic) BOOL hasIsDigitalReplicaAd;
@property(readonly, nonatomic) BOOL hasSectionHeadlineId;
@property(readonly, nonatomic) BOOL hasSurfacedByTopicId;
@property(readonly, nonatomic) BOOL hasSurfacedBySectionId;
@property(readonly, nonatomic) BOOL hasSurfacedByChannelId;
@property(nonatomic) BOOL hasAdSupportedChannel;
@property(nonatomic) BOOL hasBackendArticleVersion;
@property(nonatomic) BOOL hasPublisherArticleVersion;
- (id)namedEntitiesAtIndex:(NSUInteger)arg1;
- (NSUInteger)namedEntitiesCount;
- (void)addNamedEntities:(id)arg1;
- (void)clearNamedEntities;
- (int)StringAsArticleType:(id)arg1;
- (id)articleTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasArticleType;
@property(nonatomic) int articleType; // @synthesize articleType=_articleType;
@property(nonatomic) BOOL hasIsUserSubscribedToFeed;
@property(readonly, nonatomic) BOOL hasFeedViewExposureId;
- (int)StringAsFeedCellSection:(id)arg1;
- (id)feedCellSectionAsString:(int)arg1;
@property(nonatomic) BOOL hasFeedCellSection;
@property(nonatomic) int feedCellSection; // @synthesize feedCellSection=_feedCellSection;
@property(readonly, nonatomic) BOOL hasFeedId;
- (int)StringAsFeedType:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasFeedType;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;
@property(nonatomic) BOOL hasMediaPlayLocation;
@property(nonatomic) int mediaPlayLocation; // @synthesize mediaPlayLocation=_mediaPlayLocation;
@property(nonatomic) BOOL hasMediaResumePosition;
@property(nonatomic) BOOL hasMediaResumeMethod;
@property(nonatomic) int mediaResumeMethod; // @synthesize mediaResumeMethod=_mediaResumeMethod;
@property(nonatomic) BOOL hasMediaResumeTimePlayed;
@property(nonatomic) BOOL hasMediaPausePosition;
@property(nonatomic) BOOL hasMediaPauseMethod;
@property(nonatomic) int mediaPauseMethod; // @synthesize mediaPauseMethod=_mediaPauseMethod;
@property(nonatomic) BOOL hasMediaPlayMethod;
@property(nonatomic) int mediaPlayMethod; // @synthesize mediaPlayMethod=_mediaPlayMethod;
@property(readonly, nonatomic) BOOL hasSourceChannelId;
@property(readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property(readonly, nonatomic) BOOL hasArticleSessionId;
@property(readonly, nonatomic) BOOL hasReferencedArticleId;
@property(readonly, nonatomic) BOOL hasArticleId;
@property(nonatomic) BOOL hasMediaTimePlayed;
@property(readonly, nonatomic) BOOL hasMediaId;
- (int)StringAsMediaType:(id)arg1;
- (id)mediaTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasMediaType;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;

@end

