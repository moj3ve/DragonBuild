//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKMedicalRecord.h>

#import <HealthRecordsUI/HRWDDisplayable-Protocol.h>

@class HKInspectableValueCollection, NSArray, NSDate, NSString;

@interface HKMedicalRecord (Displayable) <HRWDDisplayable>
- (id)meaningfulDateDisplayStringWithPreferredForm:(long long)arg1 showTime:(BOOL)arg2;
- (id)sortDateTitle;
@property(readonly, nonatomic) NSString *titleDisplayStringForDetailViewController;
@property(readonly, nonatomic) long long recordCategoryType;
@property(readonly, nonatomic) BOOL isDateLess;
@property(readonly, nonatomic) BOOL isDisplayable;
@property(readonly, nonatomic) NSString *meaningfulDateString;
@property(readonly, nonatomic) NSDate *meaningfulDate;
@property(readonly, nonatomic) NSString *meaningfulDateTitle;
- (id)codings;
@property(readonly, nonatomic) HKInspectableValueCollection *chartValue;
- (void)fetchObservationDetailItemsWithHealthRecordsStore:(id)arg1 style:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)fetchChartValueWithRangeWithHealthStore:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic) NSArray *conceptNameItems;
- (void)fetchDisplayNameItemWithHealthRecordsStore:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)fetchConceptRoomItemsWithHealthRecordsStore:(id)arg1 conceptStore:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)fetchStructuredFieldItemsWithHealthRecordsStore:(id)arg1 conceptStore:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)fetchDetailItemsWithHealthRecordsStore:(id)arg1 conceptStore:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(nonatomic, readonly) NSString *displayNameForGroupByConcept;
@property(nonatomic, readonly) NSString *preferredDisplayName;
- (id)chartableCodedQuantitySet;
@end

