//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSURLRequest;

@interface _GKURLRequestDictionaryKey : NSObject <NSCopying>
{
    NSURLRequest *_request;
}

+ (id)keyWithRequest:(id)arg1;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void)dealloc;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithRequest:(id)arg1;

@end

