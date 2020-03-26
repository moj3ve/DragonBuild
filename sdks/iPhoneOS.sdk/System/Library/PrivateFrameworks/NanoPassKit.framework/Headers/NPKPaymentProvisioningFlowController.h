//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/PKContactlessCardIngesterDelegate-Protocol.h>
#import <NanoPassKit/PKPaymentAuthorizationControllerDelegate-Protocol.h>
#import <NanoPassKit/PKPaymentAuthorizationControllerPrivateDelegate-Protocol.h>

@class NPKPaymentProvisioningFlowControllerRequestContext, NSData, NSDecimalNumber, NSString, PKAddPaymentPassRequest, PKAddPaymentPassRequestConfiguration, PKContactlessCardIngester, PKPaymentAuthorizationController, PKPaymentCredential, PKPaymentPass, PKPaymentProvisioningController, PKPaymentProvisioningMethodMetadata, PKPaymentRequest, PKPaymentSetupFieldsModel, PKPaymentSetupProduct, PKPaymentWebService, PKServiceProviderPurchase;
@protocol NPKPaymentProvisioningFlowControllerDelegate, NSObject, OS_dispatch_source;

@interface NPKPaymentProvisioningFlowController : NSObject <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate, PKContactlessCardIngesterDelegate>
{
    BOOL _readerModeProvisioningSupported;
    BOOL _digitalIssuanceSupported;
    BOOL _separateLocalDeviceEntryRequired;
    BOOL _termsAcceptedOutOfBand;
    int _currentStep;
    id <NPKPaymentProvisioningFlowControllerDelegate> _delegate;
    PKPaymentProvisioningController *_provisioningController;
    long long _setupContext;
    PKPaymentAuthorizationController *_unitTestingAuthorizationController;
    PKContactlessCardIngester *_unitTestingCardIngester;
    PKAddPaymentPassRequestConfiguration *_inAppProvisioningRequestConfiguration;
    PKAddPaymentPassRequest *_inAppProvisioningRequest;
    NSData *_inAppProvisioningPublicKeyHash;
    NSData *_inAppProvisioningNonce;
    NSObject<OS_dispatch_source> *_inAppProvisioningGetRequestTimer;
    PKPaymentWebService *_webService;
    NSString *_chooseCredentialsStepIdentifier;
    NSString *_immediatelyBeforeTermsStepIdentifier;
    PKPaymentSetupFieldsModel *_fieldsModel;
    id <NSObject> _progressNotificationToken;
    NPKPaymentProvisioningFlowControllerRequestContext *_provisioningProgressRequestContext;
    PKPaymentPass *_issuerVerificationPass;
    PKPaymentCredential *_currentCredential;
    PKPaymentSetupProduct *_currentProduct;
    NSUInteger _termsReason;
    PKPaymentRequest *_digitalIssuancePaymentRequest;
    NSDecimalNumber *_digitalIssuanceAmount;
    PKServiceProviderPurchase *_digitalIssuancePurchase;
    NPKPaymentProvisioningFlowControllerRequestContext *_digitalIssuanceRequestContext;
    PKPaymentAuthorizationController *_authorizationController;
    PKContactlessCardIngester *_cardIngester;
    NSUInteger _internalIngestionState;
    NSUInteger _flowIngestionState;
    double _ingestionProgress;
    NSUInteger _ingestionStateOnRetry;
    NSString *_ingestionCardSessionToken;
    NSObject<OS_dispatch_source> *_ingestionCardNotFoundTimer;
    PKPaymentProvisioningMethodMetadata *_ingestionMethodMetadata;
    NPKPaymentProvisioningFlowControllerRequestContext *_readerModeRequestContext;
}

