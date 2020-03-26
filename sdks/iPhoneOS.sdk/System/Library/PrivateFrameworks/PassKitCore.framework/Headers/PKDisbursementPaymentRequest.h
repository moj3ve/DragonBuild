//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentRequest.h>

@class PKDisbursementRequest;

@interface PKDisbursementPaymentRequest : PKPaymentRequest
{
    PKDisbursementRequest *_disbursementRequest;
    NSUInteger _disbursementSource;
    NSUInteger _disbursementTarget;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSUInteger disbursementTarget; // @synthesize disbursementTarget=_disbursementTarget;
@property(readonly, nonatomic) NSUInteger disbursementSource; // @synthesize disbursementSource=_disbursementSource;
@property(readonly, nonatomic) PKDisbursementRequest *disbursementRequest; // @synthesize disbursementRequest=_disbursementRequest;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDisbursementPaymentRequest:(id)arg1;

@end

