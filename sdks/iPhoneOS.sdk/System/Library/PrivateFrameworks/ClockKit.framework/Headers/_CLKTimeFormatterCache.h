//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _CLKTimeFormatterCache : NSObject
{
    NSMutableDictionary *_timeOnlyFormatters;
    NSMutableDictionary *_timeAndDesignatorFormatters;
    NSMutableDictionary *_timeAndDesignatorFormattersSuppressingWhitespace;
}

+ (id)timeZoneName:(id)arg1;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)_invalidateFormatters;
- (id)timeAndDesignatorFormatterForTimeZone:(id)arg1 suppressWhitespace:(BOOL)arg2 forcesLatinNumbers:(BOOL)arg3;
- (id)timeOnlyFormatterForTimeZone:(id)arg1 hasSeconds:(BOOL)arg2 forcesLatinNumbers:(BOOL)arg3;
- (void)dealloc;
- (id)init;

@end

