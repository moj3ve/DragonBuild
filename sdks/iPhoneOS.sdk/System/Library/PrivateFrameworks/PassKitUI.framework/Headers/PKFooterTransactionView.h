//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKPeerPaymentContactResolverDelegate-Protocol.h>

@class NSString, PKContinuousButton, PKPaymentPass, PKPaymentPassAction, PKPaymentTransaction, PKPeerPaymentContactResolver, PKStackedTextItemGroup, PKStackedTextItemGroupView, PKTransitBalanceModel, UIImageView;

@interface PKFooterTransactionView : UIView <PKPeerPaymentContactResolverDelegate>
{
    PKStackedTextItemGroup *_displayItem;
    PKStackedTextItemGroupView *_headerView;
    PKStackedTextItemGroupView *_contentView;
    UIView *_separatorView;
    PKStackedTextItemGroupView *_footerView;
    UIImageView *_disclosureView;
    PKContinuousButton *_actionButton;
    PKPaymentPassAction *_action;
    UIImageView *_imageView;
    BOOL _animated;
    NSUInteger _deferUpdateCounter;
    BOOL _needsContentUpdate;
    BOOL _contentRequiresDisclosure;
    BOOL _disableCommutePlanDisplay;
    BOOL _enableDisclosure;
    PKPaymentPass *_pass;
    PKPaymentTransaction *_transaction;
    PKTransitBalanceModel *_transitBalanceModel;
    PKPeerPaymentContactResolver *_peerPaymentContactResolver;
    NSString *_requiredActionPropertyIdentifier;
    id /* CDUnknownBlockType */ _actionHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) NSString *requiredActionPropertyIdentifier; // @synthesize requiredActionPropertyIdentifier=_requiredActionPropertyIdentifier;
@property(readonly, nonatomic) BOOL contentRequiresDisclosure; // @synthesize contentRequiresDisclosure=_contentRequiresDisclosure;
@property(nonatomic) BOOL enableDisclosure; // @synthesize enableDisclosure=_enableDisclosure;
@property(nonatomic) BOOL disableCommutePlanDisplay; // @synthesize disableCommutePlanDisplay=_disableCommutePlanDisplay;
@property(readonly, nonatomic) PKPeerPaymentContactResolver *peerPaymentContactResolver; // @synthesize peerPaymentContactResolver=_peerPaymentContactResolver;
@property(copy, nonatomic) PKTransitBalanceModel *transitBalanceModel; // @synthesize transitBalanceModel=_transitBalanceModel;
@property(readonly, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
@property(readonly, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)contactsDidChangeForContactResolver:(id)arg1;
@property(readonly, nonatomic) BOOL hasContent;
- (void)endUpdates:(BOOL)arg1;
- (void)beginUpdates;
- (void)setTransitBalanceModel:(id)arg1 animated:(BOOL)arg2;
- (void)setTransaction:(id)arg1 animated:(BOOL)arg2;
- (void)setPass:(id)arg1 animated:(BOOL)arg2;
- (id)_image;
- (id)_peerPaymentCounterpart;
- (BOOL)_deemphasizeAmount;
- (BOOL)_strikethroughAmount;
- (id)_relativeDateText;
- (id)_statusText;
- (id)_firstRenewActionForPass:(id)arg1;
- (id)_locationText;
- (id)_merchantText;
- (void)_updateContentAnimated:(BOOL)arg1;
- (void)_actionButtonTapped:(id)arg1;
- (void)layoutSubviews;
- (void)layoutIfNeededAnimated:(BOOL)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1 peerPaymentContactResolver:(id)arg2;

@end

