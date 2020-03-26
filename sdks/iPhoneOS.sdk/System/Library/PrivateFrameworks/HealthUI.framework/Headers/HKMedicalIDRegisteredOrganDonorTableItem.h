//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKEmergencyCardTableItem.h>

@class HKOrganDonationCallToActionTableViewCell;
@protocol HKMedicalIDRegisteredOrganDonorTableItemDelegate;

@interface HKMedicalIDRegisteredOrganDonorTableItem : HKEmergencyCardTableItem
{
    long long _organization;
    id <HKMedicalIDRegisteredOrganDonorTableItemDelegate> _delegate;
    HKOrganDonationCallToActionTableViewCell *_notRegisteredCell;
}

@property(retain, nonatomic) HKOrganDonationCallToActionTableViewCell *notRegisteredCell; // @synthesize notRegisteredCell=_notRegisteredCell;
@property(nonatomic) __weak id <HKMedicalIDRegisteredOrganDonorTableItemDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)titleForFooter;
- (void)presentDonateLifeRegistrationSequence;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (UIEdgeInsets)separatorInset;
- (BOOL)shouldHighlightRowAtIndex:(long long)arg1;
- (BOOL)canEditRowAtIndex:(long long)arg1;
- (BOOL)hasPresentableData;
- (id)organizationLogo;
- (id)title;
- (id)initInEditMode:(BOOL)arg1 organDonationOrganization:(long long)arg2;

@end

