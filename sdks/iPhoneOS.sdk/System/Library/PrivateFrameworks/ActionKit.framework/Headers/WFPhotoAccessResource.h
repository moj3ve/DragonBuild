//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAccessResource.h>

@interface WFPhotoAccessResource : WFAccessResource
{
}

+ (BOOL)isSystemResource;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (NSUInteger)globalLevelStatus;
- (id)protectedResourceDescription;
- (id)associatedAppIdentifier;

@end

