//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CKTiledLayoutGeneratorScanState : NSObject
{
    BOOL _scannedBatchHasCaption;
    long long _scanLocation;
    id _scannedBatchID;
    long long _scanSpecialSequenceCount;
}

@property(nonatomic) long long scanSpecialSequenceCount; // @synthesize scanSpecialSequenceCount=_scanSpecialSequenceCount;
@property(nonatomic) BOOL scannedBatchHasCaption; // @synthesize scannedBatchHasCaption=_scannedBatchHasCaption;
@property(retain, nonatomic) id scannedBatchID; // @synthesize scannedBatchID=_scannedBatchID;
@property(nonatomic) long long scanLocation; // @synthesize scanLocation=_scanLocation;
// - (void).cxx_destruct;

@end

