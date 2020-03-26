//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PKPaymentApplication, PKPaymentPass, PKRemotePaymentInstrument;

@interface PKPaymentPreferenceCardEntry : NSObject
{
    BOOL _shouldShowCardUI;
    BOOL _isSelectable;
    PKPaymentPass *_pass;
    PKRemotePaymentInstrument *_remotePaymentInstrument;
    PKPaymentApplication *_paymentApplication;
    NSString *_displayName;
    NSString *_availabilityString;
    id /* CDUnknownBlockType */ _actionBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) BOOL isSelectable; // @synthesize isSelectable=_isSelectable;
@property(nonatomic) BOOL shouldShowCardUI; // @synthesize shouldShowCardUI=_shouldShowCardUI;
@property(copy, nonatomic) NSString *availabilityString; // @synthesize availabilityString=_availabilityString;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) PKPaymentApplication *paymentApplication; // @synthesize paymentApplication=_paymentApplication;
@property(retain, nonatomic) PKRemotePaymentInstrument *remotePaymentInstrument; // @synthesize remotePaymentInstrument=_remotePaymentInstrument;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
// - (void).cxx_destruct;

@end

