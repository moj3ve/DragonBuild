//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFormatter;
@protocol HFTemperatureFormatter;

@interface HFFormatterManager : NSObject
{
    NSFormatter<HFTemperatureFormatter> *_temperatureFormatter;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (id)emptyStringFormatter;
- (id)identityFormatter;
- (id)booleanFormatter;
- (id)luxFormatter;
- (id)arcDegreeFormatter;
- (id)timeIntervalFormatter;
- (id)percentFormatter;
- (id)temperatureFormatter;
- (void)registerTemperatureFormatter:(id)arg1;

@end

