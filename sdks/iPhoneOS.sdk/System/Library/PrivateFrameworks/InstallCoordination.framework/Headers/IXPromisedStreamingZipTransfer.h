//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InstallCoordination/IXOwnedDataPromise.h>

#import <InstallCoordination/SZExtractor-Protocol.h>
#import <InstallCoordination/SZExtractorDelegate-Protocol.h>

@class SZExtractor;
@protocol SZExtractorDelegate;

@interface IXPromisedStreamingZipTransfer : IXOwnedDataPromise <SZExtractorDelegate, NSSecureCoding, SZExtractor>
{
    BOOL _needsConsume;
    id <SZExtractorDelegate> _extractorDelegate;
    SZExtractor *_extractor;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL needsConsume; // @synthesize needsConsume=_needsConsume;
@property(retain, nonatomic) SZExtractor *extractor; // @synthesize extractor=_extractor;
@property(nonatomic) __weak id <SZExtractorDelegate> extractorDelegate; // @synthesize extractorDelegate=_extractorDelegate;
// - (void).cxx_destruct;
- (Class)seedClass;
- (id)initWithSeed:(id)arg1;
- (void)extractionEnteredPassThroughMode;
- (void)extractionCompleteAtArchivePath:(id)arg1;
- (void)setExtractionProgress:(double)arg1;
- (void)addArchiveBytesConsumed:(NSUInteger)arg1;
@property(nonatomic) NSUInteger archiveBytesConsumed; // @dynamic archiveBytesConsumed;
- (BOOL)consumeExtractedDataIfNeeded;
@property(readonly, nonatomic) BOOL doesConsumeExtractedData; // @dynamic doesConsumeExtractedData;
- (void)resetWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)terminateStreamWithError:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)finishStreamWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)suspendStreamWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)supplyBytes:(id)arg1 withCompletionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)_prepareForExtractionToPath:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)prepareForExtractionToPath:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)prepareForExtraction:(id /* CDUnknownBlockType */)arg1;
- (id)initWithName:(id)arg1 client:(NSUInteger)arg2 streamingZipOptions:(id)arg3 archiveSize:(NSUInteger)arg4 diskSpaceNeeded:(NSUInteger)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

