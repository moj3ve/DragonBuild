//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>

@class NSError, NSString;
@protocol FBSProcessExecutionProvisionDelegate, FBSProcessInternal, OS_dispatch_queue;

@interface FBSProcessExecutionProvision : NSObject <BSDescriptionProviding, NSCopying>
{
    id <FBSProcessInternal> _process;
    BOOL _activated;
    NSObject<OS_dispatch_queue> *_delegateCalloutQueue;
    BOOL _monitoring;
    BOOL _violated;
    NSError *_error;
    id <FBSProcessExecutionProvisionDelegate> _delegate;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) __weak id <FBSProcessInternal> process; // @synthesize process=_process;
@property(readonly, nonatomic, getter=isViolated) BOOL violated; // @synthesize violated=_violated;
@property(readonly, nonatomic, getter=isMonitoring) BOOL monitoring; // @synthesize monitoring=_monitoring;
@property(nonatomic) __weak id <FBSProcessExecutionProvisionDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)_performDelegateCallout:(id /* CDUnknownBlockType */)arg1;
@property(readonly, copy) NSString *description;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)_noteViolatedWithError:(id)arg1;
- (void)_prepareForReuse;
- (void)_stopMonitoring;
- (void)_updateProgress;
- (void)_beginMonitoring;
- (void)prepareForReuse;
- (void)stopMonitoring;
- (void)updateProgress;
- (void)monitorProcess:(id)arg1;
- (id)init;
- (BOOL)isResourceProvision;

@end

