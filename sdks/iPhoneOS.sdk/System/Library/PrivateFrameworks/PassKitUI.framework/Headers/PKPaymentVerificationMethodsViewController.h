//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupFieldsViewController.h>

@class NSString, PKPaymentProvisioningController, PKPaymentSetupVerificationMethodTableController, PKPaymentVerificationController;

@interface PKPaymentVerificationMethodsViewController : PKPaymentSetupFieldsViewController
{
    PKPaymentSetupVerificationMethodTableController *_methodTableController;
    long long _verificationStatus;
    PKPaymentVerificationController *_verificationController;
    PKPaymentProvisioningController *_provisioningController;
    NSString *_stepIdentifier;
}

@property(copy, nonatomic) NSString *stepIdentifier; // @synthesize stepIdentifier=_stepIdentifier;
@property(retain, nonatomic) PKPaymentProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
@property(readonly, nonatomic) PKPaymentVerificationController *verificationController; // @synthesize verificationController=_verificationController;
// - (void).cxx_destruct;
- (id)_requestErrorAlertController:(id)arg1;
- (id)_setupAssistantVerificationAlert;
- (id)_newVerificationRequest;
- (void)handleNextButtonTapped:(id)arg1;
- (void)_terminateSetupFlow;
- (void)_handleVerificationFinished;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)visibleFieldIdentifiers;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)_loadVerificationOptions;
- (void)_configure;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithVerificationController:(id)arg1 verificationChannels:(id)arg2;
- (id)initWithVerificationController:(id)arg1;
- (id)initWithVerificationController:(id)arg1 fieldsModel:(id)arg2;

@end

