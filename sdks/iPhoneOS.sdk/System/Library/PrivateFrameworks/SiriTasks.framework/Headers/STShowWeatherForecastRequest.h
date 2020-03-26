//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class NSArray, STCity, STWeatherCurrentConditions, STWeatherUnits;

@interface STShowWeatherForecastRequest : AFSiriRequest
{
    STWeatherCurrentConditions *_currentConditions;
    NSArray *_hourlyForecasts;
    STCity *_city;
    STWeatherUnits *_units;
    long long _forecastType;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)forecastType;
- (id)units;
- (id)city;
- (id)hourlyForecasts;
- (id)currentConditions;
- (id)createResponse;
- (id)_initWithCurrentConditions:(id)arg1 hourlyForecasts:(id)arg2 city:(id)arg3 units:(id)arg4 forecastType:(long long)arg5;

@end

