//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface REAudioManagerNotificationListener : NSObject
{
    struct AudioManager_AVAudioEngine _owner;
}

- (void)engineInterrupted:(id)arg1;
- (void)sessionInterrupted:(id)arg1;
- (id)initWithOwner:(void )arg1;

@end

