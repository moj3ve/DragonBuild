//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLVirtualResource.h>

@interface PLMediaMetadataVirtualResource : PLVirtualResource
{
    NSUInteger _dataLength;
}

- (long long)estimatedDataLength;
- (long long)dataLength;
- (id)initWithAsset:(id)arg1 resourceType:(unsigned int)arg2 version:(unsigned int)arg3 recipeID:(unsigned int)arg4 dataLength:(NSUInteger)arg5;

@end

