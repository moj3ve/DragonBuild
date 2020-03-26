//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPLazyReferenceDelegate-Protocol.h>
#import <iWorkImport/TSPReaderDelegate-Protocol.h>

@class NSError, NSHashTable, NSMutableArray, NSUUID, TSPCancellationState;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPReadCoordinatorBase : NSObject <TSPReaderDelegate, TSPLazyReferenceDelegate>
{
    NSObject<OS_dispatch_queue> *_errorQueue;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_lazyReferenceQueue;
    NSHashTable *_lazyReferences;
    NSHashTable *_lazyReferenceCopies;
    NSMutableArray *_lazyReferenceObserverBlocks;
    NSObject<OS_dispatch_queue> *_externalReferenceQueue;
    struct unordered_map<long long, TSP::ExternalReferenceInfo, TSP::ObjectIdentifierHash, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ExternalReferenceInfo>>> _externalReferences;
    struct vector<TSP::RepeatedExternalReferenceCompletionInfo, std::__1::allocator<TSP::RepeatedExternalReferenceCompletionInfo>> _repeatedExternalReferences;
    BOOL _success;
    TSPCancellationState *_cancellationState;
}

@property(retain, nonatomic) TSPCancellationState *cancellationState; // @synthesize cancellationState=_cancellationState;
@property(readonly, nonatomic) BOOL success; // @synthesize success=_success;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)lazyReference:(id)arg1 didCreateCopy:(id)arg2;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forLazyReference:(id)arg3;
- (BOOL)readLazyReference:(id)arg1 object:(id )arg2 error:(id )arg3;
- (id)objectForIdentifier:(long long)arg1;
- (void)reader:(id)arg1 didReadLazyReference:(id)arg2;
- (void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 fromParentObject:(id)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(BOOL)arg4 allowUnknownObject:(BOOL)arg5 fromParentObject:(id)arg6 completion:(id /* CDUnknownBlockType */)arg7;
- (struct ExternalReferenceInfo )externalReferenceInfoForObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2;
- (id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2;
- (long long)reader:(id)arg1 wantsObjectIdentifierForUUID:(id)arg2;
- (id)cancellationStateForReader:(id)arg1;
- (id)lazyReferenceDelegateForReader:(id)arg1;
- (id)objectDelegateForReader:(id)arg1;
- (id)contextForReader:(id)arg1;
@property(readonly, nonatomic) BOOL canRetainObjectReferencedByWeakLazyReference;
@property(readonly, nonatomic) long long sourceType;
@property(readonly, nonatomic) BOOL hasDocumentVersionUUID;
@property(readonly, nonatomic) BOOL isReadingFromDocument;
@property(readonly, nonatomic) NSUUID *baseObjectUUID;
@property(readonly, nonatomic) unsigned char packageIdentifier;
@property(readonly, nonatomic) NSUInteger fileFormatVersion;
- (void)didReferenceExternalObject:(id)arg1 withIdentifier:(long long)arg2;
- (id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(BOOL)arg3;
- (id)unarchivedObjectForIdentifier:(long long)arg1 isReadFinished:(BOOL)arg2;
- (id)context;
- (void)didUpdateLazyReferenceDelegate:(id)arg1;
- (void)setLazyReferencesDelegateToObjectContext;
- (BOOL)resolveExternalReferences;
@property(retain) NSError *error;
- (id)init;

@end

