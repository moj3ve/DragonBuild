//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFInternalSettingsCache : NSObject
{
    BOOL _tiltedTabSkyViewEnabled;
    BOOL _UIDebuggingEnabled;
}

+ (id)sharedCache;
@property(nonatomic) BOOL UIDebuggingEnabled; // @synthesize UIDebuggingEnabled=_UIDebuggingEnabled;
@property(nonatomic) BOOL tiltedTabSkyViewEnabled; // @synthesize tiltedTabSkyViewEnabled=_tiltedTabSkyViewEnabled;

@end

