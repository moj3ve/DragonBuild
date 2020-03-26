//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoVision/PVObject.h>

@class NSArray, NSString;

@interface PVFaceGroup : PVObject
{
    long long _personBuilderState;
    NSString *_personLocalIdentifier;
    NSString *_representativeFaceLocalIdentifier;
    NSArray *_faces;
}

@property(retain, nonatomic) NSArray *faces; // @synthesize faces=_faces;
@property(copy, nonatomic) NSString *representativeFaceLocalIdentifier; // @synthesize representativeFaceLocalIdentifier=_representativeFaceLocalIdentifier;
@property(copy, nonatomic) NSString *personLocalIdentifier; // @synthesize personLocalIdentifier=_personLocalIdentifier;
@property(nonatomic) long long personBuilderState; // @synthesize personBuilderState=_personBuilderState;
// - (void).cxx_destruct;
- (id)description;
- (void)_setPropertiesFrom:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithFaceGroup:(id)arg1;

@end

