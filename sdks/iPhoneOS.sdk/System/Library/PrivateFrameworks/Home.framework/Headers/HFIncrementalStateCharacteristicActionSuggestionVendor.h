//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFCharacteristicActionSuggestionVending-Protocol.h>

@class NSString;

@interface HFIncrementalStateCharacteristicActionSuggestionVendor : NSObject <HFCharacteristicActionSuggestionVending>
{
    NSString *_characteristicType;
}

@property(readonly, copy, nonatomic) NSString *characteristicType; // @synthesize characteristicType=_characteristicType;
// - (void).cxx_destruct;
- (id)suggestedActionForCharacteristic:(id)arg1 candidateActions:(id)arg2;
- (id)initWithCharacteristicType:(id)arg1;

@end

