//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsTransport/NTPBArticleRecord.h>

@class NSArray;

@interface NTPBArticleRecord (FCAdditions)
@property(readonly, nonatomic) NSArray *topicIDs;
- (BOOL)isAllowedInStorefront:(id)arg1;
- (id)generateWebExcerptAssetHandleWithAssetManager:(id)arg1;
- (id)generateFlintDocumentAssetHandleWithAssetManager:(id)arg1;
- (id)generateThumbnailAssetHandleForURL:(id)arg1 withAssetManager:(id)arg2;
@end

