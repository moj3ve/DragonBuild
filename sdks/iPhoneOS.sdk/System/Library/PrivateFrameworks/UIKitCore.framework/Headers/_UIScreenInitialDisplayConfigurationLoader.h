//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UISDisplayContext;

__attribute__((visibility("hidden")))
@interface _UIScreenInitialDisplayConfigurationLoader : NSObject
{
    UISDisplayContext *_context;
    BOOL _hasRequestedPreload;
}

+ (id)sharedLoader;
// - (void).cxx_destruct;
@property(readonly, nonatomic) UISDisplayContext *initialDisplayContext;
- (id)initialDisplayConfiguration;
- (void)_startPreloadInitialDisplayContext;

@end

