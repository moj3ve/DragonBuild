//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOResourceManifestDownload, NSData, NSDictionary, NSError, NSString;

@interface GEOEnvironmentInfo : NSObject
{
    NSString *_name;
    NSString *_displayName;
    NSString *_releaseName;
    long long _state;
    NSData *_manifestData;
    NSError *_lastLoadingError;
    NSDictionary *_originalDictionaryRepresentation;
}

@property(readonly, nonatomic) NSError *lastLoadingError; // @synthesize lastLoadingError=_lastLoadingError;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *releaseName; // @synthesize releaseName=_releaseName;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)useProxyAuth;
- (id)overrideURLs;
- (id)serviceURLs;
- (void)reloadManifestDataWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)_manifestURLString;
- (void)updateWithURLs:(id)arg1;
@property(readonly, nonatomic) GEOResourceManifestDownload *resourceManifest;
- (BOOL)isActive;
- (void)makeActive;
- (id)urlDictionary;
- (id)initWithName:(id)arg1 displayName:(id)arg2 dictionaryRepresentation:(id)arg3;

@end

