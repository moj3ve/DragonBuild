//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface HMDDataStreamTransportStatus : NSObject <NSCopying>
{
    long long _status;
}

+ (id)parsedFromData:(id)arg1 error:(id )arg2;
@property(nonatomic) long long status; // @synthesize status=_status;
- (id)description;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializeWithError:(id )arg1;
- (BOOL)parseFromData:(id)arg1 error:(id )arg2;
- (id)initWithStatus:(long long)arg1;
- (id)init;

@end

