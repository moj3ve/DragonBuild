//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestResponse.h>

@class NSArray;

@interface ASDLaunchableAppsResponse : ASDRequestResponse
{
    NSArray *_bundleIDs;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithBundleIDs:(id)arg1;
- (id)init;

@end

