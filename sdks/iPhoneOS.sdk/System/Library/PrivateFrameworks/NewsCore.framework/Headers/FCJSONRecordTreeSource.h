//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCJSONRecordTreeSourceType-Protocol.h>

@class NSArray;
@protocol FCContentContext;

@interface FCJSONRecordTreeSource : NSObject <FCJSONRecordTreeSourceType>
{
    id <FCContentContext> _context;
    NSArray *_jsonRecordSources;
}

@property(copy, nonatomic) NSArray *jsonRecordSources; // @synthesize jsonRecordSources=_jsonRecordSources;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
// - (void).cxx_destruct;
- (void)fetchRecordTreeWithRootIDs:(id)arg1 branchKeysByRecordType:(id)arg2 cachePolicy:(id)arg3 edgeCacheHint:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)fetchRecordTreeWithRootIDs:(id)arg1 branchKeysByRecordType:(id)arg2 cachePolicy:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (id)initWithContext:(id)arg1 jsonRecordSources:(id)arg2;

@end

