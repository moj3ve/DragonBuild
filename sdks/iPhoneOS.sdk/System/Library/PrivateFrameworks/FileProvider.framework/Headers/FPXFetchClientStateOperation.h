//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPOperation.h>

@class CSSearchableIndex, FPXDomainContext, NSString;

__attribute__((visibility("hidden")))
@interface FPXFetchClientStateOperation : FPOperation
{
    CSSearchableIndex *_index;
    NSString *_indexName;
    NSString *_domainIdentifier;
    NSString *_reason;
    FPXDomainContext *_domainContext;
}

+ (id)_currentIndexerVersion;
// - (void).cxx_destruct;
- (void)main;
- (void)_fetchClientState;
- (void)_handleFetchedClientState:(id)arg1 error:(id)arg2;
- (void)_markClientStateResetDone;
- (id)_clientStateCurrentVersionIfNeedReset;
- (id)operationDescription;
- (id)initWithIndex:(id)arg1 context:(id)arg2 indexName:(id)arg3 domainID:(id)arg4 reason:(id)arg5;

@end

