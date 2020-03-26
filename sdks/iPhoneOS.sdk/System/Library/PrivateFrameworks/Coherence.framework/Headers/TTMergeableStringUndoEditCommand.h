//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _TtC9Coherence9CRContext;

@interface TTMergeableStringUndoEditCommand : NSObject
{
    vector_4b213608 _deleteRanges;
    vector_4788519f _insertStrings;
    _TtC9Coherence9CRContext *_context;
}

@property(nonatomic) __weak _TtC9Coherence9CRContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) vector_4788519f insertStrings; // @synthesize insertStrings=_insertStrings;
@property(readonly, nonatomic) vector_4b213608 deleteRanges; // @synthesize deleteRanges=_deleteRanges;
// - (void).cxx_destruct;
- (id)description;
- (void)_applyToString:(id)arg1;
- (void)applyToString:(id)arg1;
- (id)renamedWith:(id)arg1;
- (void)updateInsertTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;
- (void)retainTemporaryIDsInManager:(id)arg1 copyingFrom:(id)arg2;
- (BOOL)hasTemporaryIDs;
- (id)temporaryIDs;
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;
- (void)dealloc;
- (id)init;

@end

