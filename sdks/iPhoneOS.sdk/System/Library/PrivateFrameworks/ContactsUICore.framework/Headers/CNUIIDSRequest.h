//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNUIIDSRequest : NSObject
{
}

+ (id)validHandlesFromHandles:(id)arg1;
+ (id)errorRefreshingHandles:(id)arg1 forService:(id)arg2;
+ (id)refreshStatusOfDestinations:(id)arg1 forService:(id)arg2 queryControllerWrapper:(id)arg3 delay:(double)arg4 scheduler:(id)arg5;
+ (id)refreshStatusOfDestinations:(id)arg1 forService:(id)arg2 queryControllerWrapper:(id)arg3;
+ (id)afterDelayRetryRefreshingStatusOfDestinations:(id)arg1 forService:(id)arg2 queryControllerWrapper:(id)arg3 scheduler:(id)arg4;
+ (BOOL)shouldRetryRefreshingIDSStatusOfDesinationsGivenResult:(NSDictionary )arg1;
+ (id)validateHandles:(id)arg1 forService:(long long)arg2 scheduler:(id)arg3 queryControllerWrapper:(id)arg4;
+ (id)IDSResponseQueue;
+ (id)IDSServiceForService:(long long)arg1;
+ (BOOL)isDestinationAvailable:(id)arg1 givenStatusesByDestination:(NSDictionary )arg2;
+ (id)resultsForIDSControllerResult:(NSDictionary )arg1 handlesByDestination:(id)arg2;
+ (BOOL)isStatusOfEveryDestinationUnknown:(NSDictionary )arg1;

@end

