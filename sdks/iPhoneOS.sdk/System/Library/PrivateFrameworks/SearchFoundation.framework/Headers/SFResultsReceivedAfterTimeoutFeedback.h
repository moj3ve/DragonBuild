//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>


@class NSArray;

@interface SFResultsReceivedAfterTimeoutFeedback : SFFeedback <NSCopying>
{
    NSArray *_results;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithResults:(id)arg1;

@end

