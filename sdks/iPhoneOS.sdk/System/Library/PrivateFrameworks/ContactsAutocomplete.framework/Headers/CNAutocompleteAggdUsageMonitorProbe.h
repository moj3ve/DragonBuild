//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteUsageMonitorProbe-Protocol.h>

@class CNAutocompleteAggdProbe, NSNumber;

@interface CNAutocompleteAggdUsageMonitorProbe : NSObject <CNAutocompleteUsageMonitorProbe>
{
    CNAutocompleteAggdProbe *_aggdProbe;
    NSNumber *_selectedIndex;
    NSNumber *_selectedPredictionIndex;
    NSNumber *_lengthOfSearchString;
    NSNumber *_sourceType;
    NSNumber *_returnedDuetResults;
}

@property(retain, nonatomic) NSNumber *returnedDuetResults; // @synthesize returnedDuetResults=_returnedDuetResults;
@property(retain, nonatomic) NSNumber *sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSNumber *lengthOfSearchString; // @synthesize lengthOfSearchString=_lengthOfSearchString;
@property(retain, nonatomic) NSNumber *selectedPredictionIndex; // @synthesize selectedPredictionIndex=_selectedPredictionIndex;
@property(retain, nonatomic) NSNumber *selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) CNAutocompleteAggdProbe *aggdProbe; // @synthesize aggdProbe=_aggdProbe;
// - (void).cxx_destruct;
- (void)sendData;
- (void)recordUserIgnoredPrefixedResultAfterDelay:(double)arg1 batch:(NSUInteger)arg2;
- (void)recordUserIgnoredPredictionAfterDelay:(double)arg1;
- (void)recordUserSelectedResultWithSourceType:(NSUInteger)arg1;
- (void)recordUserSelectedPredictionAtIndex:(NSUInteger)arg1;
- (void)recordUserTypedInNumberOfCharacters:(NSUInteger)arg1;
- (void)recordDuetReturnedResults:(BOOL)arg1;
- (void)recordUserSelectedIndex:(NSUInteger)arg1;
- (void)recordUserSawResultsConsideredSuggestion:(NSUInteger)arg1;
- (void)recordUserSawCuratedResults:(NSUInteger)arg1;
- (void)recordUserSawPredictions;
- (id)sourceKeysForSourceType:(NSUInteger)arg1;
- (id)initWithAggdProbe:(id)arg1;
- (id)init;

@end

