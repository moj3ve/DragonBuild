//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVCPacketRelayConnection : NSObject
{
}

+ (id)connectionWithIDSSocketDescriptor:(unsigned short)arg1;
+ (id)connectionWithIDSDestination:(id)arg1;
+ (id)connectionWithSocket:(unsigned short)arg1 remoteAddress:(id)arg2 packetFilter:(id)arg3;
+ (id)connectionWithSocket:(unsigned short)arg1 remoteAddress:(id)arg2;
+ (id)connectionWithSocket:(unsigned short)arg1;

@end

