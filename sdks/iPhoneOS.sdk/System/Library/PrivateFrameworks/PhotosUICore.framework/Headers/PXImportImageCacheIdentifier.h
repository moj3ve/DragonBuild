//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PXImportImageCacheIdentifier : NSObject
{
    NSString *_assetUuid;
    NSUInteger _sizeType;
    long long _cacheIndex;
}

@property(nonatomic) long long cacheIndex; // @synthesize cacheIndex=_cacheIndex;
@property(nonatomic) NSUInteger sizeType; // @synthesize sizeType=_sizeType;
@property(copy, nonatomic) NSString *assetUuid; // @synthesize assetUuid=_assetUuid;
// - (void).cxx_destruct;

@end

