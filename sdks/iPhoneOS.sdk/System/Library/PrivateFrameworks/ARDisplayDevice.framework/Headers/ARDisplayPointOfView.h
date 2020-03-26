//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData;

@interface ARDisplayPointOfView : NSObject <NSSecureCoding, NSCopying>
{
    NSData *_vertexBufferData;
    NSData *_indexBufferData;
    long long _indexCount;
    long long _indexFormat;
    long long _vertexType;
    long long _viewOrigin;
    NSUInteger _indexType;
    struct {
        double left;
        double right;
        double top;
        double bottom;
    } _fieldOfView;
    CGRect _viewArea;
    struct {
        double x;
        double y;
        double width;
        double height;
    } _view;
    CDStruct_4b2885c7 _viewport;
    CDStruct_14d5dc5e _eyeTransform;
    CDStruct_14d5dc5e _eyeToVIO;
    CDStruct_14d5dc5e _eyeToCyclops;
}

+ (BOOL)supportsSecureCoding;
@property CDStruct_14d5dc5e eyeToCyclops; // @synthesize eyeToCyclops=_eyeToCyclops;
@property CDStruct_14d5dc5e eyeToVIO; // @synthesize eyeToVIO=_eyeToVIO;
@property CDStruct_4b2885c7 viewport; // @synthesize viewport=_viewport;
@property NSUInteger indexType; // @synthesize indexType=_indexType;
@property(nonatomic) CDStruct_d2b197d1 view; // @synthesize view=_view;
@property CDStruct_14d5dc5e eyeTransform; // @synthesize eyeTransform=_eyeTransform;
@property CGRect viewArea; // @synthesize viewArea=_viewArea;
@property long long viewOrigin; // @synthesize viewOrigin=_viewOrigin;
@property CDStruct_d2b197d1 fieldOfView; // @synthesize fieldOfView=_fieldOfView;
@property long long vertexType; // @synthesize vertexType=_vertexType;
@property long long indexFormat; // @synthesize indexFormat=_indexFormat;
@property long long indexCount; // @synthesize indexCount=_indexCount;
@property(retain, nonatomic) NSData *indexBufferData; // @synthesize indexBufferData=_indexBufferData;
@property(retain, nonatomic) NSData *vertexBufferData; // @synthesize vertexBufferData=_vertexBufferData;
// - (void).cxx_destruct;
- (void)optimizeStencil;
- (void)optimizeVertexSize;
- (void)optimizeMeshViewports;
- (void)optimizeMeshComplexity;
- (void)shrinkViewport;
- (void)cropViewport:(double)arg1 screenWidth:(double)arg2 screenHeight:(double)arg3 cropXLeft:(double)arg4 cropRight:(double)arg5 cropTop:(double)arg6 cropBottom:(double)arg7;
- (void)expandViewports:(double)arg1 fullScreenWidth:(double)arg2 fullScreenHeight:(double)arg3 width:(double)arg4 height:(double)arg5 screenWidth:(double)arg6 screenHeight:(double)arg7;
- (void)mapToDeviceCoordinates:(double)arg1 fullScreenWidth:(double)arg2 fullScreenHeight:(double)arg3 screenWidth:(double)arg4 screenHeight:(double)arg5 cropX:(double)arg6 cropY:(double)arg7;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)viewOriginString;
- (id)vertexTypeToString:(long long)arg1;
- (id)indexTypeString;
@property(readonly) double fovBottom;
@property(readonly) double fovTop;
@property(readonly) double fovRight;
@property(readonly) double fovLeft;
- (void)doInit;
- (id)descriptionInternal;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

