//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDictionary, NSString, _SFPBAirport, _SFPBDate;

@protocol _SFPBFlightLeg <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _SFPBDate *arrivalGateTime;
@property(retain, nonatomic) _SFPBDate *arrivalRunwayTime;
@property(retain, nonatomic) _SFPBDate *departureRunwayTime;
@property(retain, nonatomic) _SFPBDate *departureGateClosedTime;
@property(copy, nonatomic) NSString *baggageClaim;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) _SFPBAirport *divertedAirport;
@property(retain, nonatomic) _SFPBAirport *arrivalAirport;
@property(copy, nonatomic) NSString *arrivalGate;
@property(copy, nonatomic) NSString *arrivalTerminal;
@property(retain, nonatomic) _SFPBDate *arrivalActualTime;
@property(retain, nonatomic) _SFPBDate *arrivalPublishedTime;
@property(retain, nonatomic) _SFPBAirport *departureAirport;
@property(copy, nonatomic) NSString *departureGate;
@property(copy, nonatomic) NSString *departureTerminal;
@property(retain, nonatomic) _SFPBDate *departureActualTime;
@property(retain, nonatomic) _SFPBDate *departurePublishedTime;
@property(nonatomic) int status;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

