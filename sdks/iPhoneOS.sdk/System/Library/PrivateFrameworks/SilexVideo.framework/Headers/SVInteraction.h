//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVInteraction-Protocol.h>

@interface SVInteraction : NSObject <SVInteraction>
{
    id /* CDUnknownBlockType */ interactionBlock;
    id /* CDUnknownBlockType */ _contextProvider;
}

@property(readonly, nonatomic) id /* CDUnknownBlockType */ contextProvider; // @synthesize contextProvider=_contextProvider;
@property(copy, nonatomic, setter=uponInteraction:) id /* CDUnknownBlockType */ interactionBlock; // @synthesize interactionBlock;
// - (void).cxx_destruct;
- (void)performWithObject:(id)arg1;
- (id)initWithContextProvider:(id /* CDUnknownBlockType */)arg1;

@end

