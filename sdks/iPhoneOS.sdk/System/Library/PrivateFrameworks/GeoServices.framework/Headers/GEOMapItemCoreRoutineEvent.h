//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOBaseMapItem.h>

@class GEOAddressObject, GEOMapItemClientAttributes, GEOPlace, NSDate, NSDictionary, NSString;

@interface GEOMapItemCoreRoutineEvent : GEOBaseMapItem
{
    NSDictionary *_addressDictionary;
    GEOMapItemClientAttributes *_clientAttributes;
    GEOPlace *_place;
    NSString *_eventName;
    NSString *_eventTitle;
    NSDate *_eventDate;
    BOOL _eventIsAllDay;
    CDStruct_2c43369c _coordinate;
    GEOAddressObject *_addressObject;
}

// - (void).cxx_destruct;
- (id)weatherDisplayName;
- (id)addressObject;
- (id)geoAddress;
- (id)_clientAttributes;
- (id)_place;
- (BOOL)_responseStatusIsIncomplete;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)isEventAllDay;
- (id)eventDate;
- (id)eventName;
- (id)addressDictionary;
- (CDStruct_c3b9c2ee)coordinate;
- (id)name;
- (BOOL)isValid;
- (id)description;
- (id)initWithAddressDictionary:(id)arg1 eventName:(id)arg2 eventTitle:(id)arg3 eventDate:(id)arg4 eventIsAllDay:(BOOL)arg5 coordinate:(CDStruct_c3b9c2ee)arg6 clientAttributes:(id)arg7;

@end

