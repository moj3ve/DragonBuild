//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

#import <RelevanceEngine/REContentEncodable-Protocol.h>
#import <RelevanceEngine/REDonatedActionIdentifierProviding-Protocol.h>

@interface NSString (ActionIdentifier) <REDonatedActionIdentifierProviding, REContentEncodable>
- (NSUInteger)re_actionIdentifierHashValue;
@property(readonly, nonatomic) NSString *contentEncodedString;
@end

