//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPCancellable-Protocol.h>

@class NSDictionary, NSError, NSString;
@protocol FPCancellable;

@protocol FPOperationClient <FPCancellable>
- (void)setCancellationHandler:(id <FPCancellable>)arg1;
- (NSString *)proxifiedDescription;

@optional
- (void)operationDidProgressWithInfo:(NSDictionary *)arg1 error:(NSError *)arg2 completionHandler:(void (^)(void))arg3;
@end

