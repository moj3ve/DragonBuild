//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CARSessionStatus;

@interface CRVehicleInformation : NSObject
{
    CARSessionStatus *_currentSessionStatus;
}

@property(retain, nonatomic) CARSessionStatus *currentSessionStatus; // @synthesize currentSessionStatus=_currentSessionStatus;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUInteger vehicleAmbientBrightness;
@property(readonly, nonatomic) NSUInteger driverPosition;
- (id)init;

@end

