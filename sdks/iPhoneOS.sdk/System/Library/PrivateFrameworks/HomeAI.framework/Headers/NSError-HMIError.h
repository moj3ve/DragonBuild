//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (HMIError)
+ (id)hmiPrivateErrorWithCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (id)hmiPrivateErrorWithCode:(long long)arg1 description:(id)arg2;
+ (id)hmiPrivateErrorWithCode:(long long)arg1;
+ (id)hmiPrivateErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)hmiErrorWithCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (id)hmiErrorWithCode:(long long)arg1 description:(id)arg2;
+ (id)hmiErrorWithCode:(long long)arg1;
+ (id)hmiErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)_hmiErrorWithCode:(NSUInteger)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
@end

