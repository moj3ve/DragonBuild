//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PptMetaCharacterBlock : NSObject
{
    int mType;
    int mPosition;
    int mExtraData;
}

- (int)extraData;
- (void)setPosition:(int)arg1;
- (int)position;
- (id)initWithType:(int)arg1 position:(int)arg2 extraData:(int)arg3;
- (id)initWithType:(int)arg1 position:(int)arg2;
- (int)type;

@end

