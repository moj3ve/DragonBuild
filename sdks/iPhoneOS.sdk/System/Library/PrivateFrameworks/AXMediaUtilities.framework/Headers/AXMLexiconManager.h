//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AXMLexiconManager : NSObject
{
    NSMutableDictionary *_cachedLexicons;
}

// - (void).cxx_destruct;
- (struct _LXLexicon )_lexiconForLocale:(id)arg1 diagnostics:(id)arg2;
- (BOOL)textExistsInLexicon:(id)arg1 withLocale:(id)arg2 diagnostics:(id)arg3;
- (BOOL)lexiconExistsForLocale:(id)arg1 diagnostics:(id)arg2;
- (id)init;
- (void )_opaqueLexiconForLocale:(id)arg1 diagnostics:(id)arg2;

@end

