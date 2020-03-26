//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMapTable;

@interface FCSetValueMapTable : NSObject <NSCopying, NSMutableCopying>
{
    NSMapTable *_backingMapTable;
}

@property(retain, nonatomic) NSMapTable *backingMapTable; // @synthesize backingMapTable=_backingMapTable;
// - (void).cxx_destruct;
- (id)_setForKey:(id)arg1;
- (id)objectEnumerator;
- (id)keyEnumerator;
- (void)removeObjectsForKey:(id)arg1;
- (id)objectsForKey:(id)arg1;
- (void)addObjects:(id)arg1 forKey:(id)arg2;
- (void)removeObject:(id)arg1 forKey:(id)arg2;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (id)description;

@end

