//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AFDataStore : NSObject
{
    NSMutableDictionary *_entries;
}

// - (void).cxx_destruct;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)propertyListRepresentation;
- (id)imageDataForKey:(id)arg1;
- (void)setImageData:(id)arg1 forKey:(id)arg2;
- (id)init;
- (id)initWithEntries:(id)arg1;

@end

