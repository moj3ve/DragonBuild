//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAccessResource.h>

#import <WorkflowKit/WFHomeManagerEventObserver-Protocol.h>

@interface WFHomeKitAccessResource : WFAccessResource <WFHomeManagerEventObserver>
{
    id /* CDUnknownBlockType */ _completionHandler;
}

+ (BOOL)isSystemResource;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
// - (void).cxx_destruct;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (NSUInteger)globalLevelStatus;
- (id)protectedResourceDescription;
- (id)associatedAppIdentifier;

@end

