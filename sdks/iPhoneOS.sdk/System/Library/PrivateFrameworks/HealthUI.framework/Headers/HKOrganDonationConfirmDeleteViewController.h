//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKOrganDonationBaseViewController.h>

@class HKOrganDonationConnectionManager;

@interface HKOrganDonationConfirmDeleteViewController : HKOrganDonationBaseViewController
{
    HKOrganDonationConnectionManager *_connectionManager;
}

// - (void).cxx_destruct;
- (void)deleteButtonTapped:(id)arg1;
- (void)buttonAtIndexTapped:(long long)arg1;
- (id)bottomAnchoredButtons;
- (id)bodyString;
- (id)titleString;
- (id)titleImage;
- (id)initWithConnectionManager:(id)arg1 medicalIDData:(id)arg2;

@end

