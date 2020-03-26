//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSDictionary;

@interface SGStringMappingTransformer : NSObject <PMLTransformerProtocol>
{
    NSDictionary *_mappings;
}

+ (id)withMappings:(id)arg1;
@property(retain) NSDictionary *mappings; // @synthesize mappings=_mappings;
// - (void).cxx_destruct;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToStringMappingTransformer:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;
- (id)initWithHelperMappingType:(id)arg1 andLanguage:(id)arg2;
- (id)initWithMappings:(id)arg1;
- (id)withHelperMappingType:(id)arg1 andLanguage:(id)arg2;

@end

