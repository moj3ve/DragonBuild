//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (SCROBrailleAdditions)
- (_NSRange)rangeOfWordAfterWordAtIndex:(long long)arg1;
- (_NSRange)rangeOfWordBeforeWordAtIndex:(long long)arg1;
- (_NSRange)rangeOfWordContainingIndex:(long long)arg1;
- (_NSRange)_rangeIsolatingIllegalCharacters:(_NSRange)arg1 forwards:(BOOL)arg2;
- (id)_legalWhiteSpaceSet;
- (id)_illegalCharacterSet;
@end

