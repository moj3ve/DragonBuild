//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUSourceDefinition.h>

@class NSArray;

@interface NUMultipleSourceDefinition : NUSourceDefinition
{
    NSArray *_sourceDefinitions;
}

@property(readonly) NSArray *sourceDefinitions; // @synthesize sourceDefinitions=_sourceDefinitions;
// - (void).cxx_destruct;
- (id)description;
- (long long)mediaType;
- (id)initWithSourceDefinitions:(id)arg1;
- (id)init;
- (id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id )arg2;

@end

