//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class GQDImageBinary;

__attribute__((visibility("hidden")))
@interface GQDFilteredImage : NSObject <GQDNameMappable>
{
    GQDImageBinary *mOriginalImageBinary;
    GQDImageBinary *mFilteredImageBinary;
}

+ (const struct StateSpec )stateForReading;
- (void)dealloc;
- (id)imageBinary;

@end

