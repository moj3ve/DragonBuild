//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SymbolCandidate : NSObject
{
    unsigned short _symbol;
    double _probability;
    double _logProbability;
}

@property(nonatomic) double logProbability; // @synthesize logProbability=_logProbability;
@property(nonatomic) double probability; // @synthesize probability=_probability;
@property(nonatomic) unsigned short symbol; // @synthesize symbol=_symbol;
@property(readonly, nonatomic) NSString *description;

@end

