//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CalDefaultDictionary, NSDictionary, NSMutableDictionary;

@interface CUIKObjectGroup : NSObject
{
    NSDictionary *_originalObjectMap;
    NSMutableDictionary *_objectMap;
    CalDefaultDictionary *_spawnedObjectIdentifiers;
}

@property(retain) CalDefaultDictionary *spawnedObjectIdentifiers; // @synthesize spawnedObjectIdentifiers=_spawnedObjectIdentifiers;
@property(retain) NSMutableDictionary *objectMap; // @synthesize objectMap=_objectMap;
@property(retain) NSDictionary *originalObjectMap; // @synthesize originalObjectMap=_originalObjectMap;
// - (void).cxx_destruct;

@end

