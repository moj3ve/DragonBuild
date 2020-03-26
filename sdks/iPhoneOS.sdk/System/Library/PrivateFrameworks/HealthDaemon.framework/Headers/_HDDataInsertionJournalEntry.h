//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDJournalEntry.h>

@class HDDataOriginProvenance, HKObject;

@interface _HDDataInsertionJournalEntry : HDJournalEntry
{
    HKObject *_dataObject;
    HDDataOriginProvenance *_provenance;
}

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
@property(readonly, nonatomic) HDDataOriginProvenance *provenance; // @synthesize provenance=_provenance;
@property(readonly, nonatomic) HKObject *dataObject; // @synthesize dataObject=_dataObject;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithDataObject:(id)arg1 provenance:(id)arg2;

@end

