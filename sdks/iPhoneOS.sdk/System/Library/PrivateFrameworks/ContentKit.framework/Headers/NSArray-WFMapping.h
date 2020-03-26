//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

#import <ContentKit/WFJSONObject-Protocol.h>
#import <ContentKit/WFJavaScriptCoreBridgeableObject-Protocol.h>
#import <ContentKit/WFPropertyListObject-Protocol.h>

@interface NSArray (WFMapping) <WFPropertyListObject, WFJavaScriptCoreBridgeableObject, WFJSONObject>
- (void)transformObjectsUsingAsynchronousBlock:(id /* CDUnknownBlockType */)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2 queue:(id)arg3;
- (void)transformObjectsUsingAsynchronousBlock:(id /* CDUnknownBlockType */)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)filteredObjectsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)mapAndFilterObjectsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)mapObjectsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)objectsNotMatchingClass:(Class)arg1;
- (id)objectsMatchingClass:(Class)arg1;
- (id)objectMatchingKey:(id)arg1 intValue:(int)arg2;
- (id)objectMatchingKey:(id)arg1 boolValue:(BOOL)arg2;
- (id)objectMatchingKey:(id)arg1 value:(id)arg2;
- (id)wf_firstObjectMatchingPredicate:(id)arg1;
- (id)filteredArrayForKey:(id)arg1 intValue:(int)arg2;
- (id)filteredArrayForKey:(id)arg1 boolValue:(BOOL)arg2;
- (id)filteredArrayForKey:(id)arg1 value:(id)arg2;
- (void)enumerateObjectsSequentiallyUsingAsynchronousBlock:(id /* CDUnknownBlockType */)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)enumerateObjectsUsingAsynchronousBlock:(id /* CDUnknownBlockType */)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)safeObjectAtIndex:(NSUInteger)arg1;
- (void)sortedArrayUsingContentSortDescriptors:(id)arg1 propertySubstitutor:(id /* CDUnknownBlockType */)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)sortedArrayUsingContentSortDescriptors:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
@end

