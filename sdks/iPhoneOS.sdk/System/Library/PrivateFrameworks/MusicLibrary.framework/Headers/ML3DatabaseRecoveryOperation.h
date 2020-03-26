//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSString;

@interface ML3DatabaseRecoveryOperation : NSOperation
{
    NSString *_path;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
// - (void).cxx_destruct;
- (void)_recreateDatabaseWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_updateLastCorruptionRestoreAttemptDate;
- (id)_lastCorruptionRestoreAttemptDate;
- (id)_createSQLiteErrorWithCode:(int)arg1 description:(id)arg2;
- (void)main;
- (id)initWithDatabaseFilePath:(id)arg1;

@end

