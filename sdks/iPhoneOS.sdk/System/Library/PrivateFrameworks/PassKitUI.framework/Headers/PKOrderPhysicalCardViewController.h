//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKExplanationViewController.h>

#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>
#import <PassKitUI/PKViewControllerPreflightable-Protocol.h>

@class NSString, PKOrderPhysicalCardController, PKOrderPhysicalCardHeroView, PKPhysicalCardArtworkOption;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKOrderPhysicalCardViewController : PKExplanationViewController <PKExplanationViewDelegate, PKViewControllerPreflightable>
{
    long long _context;
    PKOrderPhysicalCardController *_controller;
    NSUInteger _featureIdentifier;
    NSString *_nameOnCard;
    PKPhysicalCardArtworkOption *_artworkOption;
    PKOrderPhysicalCardHeroView *_physicalCardHeroView;
    BOOL _unavailableToOrder;
    id <PKPaymentSetupViewControllerDelegate> _delegate;
    NSString *_titleOverride;
    NSString *_bodyOverride;
    NSString *_primaryButtonTitleOverride;
    NSString *_secondaryButtonTitleOverride;
}

@property(copy, nonatomic) NSString *secondaryButtonTitleOverride; // @synthesize secondaryButtonTitleOverride=_secondaryButtonTitleOverride;
@property(copy, nonatomic) NSString *primaryButtonTitleOverride; // @synthesize primaryButtonTitleOverride=_primaryButtonTitleOverride;
@property(copy, nonatomic) NSString *bodyOverride; // @synthesize bodyOverride=_bodyOverride;
@property(copy, nonatomic) NSString *titleOverride; // @synthesize titleOverride=_titleOverride;
@property(nonatomic) __weak id <PKPaymentSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)preflightWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_terminateSetupFlow;
- (void)_handleNextStep;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)viewDidLoad;
- (id)initWithController:(id)arg1;

@end

