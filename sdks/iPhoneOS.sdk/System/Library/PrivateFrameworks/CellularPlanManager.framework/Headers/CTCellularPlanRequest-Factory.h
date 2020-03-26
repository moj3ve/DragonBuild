//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CellularPlanManager/CTCellularPlanRequest.h>

@interface CTCellularPlanRequest (Factory)
+ (id)loadPlansRequestWithUrl:(id)arg1 postData:(id)arg2;
+ (id)newPurchaseWithSessionId:(id)arg1 receipt:(id)arg2 userId:(id)arg3 userName:(id)arg4;
+ (id)newInitiatePurchaseWithSessionId:(id)arg1 planId:(id)arg2;
+ (id)requestHandoffTokenWithSignIdMap:(id)arg1 urls:(id)arg2;
+ (id)plansRequestWithSignIdMap:(id)arg1 renewalIccid:(id)arg2 urls:(id)arg3;
+ (id)subscriptionDetailsRequestWithIccids:(id)arg1 signIdMap:(id)arg2 urls:(id)arg3;
+ (id)createSessionRequest;
+ (void)load;
@end

