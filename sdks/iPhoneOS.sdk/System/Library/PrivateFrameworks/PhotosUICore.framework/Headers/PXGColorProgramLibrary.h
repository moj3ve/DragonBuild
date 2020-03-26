//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol MTLDevice;

@interface PXGColorProgramLibrary : NSObject
{
    NSMutableArray *_programs;
//     struct os_unfair_lock_s _lock;
    id <MTLDevice> _device;
    CGColorSpace _destinationColorSpace;
}

@property(readonly, nonatomic) CGColorSpace destinationColorSpace; // @synthesize destinationColorSpace=_destinationColorSpace;
@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
// - (void).cxx_destruct;
- (id)colorProgramForSourceColorSpace:(CGColorSpace )arg1 flags:(NSUInteger)arg2;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithDevice:(id)arg1 destinationColorSpace:(CGColorSpace )arg2;

@end

