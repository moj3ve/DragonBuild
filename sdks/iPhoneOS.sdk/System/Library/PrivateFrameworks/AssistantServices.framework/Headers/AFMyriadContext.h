//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class AFMyriadPerceptualAudioHash;

@interface AFMyriadContext : NSObject <NSCopying, NSSecureCoding>
{
    NSUInteger _timestamp;
    AFMyriadPerceptualAudioHash *_perceptualAudioHash;
}

+ (BOOL)supportsSecureCoding;
+ (id)newWithBuilder:(id /* CDUnknownBlockType */)arg1;
@property(readonly, copy, nonatomic) AFMyriadPerceptualAudioHash *perceptualAudioHash; // @synthesize perceptualAudioHash=_perceptualAudioHash;
@property(readonly, nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)_descriptionWithIndent:(NSUInteger)arg1;
- (id)description;
- (id)initWithTimestamp:(NSUInteger)arg1 perceptualAudioHash:(id)arg2;
- (id)mutatedCopyWithMutator:(id /* CDUnknownBlockType */)arg1;

@end

