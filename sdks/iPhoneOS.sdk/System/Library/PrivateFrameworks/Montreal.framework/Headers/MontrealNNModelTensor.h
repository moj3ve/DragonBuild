//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Montreal/MontrealNNDescription.h>

#import <Montreal/MontrealNNDescriptionProtocol-Protocol.h>

@class NSArray, NSHashTable, NSString;

@interface MontrealNNModelTensor : MontrealNNDescription <NSCopying, MontrealNNDescriptionProtocol>
{
    NSString *_name;
    NSArray *_dimension;
    NSHashTable *_asInput;
    NSHashTable *_asOutput;
}

+ (id)createOutputs:(CDStruct_96916c69 )arg1 outputChunks:(id)arg2 nodeName:(id)arg3;
+ (id)createInputs:(CDStruct_96916c69 )arg1 inputChunks:(id)arg2 nodeName:(id)arg3;
@property(readonly) NSHashTable *asOutput; // @synthesize asOutput=_asOutput;
@property(readonly) NSHashTable *asInput; // @synthesize asInput=_asInput;
@property(readonly) NSArray *dimension; // @synthesize dimension=_dimension;
@property(readonly) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (id)jsonDescription;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (NSUInteger)tensorSize;
- (id)initWithName:(id)arg1 dimension:(id)arg2;
- (id)checkForValidity;

@end