+ (BOOL)_localCredentials:(id)arg1 containProduct:(id)arg2;
+ (BOOL)_isHSA2Enabled;
+ (id)_authContext;
+ (id)_filteredPaymentSetupProducts:(id)arg1 localCredentials:(id)arg2 setupContext:(long long)arg3 webService:(id)arg4 mobileCarrierRegion:(id)arg5 readerModeSupported:(BOOL)arg6 digitalIssuanceSupported:(BOOL)arg7;
+ (id)_flowPickerSectionsWithContext:(long long)arg1 provisioningController:(id)arg2 readerModeSupported:(BOOL)arg3 digitalIssuanceSupported:(BOOL)arg4;
+ (id)_displayableCouldNotAddCardErrorWithUnderlyingError:(id)arg1;
+ (id)_displayableErrorWithUnderlyingVerificationError:(id)arg1;
+ (id)_displayableErrorWithIneligibilityReason:(long long)arg1 learnMoreURL:(id)arg2;
+ (id)_physicalCardURLFromMetadata:(id)arg1 forScale:(double)arg2;
+ (id)_readerModeResources;
+ (BOOL)_readerModeEntryAllowedForProduct:(id)arg1;
@property(retain, nonatomic) NPKPaymentProvisioningFlowControllerRequestContext *readerModeRequestContext; // @synthesize readerModeRequestContext=_readerModeRequestContext;
@property(retain, nonatomic) PKPaymentProvisioningMethodMetadata *ingestionMethodMetadata; // @synthesize ingestionMethodMetadata=_ingestionMethodMetadata;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *ingestionCardNotFoundTimer; // @synthesize ingestionCardNotFoundTimer=_ingestionCardNotFoundTimer;
@property(retain, nonatomic) NSString *ingestionCardSessionToken; // @synthesize ingestionCardSessionToken=_ingestionCardSessionToken;
@property(nonatomic) NSUInteger ingestionStateOnRetry; // @synthesize ingestionStateOnRetry=_ingestionStateOnRetry;
@property(nonatomic) double ingestionProgress; // @synthesize ingestionProgress=_ingestionProgress;
@property(nonatomic) NSUInteger flowIngestionState; // @synthesize flowIngestionState=_flowIngestionState;
@property(nonatomic) NSUInteger internalIngestionState; // @synthesize internalIngestionState=_internalIngestionState;
@property(retain, nonatomic) PKContactlessCardIngester *cardIngester; // @synthesize cardIngester=_cardIngester;
@property(retain, nonatomic) PKPaymentAuthorizationController *authorizationController; // @synthesize authorizationController=_authorizationController;
@property(retain, nonatomic) NPKPaymentProvisioningFlowControllerRequestContext *digitalIssuanceRequestContext; // @synthesize digitalIssuanceRequestContext=_digitalIssuanceRequestContext;
@property(retain, nonatomic) PKServiceProviderPurchase *digitalIssuancePurchase; // @synthesize digitalIssuancePurchase=_digitalIssuancePurchase;
@property(retain, nonatomic) NSDecimalNumber *digitalIssuanceAmount; // @synthesize digitalIssuanceAmount=_digitalIssuanceAmount;
@property(retain, nonatomic) PKPaymentRequest *digitalIssuancePaymentRequest; // @synthesize digitalIssuancePaymentRequest=_digitalIssuancePaymentRequest;
@property(nonatomic) BOOL termsAcceptedOutOfBand; // @synthesize termsAcceptedOutOfBand=_termsAcceptedOutOfBand;
@property(nonatomic) NSUInteger termsReason; // @synthesize termsReason=_termsReason;
@property(retain, nonatomic) PKPaymentSetupProduct *currentProduct; // @synthesize currentProduct=_currentProduct;
@property(retain, nonatomic) PKPaymentCredential *currentCredential; // @synthesize currentCredential=_currentCredential;
@property(retain, nonatomic) PKPaymentPass *issuerVerificationPass; // @synthesize issuerVerificationPass=_issuerVerificationPass;
@property(retain, nonatomic) NPKPaymentProvisioningFlowControllerRequestContext *provisioningProgressRequestContext; // @synthesize provisioningProgressRequestContext=_provisioningProgressRequestContext;
@property(retain, nonatomic) id <NSObject> progressNotificationToken; // @synthesize progressNotificationToken=_progressNotificationToken;
@property(retain, nonatomic) PKPaymentSetupFieldsModel *fieldsModel; // @synthesize fieldsModel=_fieldsModel;
@property(retain, nonatomic) NSString *immediatelyBeforeTermsStepIdentifier; // @synthesize immediatelyBeforeTermsStepIdentifier=_immediatelyBeforeTermsStepIdentifier;
@property(retain, nonatomic) NSString *chooseCredentialsStepIdentifier; // @synthesize chooseCredentialsStepIdentifier=_chooseCredentialsStepIdentifier;
@property(nonatomic) int currentStep; // @synthesize currentStep=_currentStep;
@property(retain, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *inAppProvisioningGetRequestTimer; // @synthesize inAppProvisioningGetRequestTimer=_inAppProvisioningGetRequestTimer;
@property(retain, nonatomic) NSData *inAppProvisioningNonce; // @synthesize inAppProvisioningNonce=_inAppProvisioningNonce;
@property(retain, nonatomic) NSData *inAppProvisioningPublicKeyHash; // @synthesize inAppProvisioningPublicKeyHash=_inAppProvisioningPublicKeyHash;
@property(retain, nonatomic) PKAddPaymentPassRequest *inAppProvisioningRequest; // @synthesize inAppProvisioningRequest=_inAppProvisioningRequest;
@property(retain, nonatomic) PKAddPaymentPassRequestConfiguration *inAppProvisioningRequestConfiguration; // @synthesize inAppProvisioningRequestConfiguration=_inAppProvisioningRequestConfiguration;
@property(retain, nonatomic) PKContactlessCardIngester *unitTestingCardIngester; // @synthesize unitTestingCardIngester=_unitTestingCardIngester;
@property(retain, nonatomic) PKPaymentAuthorizationController *unitTestingAuthorizationController; // @synthesize unitTestingAuthorizationController=_unitTestingAuthorizationController;
@property(nonatomic, getter=isSeparateLocalDeviceEntryRequired) BOOL separateLocalDeviceEntryRequired; // @synthesize separateLocalDeviceEntryRequired=_separateLocalDeviceEntryRequired;
@property(nonatomic, getter=isDigitalIssuanceSupported) BOOL digitalIssuanceSupported; // @synthesize digitalIssuanceSupported=_digitalIssuanceSupported;
@property(nonatomic, getter=isReaderModeProvisioningSupported) BOOL readerModeProvisioningSupported; // @synthesize readerModeProvisioningSupported=_readerModeProvisioningSupported;
@property(readonly, nonatomic) long long setupContext; // @synthesize setupContext=_setupContext;
@property(readonly, nonatomic) PKPaymentProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
@property(nonatomic) __weak id <NPKPaymentProvisioningFlowControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_requestPassDetailsForAccountCredential:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_verifyPasscodeStateIfNecessaryWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_configureWebServiceIfNecessary:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)_requiredFieldsFromRequirementsResponse;
- (id)_filteredPaymentSetupFields:(id)arg1 forLocalDeviceEntry:(BOOL)arg2;
- (BOOL)_fieldRequiresLocalEntry:(id)arg1;
- (BOOL)_fieldsModelCompleteExceptForLocalFields:(id)arg1;
- (id)_localRequiredFieldsFromRequirementsResponse;
- (id)_requiredFieldsFromRequirementsResponseExcludingLocalFields;
- (void)_sendDidEncounterError:(id)arg1 requestContext:(id)arg2;
- (void)_sendDidTransitionFromStep:(int)arg1 toStep:(int)arg2 withContext:(id)arg3;
- (void)_performTransitionToStep:(int)arg1 withContext:(id)arg2;
- (void)_endProvisioningFlowWithError:(id)arg1 requestContext:(id)arg2;
- (void)_endProvisioningFlowWithSuccessForPass:(id)arg1 requestContext:(id)arg2;
- (void)_handleEndOfProvisioningFlowForCurrentPass:(id)arg1 requestContext:(id)arg2;
- (void)_transitionToVerificationCodeWithPaymentPass:(id)arg1 channel:(id)arg2 requestContext:(id)arg3;
- (void)_transitionToVerificationFieldsWithPaymentPass:(id)arg1 fields:(id)arg2 requestContext:(id)arg3;
- (void)_transitionToVerificationChannelsWithPaymentPass:(id)arg1 channels:(id)arg2 requestContext:(id)arg3;
- (void)_transitionToMoreInformationWithItems:(id)arg1 pass:(id)arg2 requestContext:(id)arg3;
- (void)_transitionToProductDisambiguationWithProducts:(id)arg1 requestContext:(id)arg2;
- (void)_transitionToSecondaryManualEntryWithFields:(id)arg1 credential:(id)arg2 requestContext:(id)arg3;
- (void)_transitionToManualEntry:(id)arg1;
- (void)_transitionToChooseCredentials:(id)arg1 requestContext:(id)arg2;
- (void)_transitionBasedOnCredentials:(id)arg1 product:(id)arg2 requestContext:(id)arg3;
- (void)_transitionToProvisioningProgressWithRequestContext:(id)arg1;
- (void)_transitionToTermsForReason:(NSUInteger)arg1 URL:(id)arg2 requestContext:(id)arg3;
- (void)_transitionToChooseProductWithProducts:(id)arg1 requestContext:(id)arg2;
- (void)_transitionToChooseFlowWithSections:(id)arg1 requestContext:(id)arg2;
- (void)_provisioningLocalizedProgressDescriptionDidChange:(id)arg1;
- (void)_downloadRemoteAssetsAndAddPaymentPass:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_downloadAndAddUpdatedPassForPaymentPass:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_handleVerificationCode:(id)arg1 forPass:(id)arg2 context:(id)arg3;
- (void)_handleVerificationFieldsForPass:(id)arg1 context:(id)arg2;
- (void)_updateVerificationForPass:(id)arg1 channel:(id)arg2 context:(id)arg3;
- (void)_requestVerificationOptionsForPass:(id)arg1 context:(id)arg2;
- (void)_handleVerificationResponseForPass:(id)arg1 context:(id)arg2;
- (void)_performNextStepForProvisionedPass:(id)arg1 moreInfoAcknowledged:(BOOL)arg2 requestContext:(id)arg3;
- (void)_performNextStepForProvisionedPass:(id)arg1 requestContext:(id)arg2;
- (void)_handleFinished:(id)arg1;
- (void)_performProvision:(id)arg1;
- (void)_performTerms:(id)arg1;
- (void)_performPasscodeUpgrade:(id)arg1;
- (void)_performEligibility:(id)arg1;
- (void)_requestRequirements:(id)arg1;
- (id)_newPaymentProvisioningRequest;
- (id)_newPaymentEligibilityRequest;
- (id)_newPaymentRequirementsRequest;
- (void)_performNextActionForProvisioningState:(id)arg1;
- (void)_startProvisioningForCredential:(id)arg1 requestContext:(id)arg2;
- (void)_handleProceedWithCredentials:(id)arg1 chosenByUser:(BOOL)arg2 requestContext:(id)arg3;
- (void)_handleProductChosen:(id)arg1 requestContext:(id)arg2;
- (void)_handlePreconditionsVerified:(id)arg1;
- (void)_handleProvisioningFlowStarted:(id)arg1;
- (void)_fetchAddRequestWithCertificatesResponse:(id)arg1 requestContext:(id)arg2;
- (void)_fetchInAppProvisioningCertificates:(id)arg1;
- (void)_performRequirementsOrEligibilityForInAppProvisioning:(id)arg1;
- (void)handleIssuerApplicationAddRequest:(id)arg1 requestContext:(id)arg2;
- (void)startInAppProvisioningFlowWithConfiguration:(id)arg1 requestContext:(id)arg2;
- (void)skipIssuerVerification:(id)arg1;
- (void)handleIssuerVerificationCode:(id)arg1 requestContext:(id)arg2;
- (void)handleIssuerVerificationFields:(id)arg1 requestContext:(id)arg2;
- (void)handleIssuerVerificationChannel:(id)arg1 requestContext:(id)arg2;
- (void)startIssuerVerificationFlowForPaymentPass:(id)arg1 requestContext:(id)arg2;
- (void)acknowledgeMoreInformation:(id)arg1;
- (void)skipProvisioning:(id)arg1;
- (void)acceptTerms:(id)arg1;
- (void)handleProductSelection:(id)arg1 requestContext:(id)arg2;
- (void)handleManualEntryFields:(id)arg1 credential:(id)arg2 requestContext:(id)arg3;
- (void)chooseManualEntry:(id)arg1;
- (void)chooseCredentials:(id)arg1 requestContext:(id)arg2;
- (void)handleReaderModeFields:(id)arg1 requestContext:(id)arg2;
- (void)chooseReaderMode:(id)arg1;
- (void)handleDigitalIssuanceAmount:(id)arg1 requestContext:(id)arg2;
- (void)chooseProduct:(id)arg1 requestContext:(id)arg2;
- (void)chooseFlowForPickerItem:(id)arg1 requestContext:(id)arg2;
- (void)acknowledgeWelcome:(id)arg1;
- (void)startProvisioningFlow:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithProvisioningController:(id)arg1 setupContext:(long long)arg2;
- (id)_addCardErrorForPaymentRequest:(id)arg1;
- (void)paymentAuthorizationController:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)paymentAuthorizationControllerDidFinish:(id)arg1;
- (void)paymentAuthorizationController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (id)_paymentRequestForAmount:(id)arg1;
- (void)_startDigitalIssuancePaymentWithAmount:(id)arg1 requestContext:(id)arg2;
- (void)_handleDigitalIssuanceTermsAccepted:(id)arg1;
- (void)_transitionToDigitalIssuanceForProduct:(id)arg1 requestContext:(id)arg2;
- (id)_subtitleForState:(NSUInteger)arg1;
- (id)_titleForState:(NSUInteger)arg1;
- (void)_invalidateCardNotFoundTimer;
- (void)_startCardNotFoundTimer;
- (void)_cardNotFoundTimerFired;
- (void)_transitionToIngestionProgress:(double)arg1;
- (void)_transitionToFlowIngestionState:(NSUInteger)arg1;
- (void)_removePassIfNecessary;
- (void)_resetReaderModeProvisioningState;
- (void)_startTransferringCard;
- (void)_startReadingCard;
- (void)_startIngestion;
- (void)contactlessCardIngester:(id)arg1 didFailToIngestCardWithError:(id)arg2 resetProvisioning:(BOOL)arg3 isRecoverable:(BOOL)arg4;
- (void)_transitionToFlowIngestionState:(NSUInteger)arg1 progress:(double)arg2;
- (void)contactlessCardIngester:(id)arg1 didUpdateCardIngestionStatus:(NSUInteger)arg2;
- (void)_tearDownCardIngester;
- (void)_setupCardIngester;
- (void)_noteProvisioningStateChangeForReaderMode:(long long)arg1;
- (void)_startReaderModeIngestion:(id)arg1;
- (void)_handleReaderModeTermsAccepted:(id)arg1;
- (void)_transitionToReaderModeForProduct:(id)arg1 requestContext:(id)arg2;

@end

