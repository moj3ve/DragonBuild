//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMVisionEngineNode.h>


@interface AXMEvaluationNode : AXMVisionEngineNode <NSSecureCoding>
{
    double _minimumConfidence;
    NSUInteger _priority;
    NSUInteger _effectivePriority;
}

+ (NSUInteger)defaultPriority;
+ (void)configureForRunningOnANEIfPossibleWithRequest:(id)arg1;
+ (BOOL)isANEDeviceAvailable;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger effectivePriority; // @synthesize effectivePriority=_effectivePriority;
@property(nonatomic) NSUInteger priority; // @synthesize priority=_priority;
@property(nonatomic) double minimumConfidence; // @synthesize minimumConfidence=_minimumConfidence;
- (id)_diagnosticNameForRequests:(id)arg1 diagnostics:(id)arg2;
- (BOOL)evaluateRequests:(id)arg1 withContext:(id)arg2 requestHandlerOptions:(id)arg3 error:(id )arg4;
- (BOOL)shouldEvaluate:(id)arg1;
- (void)evaluate:(id)arg1;
- (void)resetEffectivePriority;
- (void)boostEffectivePriority;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (void)nodeInitialize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

