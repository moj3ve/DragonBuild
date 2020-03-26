//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDictionary, NSString, NSTimeZone, SFLatLng;

@protocol SFAirport <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *country;
@property(copy, nonatomic) NSString *countryCode;
@property(copy, nonatomic) NSString *postalCode;
@property(copy, nonatomic) NSString *state;
@property(copy, nonatomic) NSString *district;
@property(copy, nonatomic) NSString *street;
@property(copy, nonatomic) NSString *city;
@property(retain, nonatomic) SFLatLng *location;
@property(copy, nonatomic) NSTimeZone *timezone;
@property(copy, nonatomic) NSString *code;
@end

