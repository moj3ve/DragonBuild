//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface TUPhoneNumber : NSObject <NSCoding, NSSecureCoding>
{
    struct __CFPhoneNumber _phoneNumberRef;
}

+ (BOOL)areDigits:(id)arg1 equalToDigits:(id)arg2 usingCountryCode:(id)arg3;
+ (BOOL)supportsSecureCoding;
+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;
+ (id)phoneNumberWithCFPhoneNumberRef:(struct __CFPhoneNumber )arg1;
@property struct __CFPhoneNumber phoneNumberRef; // @synthesize phoneNumberRef=_phoneNumberRef;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSString *unformattedInternationalRepresentation; // @dynamic unformattedInternationalRepresentation;
@property(readonly) NSString *formattedInternationalRepresentation; // @dynamic formattedInternationalRepresentation;
@property(readonly) NSString *formattedRepresentation; // @dynamic formattedRepresentation;
@property(readonly) NSString *countryCode; // @dynamic countryCode;
@property(readonly) NSString *digits; // @dynamic digits;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDigits:(id)arg1 countryCode:(id)arg2;
- (id)initWithCFPhoneNumberRef:(struct __CFPhoneNumber )arg1;

@end

