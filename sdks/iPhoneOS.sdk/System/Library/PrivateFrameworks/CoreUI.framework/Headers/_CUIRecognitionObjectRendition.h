//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/_CUIRawDataRendition.h>

__attribute__((visibility("hidden")))
@interface _CUIRecognitionObjectRendition : _CUIRawDataRendition
{
    int _objectVersion;
    CDStruct_14d5dc5e _transformation;
}

- (CDStruct_14d5dc5e)transformation;
- (int)objectVersion;
- (void)_initalizeMetadataFromCSIData:(const struct _csiheader )arg1;
- (id)_initWithCSIHeader:(const struct _csiheader )arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken )arg2 artworkStatus:(long long)arg3;

@end

