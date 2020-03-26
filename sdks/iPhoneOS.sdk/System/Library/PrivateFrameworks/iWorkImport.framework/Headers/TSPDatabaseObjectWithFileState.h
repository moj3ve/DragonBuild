//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPDatabaseObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface TSPDatabaseObjectWithFileState : TSPDatabaseObject
{
    NSString *_fileState;
    NSURL *_packageURL;
}

// - (void).cxx_destruct;
- (id)fileURL;
- (id)fileState;
- (BOOL)hasFileState;
- (long long)dataState;
- (BOOL)hasDataState;
- (id)initWithIdentifier:(long long)arg1 classType:(int)arg2 fileState:(id)arg3 packageURL:(id)arg4;

@end

