//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSLegacyAttribute : RBSAttribute
{
    NSUInteger _reason;
    NSUInteger _requestedReason;
    NSUInteger _flags;
}

+ (id)attributeWithReason:(NSUInteger)arg1 flags:(NSUInteger)arg2;
@property(nonatomic) NSUInteger flags; // @synthesize flags=_flags;
@property(nonatomic) NSUInteger requestedReason; // @synthesize requestedReason=_requestedReason;
@property(nonatomic) NSUInteger reason; // @synthesize reason=_reason;
- (id)_initWithReason:(NSUInteger)arg1 flags:(NSUInteger)arg2;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)succinctDescriptionBuilder;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;

@end

