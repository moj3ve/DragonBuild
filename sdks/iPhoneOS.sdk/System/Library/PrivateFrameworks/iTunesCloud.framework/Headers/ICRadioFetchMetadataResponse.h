//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRadioResponse.h>

@class NSArray;

@interface ICRadioFetchMetadataResponse : ICRadioResponse
{
}

- (id)_storePlatformMetadataDictionaryFromRadioMetadataDictionary:(id)arg1;
- (id)storePlatformMetadataForStoreAdamID:(long long)arg1;
@property(readonly, copy, nonatomic) NSArray *allStorePlatformMetadata;

@end

