//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCKEventItem : NSObject
{
    CDStruct_68f9d01f _event;
    unsigned int _pid;
}

@property unsigned int pid; // @synthesize pid=_pid;
@property CDStruct_68f9d01f event; // @synthesize event=_event;
- (void)dealloc;
- (id)initWithEvent:(CDStruct_68f9d01f )arg1 remotePeer:(unsigned int)arg2;
- (id)init;

@end

