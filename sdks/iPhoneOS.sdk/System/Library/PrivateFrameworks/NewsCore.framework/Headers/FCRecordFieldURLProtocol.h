//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

@class FCCKContentFetchOperation;

@interface FCRecordFieldURLProtocol : NSURLProtocol
{
    FCCKContentFetchOperation *_fetchOperation;
}

+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)URLForRecordID:(id)arg1 fieldName:(id)arg2;
+ (void)unregister;
+ (void)setupWithArticleDatabase:(id)arg1;
@property(retain, nonatomic) FCCKContentFetchOperation *fetchOperation; // @synthesize fetchOperation=_fetchOperation;
// - (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;

@end

