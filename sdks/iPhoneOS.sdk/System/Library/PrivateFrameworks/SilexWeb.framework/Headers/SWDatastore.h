//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SWDatastore : NSObject
{
    NSString *_JSONString;
}

@property(readonly, copy, nonatomic) NSString *JSONString; // @synthesize JSONString=_JSONString;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)initWithJSONString:(id)arg1;

@end

