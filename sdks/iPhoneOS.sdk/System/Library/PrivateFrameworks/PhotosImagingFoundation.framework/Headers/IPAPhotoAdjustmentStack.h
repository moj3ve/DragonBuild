//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosImagingFoundation/IPAAdjustmentStack.h>

@class IPAPhotoAdjustmentPipeline;

@interface IPAPhotoAdjustmentStack : IPAAdjustmentStack
{
    long long _orientation;
    IPAPhotoAdjustmentPipeline *_pipeline;
    struct PFIntSize_st _inputSize;
}

@property(retain, nonatomic) IPAPhotoAdjustmentPipeline *pipeline; // @synthesize pipeline=_pipeline;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) struct PFIntSize_st inputSize; // @synthesize inputSize=_inputSize;
// - (void).cxx_destruct;
- (id)_debugDescriptionSuffix;
- (id)maskUUIDs;
- (id)minimumVersionForFormat:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

