//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoVision/PVObject.h>

@class NSData, PVFace;

@interface PVFaceCrop : PVObject
{
    NSData *_faceCropData;
    PVFace *_originatingFace;
    CGSize _cachedImageDimensions;
    short _state;
}

@property(nonatomic) short state; // @synthesize state=_state;
// - (void).cxx_destruct;
- (id)description;
- (CGSize)imageDimensions;
- (id)originatingFace;
- (id)faceCropData;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithFaceCropData:(id)arg1 originatingFace:(id)arg2;
- (id)initWithLocalIdentifier:(id)arg1 faceCropData:(id)arg2;

@end

