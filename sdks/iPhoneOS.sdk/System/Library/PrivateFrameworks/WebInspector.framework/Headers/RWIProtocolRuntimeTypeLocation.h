//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolRuntimeTypeLocation : RWIProtocolJSONObject
{
}

@property(nonatomic) int divot;
@property(copy, nonatomic) NSString *sourceID;
@property(nonatomic) int typeInformationDescriptor;
- (id)initWithTypeInformationDescriptor:(int)arg1 sourceID:(id)arg2 divot:(int)arg3;

@end

