//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDictionary, _CPSearchResultForFeedback;

@protocol _CPResultFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _CPSearchResultForFeedback *result;
@property(nonatomic) NSUInteger timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

