//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray;

@interface TTVectorMultiTimestamp : NSObject <NSCopying>
{
    NSArray *_timestamps;
}

@property(retain, nonatomic) NSArray *timestamps; // @synthesize timestamps=_timestamps;
// - (void).cxx_destruct;
- (id)description;
- (void)mergeWithTimestamp:(id)arg1;
- (NSUInteger)compareTo:(id)arg1;
- (id)sortedUUIDs;
- (void)setClock:(NSUInteger)arg1 subclock:(NSUInteger)arg2 forUUID:(id)arg3 atIndex:(NSUInteger)arg4;
- (void)setClock:(NSUInteger)arg1 forUUID:(id)arg2 atIndex:(NSUInteger)arg3;
- (NSUInteger)clockForUUID:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)clockElementForUUID:(id)arg1 atIndex:(NSUInteger)arg2;
@property(readonly, nonatomic) BOOL isDocumentShared;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithTimestamps:(id)arg1;
- (id)initWithCapacity:(NSUInteger)arg1;
- (id)serialize;
- (void)saveToArchive:(VectorTimestamp_cd1d3bcf )arg1;
- (id)initWithArchive:(const VectorTimestamp_cd1d3bcf )arg1 andCapacity:(NSUInteger)arg2;
- (id)initWithData:(id)arg1 andCapacity:(NSUInteger)arg2;

@end

