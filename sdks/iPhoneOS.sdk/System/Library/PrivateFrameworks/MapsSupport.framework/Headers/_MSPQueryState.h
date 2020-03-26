//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _MSPQueryState : NSObject
{
    NSArray *_contents;
    NSArray *_identifiers;
}

@property(readonly) NSArray *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly) NSArray *contents; // @synthesize contents=_contents;
// - (void).cxx_destruct;
- (id)stateByMovingObjectAtIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2;
- (id)stateByDeletingObjectsAtIndexes:(id)arg1;
- (id)stateByDeletingObjectAtIndex:(NSUInteger)arg1;
- (id)stateByInvokingPreprocessingBlock:(id /* CDUnknownBlockType */)arg1 mappingBlock:(id /* CDUnknownBlockType */)arg2;
- (id)initWithContents:(id)arg1 identifiers:(id)arg2;
- (id)initWithContainerContents:(id)arg1;

@end

