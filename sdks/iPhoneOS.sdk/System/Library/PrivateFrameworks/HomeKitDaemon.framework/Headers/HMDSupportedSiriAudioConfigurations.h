//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDAudioStreamCodecConfiguration, NSArray;

@interface HMDSupportedSiriAudioConfigurations : NSObject
{
    long long _siriInputType;
    NSArray *_supportedConfigurations;
    HMDAudioStreamCodecConfiguration *_selectedConfiguration;
}

@property(retain, nonatomic) HMDAudioStreamCodecConfiguration *selectedConfiguration; // @synthesize selectedConfiguration=_selectedConfiguration;
@property(retain, nonatomic) NSArray *supportedConfigurations; // @synthesize supportedConfigurations=_supportedConfigurations;
@property(nonatomic) long long siriInputType; // @synthesize siriInputType=_siriInputType;
// - (void).cxx_destruct;

@end

