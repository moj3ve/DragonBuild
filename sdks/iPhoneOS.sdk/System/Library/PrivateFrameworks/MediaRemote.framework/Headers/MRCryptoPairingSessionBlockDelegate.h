//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/MRCryptoPairingSessionDelegate-Protocol.h>

@interface MRCryptoPairingSessionBlockDelegate : NSObject <MRCryptoPairingSessionDelegate>
{
    id /* CDUnknownBlockType */ _dataExchangeBlock;
    id /* CDUnknownBlockType */ _showSetupCodeBlock;
    id /* CDUnknownBlockType */ _hideSetupCodeBlock;
    id /* CDUnknownBlockType */ _promptForSetupCodeBlock;
    id /* CDUnknownBlockType */ _exchangeCompleteBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ exchangeCompleteBlock; // @synthesize exchangeCompleteBlock=_exchangeCompleteBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ promptForSetupCodeBlock; // @synthesize promptForSetupCodeBlock=_promptForSetupCodeBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ hideSetupCodeBlock; // @synthesize hideSetupCodeBlock=_hideSetupCodeBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ showSetupCodeBlock; // @synthesize showSetupCodeBlock=_showSetupCodeBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ dataExchangeBlock; // @synthesize dataExchangeBlock=_dataExchangeBlock;
// - (void).cxx_destruct;
- (void)pairingSession:(id)arg1 didCompleteExchangeWithError:(id)arg2;
- (void)pairingSession:(id)arg1 promptForSetupCodeWithDelay:(double)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)pairingSession:(id)arg1 promptForSetupCodeWithCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)pairingSessionHideSetupCode:(id)arg1;
- (void)pairingSession:(id)arg1 showSetupCode:(id)arg2;
- (void)pairingSession:(id)arg1 didPrepareExchangeData:(id)arg2;

@end

