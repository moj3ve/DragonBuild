//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/PARRequest.h>


@class NSURL;

@interface PARMoreResultsRequest : PARRequest <NSSecureCoding>
{
    NSURL *_moreResultsURL;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSURL *moreResultsURL; // @synthesize moreResultsURL=_moreResultsURL;
// - (void).cxx_destruct;
- (unsigned int)nwActivityLabel;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

