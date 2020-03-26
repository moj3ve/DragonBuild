//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSError, SPSearchResultMarker;

@interface SPAdvertisementCacheSearchResult : NSObject <NSSecureCoding>
{
    NSError *_error;
    NSArray *_beaconAdvertisements;
    SPSearchResultMarker *_searchResultMarker;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) SPSearchResultMarker *searchResultMarker; // @synthesize searchResultMarker=_searchResultMarker;
@property(retain, nonatomic) NSArray *beaconAdvertisements; // @synthesize beaconAdvertisements=_beaconAdvertisements;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBeaconAdvertisements:(id)arg1 searchResultMarker:(id)arg2 error:(id)arg3;

@end

