//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVSupportedCalendarComponentSets : CoreDAVItem
{
    NSMutableSet *_componentSets;
}

+ (BOOL)allowedCalendars:(id)arg1 contains:(id)arg2;
// - (void).cxx_destruct;
- (id)childrenToWrite;
- (void)addCompSet:(id)arg1;
- (id)description;
- (id)componentsAsString;
- (id)init;
- (id)copyParseRules;

@end

