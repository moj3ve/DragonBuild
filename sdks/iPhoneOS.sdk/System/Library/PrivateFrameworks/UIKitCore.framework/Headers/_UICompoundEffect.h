//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIVisualEffect.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UICompoundEffect : UIVisualEffect
{
    NSArray *_effects;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (id)description;
- (long long)_expectedUsage;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (void)_enumerateEffects:(id /* CDUnknownBlockType */)arg1;
- (id)_allEffects;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffects:(id)arg1;

@end

