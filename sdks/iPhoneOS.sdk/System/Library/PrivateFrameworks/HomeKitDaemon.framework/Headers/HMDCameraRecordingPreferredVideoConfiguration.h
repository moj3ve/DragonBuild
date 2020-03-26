//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HMDCameraRecordingPreferredVideoConfiguration : NSObject
{
    NSNumber *_frameRate;
    NSNumber *_bitRate;
    NSNumber *_keyFrameInterval;
    long long _resolution;
    long long _h264Level;
}

@property(readonly) long long h264Level; // @synthesize h264Level=_h264Level;
@property(readonly) long long resolution; // @synthesize resolution=_resolution;
@property(readonly) NSNumber *keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property(readonly) NSNumber *bitRate; // @synthesize bitRate=_bitRate;
@property(readonly) NSNumber *frameRate; // @synthesize frameRate=_frameRate;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithResolution:(long long)arg1 frameRate:(id)arg2 bitRate:(id)arg3 keyFrameInterval:(id)arg4 h264Level:(long long)arg5;

@end

