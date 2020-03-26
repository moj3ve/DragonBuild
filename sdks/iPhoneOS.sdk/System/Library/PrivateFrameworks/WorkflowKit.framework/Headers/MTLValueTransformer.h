//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

#import <WorkflowKit/MTLTransformerErrorHandling-Protocol.h>

@interface MTLValueTransformer : NSValueTransformer <MTLTransformerErrorHandling>
{
    id /* CDUnknownBlockType */ _forwardBlock;
    id /* CDUnknownBlockType */ _reverseBlock;
}

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;
+ (id)transformerUsingForwardBlock:(id /* CDUnknownBlockType */)arg1 reverseBlock:(id /* CDUnknownBlockType */)arg2;
+ (id)transformerUsingReversibleBlock:(id /* CDUnknownBlockType */)arg1;
+ (id)transformerUsingForwardBlock:(id /* CDUnknownBlockType */)arg1;
+ (id)reversibleTransformerWithForwardBlock:(id /* CDUnknownBlockType */)arg1 reverseBlock:(id /* CDUnknownBlockType */)arg2;
+ (id)reversibleTransformerWithBlock:(id /* CDUnknownBlockType */)arg1;
+ (id)transformerWithBlock:(id /* CDUnknownBlockType */)arg1;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ reverseBlock; // @synthesize reverseBlock=_reverseBlock;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ forwardBlock; // @synthesize forwardBlock=_forwardBlock;
// - (void).cxx_destruct;
- (id)transformedValue:(id)arg1 success:(BOOL )arg2 error:(id )arg3;
- (id)transformedValue:(id)arg1;
- (id)initWithForwardBlock:(id /* CDUnknownBlockType */)arg1 reverseBlock:(id /* CDUnknownBlockType */)arg2;

@end

