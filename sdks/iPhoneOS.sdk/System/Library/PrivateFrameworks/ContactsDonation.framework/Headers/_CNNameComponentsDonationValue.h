//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsDonation/CNDonationValue.h>

@class NSPersonNameComponents;

@interface _CNNameComponentsDonationValue : CNDonationValue
{
    NSPersonNameComponents *_nameComponents;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSPersonNameComponents *nameComponents; // @synthesize nameComponents=_nameComponents;
// - (void).cxx_destruct;
- (void)updatePropertyListRepresentation:(id)arg1;
- (void)acceptDonationValueVisitor:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithNewExpirationDate:(id)arg1;
- (id)description;
- (id)initWithNameComponents:(id)arg1 origin:(id)arg2;

@end

