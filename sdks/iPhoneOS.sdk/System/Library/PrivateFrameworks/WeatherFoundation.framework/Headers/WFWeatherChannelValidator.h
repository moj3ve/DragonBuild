//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFWeatherChannelValidator : NSObject
{
}

+ (BOOL)isLeafNodeType:(id)arg1;
+ (id)expectedStructure;
- (BOOL)validateDictionary:(id)arg1 expectedStructure:(id)arg2;
- (BOOL)validateResponseData:(id)arg1;

@end

