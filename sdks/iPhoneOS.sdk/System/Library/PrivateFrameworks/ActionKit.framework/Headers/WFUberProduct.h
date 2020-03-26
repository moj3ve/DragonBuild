//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/MTLModel.h>

#import <ActionKit/MTLJSONSerializing-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface WFUberProduct : MTLModel <NSSecureCoding, MTLJSONSerializing>
{
    BOOL _shared;
    NSString *_productId;
    NSString *_productDescription;
    NSUInteger _productGroup;
    NSString *_displayName;
    NSNumber *_capacity;
    NSURL *_pictureURL;
}

+ (id)productWithProductId:(id)arg1;
+ (id)productGroupJSONTransformer;
+ (id)pictureURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL shared; // @synthesize shared=_shared;
@property(readonly, nonatomic) NSURL *pictureURL; // @synthesize pictureURL=_pictureURL;
@property(readonly, nonatomic) NSNumber *capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSUInteger productGroup; // @synthesize productGroup=_productGroup;
@property(readonly, nonatomic) NSString *productDescription; // @synthesize productDescription=_productDescription;
@property(readonly, nonatomic) NSString *productId; // @synthesize productId=_productId;
// - (void).cxx_destruct;
- (id)initWithProductId:(id)arg1;

@end

