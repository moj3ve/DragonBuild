//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Transparency/GPBDictionaryInternalsProtocol-Protocol.h>

@class GPBMessage, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GPBInt32ObjectDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

- (void)removeAll;
- (void)removeObjectForKey:(int)arg1;
- (void)setObject:(id)arg1 forKey:(int)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)objectForKey:(int)arg1;
- (void)enumerateForTextFormat:(id /* CDUnknownBlockType */)arg1;
- (void)setGPBGenericValue:(CDUnion_88782d86 )arg1 forGPBGenericValueKey:(CDUnion_88782d86 )arg2;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (NSUInteger)computeSerializedSizeAsField:(id)arg1;
- (id)deepCopyWithZone:(_NSZone )arg1;
- (BOOL)isInitialized;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) NSUInteger count;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithCapacity:(NSUInteger)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithObjects:(const id )arg1 forKeys:(const int )arg2 count:(NSUInteger)arg3;
- (id)init;

@end

