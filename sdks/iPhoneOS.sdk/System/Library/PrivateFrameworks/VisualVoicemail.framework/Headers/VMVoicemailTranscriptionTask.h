//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VMVoicemailTranscriptionController;
@protocol OS_dispatch_queue;

@interface VMVoicemailTranscriptionTask : NSObject
{
    BOOL _taskRunning;
    BOOL _hasInsomniaAssertion;
    VMVoicemailTranscriptionController *_transcriptionController;
    NSObject<OS_dispatch_queue> *_taskQueue;
}

+ (void)resetRetranscriptionTaskState;
@property(nonatomic) BOOL hasInsomniaAssertion; // @synthesize hasInsomniaAssertion=_hasInsomniaAssertion;
@property(nonatomic, getter=isTaskRunning) BOOL taskRunning; // @synthesize taskRunning=_taskRunning;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(nonatomic) __weak VMVoicemailTranscriptionController *transcriptionController; // @synthesize transcriptionController=_transcriptionController;
// - (void).cxx_destruct;
- (void)retranscribeAllVoicemails;
- (void)_endRetranscribingTask;
- (void)_startRetranscribingVoicemailsIfNecessaryTranscribingAllVoicemails:(BOOL)arg1;
- (void)processTranscriptForVoicemail:(id)arg1;
- (id)allVoicemailsTranscribedWithoutConfidence;
- (BOOL)voicemailWasTranscribedWithoutConfidence:(id)arg1;
- (id)allVoicemailsWithoutTranscription;
- (id)allVoicemailsWithTranscription;
- (id)allVoicemails;
- (id)voicemailsMatchingFlags:(unsigned int)arg1 withoutFlags:(unsigned int)arg2;
- (BOOL)alreadyAttemptedVoicemailTranscriptionForVoicemail:(id)arg1;
- (void)cancelAttemptedVoicemailTranscriptionForVoicemail:(id)arg1;
- (void)setAttemptedVoicemailTranscriptionForVoicemail:(id)arg1;
- (BOOL)confidenceModelExistsOnDevice;
- (BOOL)speechAssetHasConfidenceModel:(id)arg1;
- (id)speechAssetsWithConfidenceModelsOnDevice;
- (id)speechAssetsOnDevice;
- (BOOL)deviceHasSpeechAssets;
- (BOOL)shouldRunTranscriptionTask;
- (id)lastTaskExecutionDate;
- (void)setLastExecutionDate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

