//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsFlightRequester-Protocol.h>

@class NSString, PARSession;

@interface MapsSuggestionsFlightRequester : NSObject <MapsSuggestionsFlightRequester>
{
    PARSession *_session;
}

// - (void).cxx_destruct;
- (BOOL)requestFlightsWithNumber:(NSUInteger)arg1 airlineCode:(id)arg2 departureDate:(id)arg3 handler:(id /* CDUnknownBlockType */)arg4;
@property(readonly, nonatomic) NSString *uniqueName;
- (id)init;

@end

