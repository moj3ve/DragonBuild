//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKLabelNavTrafficFeature.h>

@class VKTrafficSignalFeature;

__attribute__((visibility("hidden")))
@interface VKLabelNavTrafficSignal : VKLabelNavTrafficFeature
{
    VKTrafficSignalFeature *_trafficSignal;
}

@property(readonly, nonatomic) VKTrafficSignalFeature *trafficSignal; // @synthesize trafficSignal=_trafficSignal;
- (shared_ptr_ed5e0db7)createIcon:(struct NavContext )arg1;
- (void)dealloc;
- (id)initWithTrafficSignal:(id)arg1 previousMercatorPoint:(const Mercator2_57ec32b6 )arg2 nextMercatorPoint:(const Mercator2_57ec32b6 )arg3;

@end

