//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKInspectableValueCollection.h>

@interface HKInspectableValueCollection (Display)
+ (id)_unitStringForValue:(id)arg1;
+ (id)_unitStringForValueCollection:(id)arg1;
+ (void)parseUncodedValueCollection:(id)arg1 referenceRanges:(id)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
+ (void)parseValueCollection:(id)arg1 referenceRanges:(id)arg2 healthRecordsStore:(id)arg3 withCompletion:(id /* CDUnknownBlockType */)arg4;
+ (id)_medicalCodingValuePreferredSystems;
- (id)_joinValueStrings:(id)arg1;
- (id)_stringsForValues:(id)arg1;
- (id)displayString;
@end

