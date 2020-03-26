//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IPAPhotoAdjustmentPipeline : NSObject
{
    NSString *_platform;
    NSUInteger _version;
}

+ (id)current;
+ (id)pipelineFromString:(id)arg1;
+ (id)pipelineForVersion:(NSUInteger)arg1;
+ (id)pipelineForPlatform:(id)arg1 version:(NSUInteger)arg2;
+ (void)initialize;
@property(readonly, nonatomic) NSUInteger version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *platform; // @synthesize platform=_platform;
// - (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (BOOL)isEqualToAdjustmentPipeline:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)string;
- (id)initWithPlatform:(id)arg1 version:(NSUInteger)arg2;

@end

