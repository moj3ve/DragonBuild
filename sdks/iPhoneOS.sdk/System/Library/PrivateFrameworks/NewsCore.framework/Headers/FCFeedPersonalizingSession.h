//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCDateRange, NSString;

@interface FCFeedPersonalizingSession : NSObject
{
    FCDateRange *_dateRange;
    NSUInteger _fixedArticleCount;
    long long _feedType;
    NSString *_sessionID;
}

@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) long long feedType; // @synthesize feedType=_feedType;
@property(nonatomic) NSUInteger fixedArticleCount; // @synthesize fixedArticleCount=_fixedArticleCount;
@property(retain, nonatomic) FCDateRange *dateRange; // @synthesize dateRange=_dateRange;
// - (void).cxx_destruct;

@end

