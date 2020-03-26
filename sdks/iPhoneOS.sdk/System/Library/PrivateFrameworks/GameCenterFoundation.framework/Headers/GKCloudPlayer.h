//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKBasePlayer.h>


@class NSString;

@interface GKCloudPlayer : GKBasePlayer <NSSecureCoding, NSCopying>
{
    NSString *_identifier;
    NSString *_name;
}

+ (BOOL)supportsSecureCoding;
+ (void)getCurrentSignedInPlayerForContainer:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)displayName;
- (id)playerID;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

