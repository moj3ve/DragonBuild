//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HDBackgroundTaskClient : NSObject
{
    id /* CDUnknownBlockType */ _taskHandler;
}

// - (void).cxx_destruct;
- (void)deliverTask:(id)arg1 taskName:(id)arg2 onQueue:(id)arg3;
- (id)initWithTaskHandler:(id /* CDUnknownBlockType */)arg1;

@end

