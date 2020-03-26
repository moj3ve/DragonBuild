//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFAPIConfigurationProtocol-Protocol.h>

@class NSMutableDictionary;
@protocol WFForecastDataParser;

@interface WFWeatherChannelAPIConfiguration : NSObject <WFAPIConfigurationProtocol>
{
    NSMutableDictionary *_requestFormatterForForecastType;
    NSMutableDictionary *_requestParserForForecastType;
    Class _defaultForecastRequestFormatterClass;
    id <WFForecastDataParser> _defaultForecastParser;
}

@property(retain, nonatomic) id <WFForecastDataParser> defaultForecastParser; // @synthesize defaultForecastParser=_defaultForecastParser;
@property(retain, nonatomic) Class defaultForecastRequestFormatterClass; // @synthesize defaultForecastRequestFormatterClass=_defaultForecastRequestFormatterClass;
@property(retain, nonatomic) NSMutableDictionary *requestParserForForecastType; // @synthesize requestParserForForecastType=_requestParserForForecastType;
@property(retain, nonatomic) NSMutableDictionary *requestFormatterForForecastType; // @synthesize requestFormatterForForecastType=_requestFormatterForForecastType;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isValid;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)hostUrl;
- (void)setDefaultForecastFormatter:(Class)arg1;
- (void)setRequestParser:(id)arg1 forForecastType:(NSUInteger)arg2;
- (void)setRequestFormatter:(Class)arg1 forForecastType:(NSUInteger)arg2;
- (id)parseForecast:(NSUInteger)arg1 data:(id)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id )arg6 rules:(id)arg7;
- (id)forecastRequestForTypes:(NSUInteger)arg1 location:(id)arg2 date:(id)arg3 error:(id )arg4 rules:(id)arg5;
- (id)initWithVersion:(id)arg1;

@end

