//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GEOClientRankingModel : NSObject
{
    NSArray *_features;
}

@property(readonly, nonatomic) NSArray *features; // @synthesize features=_features;
// - (void).cxx_destruct;
- (id)initWithGEOPDClientRankingFeatureMetadata:(id)arg1;
- (id)initWithFeatures:(id)arg1;
- (id)init;

@end

