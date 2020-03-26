//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUIMetricsPageEventData : NSObject
{
    NSString *_pageId;
    NSString *_pageType;
    NSDictionary *_eventData;
}

+ (id)createWithMetricsData:(id)arg1;
+ (id)createWithPageId:(id)arg1 andPageType:(id)arg2 andEventData:(id)arg3;
+ (id)createWithPageType:(id)arg1;
@property(retain, nonatomic) NSDictionary *eventData; // @synthesize eventData=_eventData;
@property(retain, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(retain, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
// - (void).cxx_destruct;
- (id)generateMetricsDataDictionary;

@end

