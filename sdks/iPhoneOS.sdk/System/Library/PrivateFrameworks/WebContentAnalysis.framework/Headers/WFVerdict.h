//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WFLSMResult;

__attribute__((visibility("hidden")))
@interface WFVerdict : NSObject
{
    BOOL restricted;
    WFLSMResult *LSMEvaluationResult;
    NSString *message;
    NSString *URL;
    int evidence;
}

+ (id)verdictWithRestriction:(BOOL)arg1 URL:(id)arg2 evidence:(int)arg3 LSMEvaluationResult:(id)arg4 message:(id)arg5;
- (void)dealloc;
- (id)description;
- (void)setEvidence:(int)arg1;
- (int)evidence;
- (void)setURL:(id)arg1;
- (id)URL;
- (void)setMessage:(id)arg1;
- (id)message;
- (void)setLSMEvaluationResult:(id)arg1;
- (id)LSMEvaluationResult;
- (void)setRestricted:(BOOL)arg1;
- (BOOL)restricted;

@end

