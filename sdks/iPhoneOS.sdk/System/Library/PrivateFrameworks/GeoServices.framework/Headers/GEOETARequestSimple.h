//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOXPCRequest.h>

#import <GeoServices/GEOXPCRequest-Protocol.h>

@class GEOETARequest;

@interface GEOETARequestSimple : GEOXPCRequest <GEOXPCRequest>
{
    GEOETARequest *_request;
}

+ (Class)replyClass;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) GEOETARequest *request; // @synthesize request=_request;
// - (void).cxx_destruct;
- (BOOL)expectsReply;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

