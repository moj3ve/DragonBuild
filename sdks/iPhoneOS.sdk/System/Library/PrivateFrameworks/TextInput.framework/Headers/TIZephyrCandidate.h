//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TIKeyboardCandidateSingle.h>

@class NSString, TIProactiveTrigger, _ICPredictedItem;

@interface TIZephyrCandidate : TIKeyboardCandidateSingle
{
    BOOL _isFromPhraseDictionary;
    BOOL _isFromTextChecker;
    BOOL _isSecureContentCandidate;
    BOOL _continuousPathConversion;
    BOOL _shouldAccept;
    BOOL _shouldInsertSpaceAfterSelection;
    unsigned int _usageTrackingMask;
    int _confidence;
    NSUInteger _wordOriginFeedbackID;
    TIProactiveTrigger *_proactiveTrigger;
    NSString *_responseKitCategory;
    NSString *_fromBundleId;
    NSUInteger _ageForConnectionsMetrics;
    double _excessPathRatio;
    _ICPredictedItem *_proactivePredictedItem;
    NSString *_label;
}

+ (int)type;
+ (BOOL)supportsSecureCoding;
@property(nonatomic, getter=confidence) int confidence; // @synthesize confidence=_confidence;
@property(nonatomic, getter=shouldInsertSpaceAfterSelection) BOOL shouldInsertSpaceAfterSelection; // @synthesize shouldInsertSpaceAfterSelection=_shouldInsertSpaceAfterSelection;
@property(nonatomic, getter=shouldAccept) BOOL shouldAccept; // @synthesize shouldAccept=_shouldAccept;
@property(copy, nonatomic) _ICPredictedItem *proactivePredictedItem; // @synthesize proactivePredictedItem=_proactivePredictedItem;
@property(nonatomic) double excessPathRatio; // @synthesize excessPathRatio=_excessPathRatio;
@property(nonatomic, getter=isContinuousPathConversion) BOOL continuousPathConversion; // @synthesize continuousPathConversion=_continuousPathConversion;
@property(nonatomic) NSUInteger ageForConnectionsMetrics; // @synthesize ageForConnectionsMetrics=_ageForConnectionsMetrics;
@property(copy, nonatomic) NSString *fromBundleId; // @synthesize fromBundleId=_fromBundleId;
- (id)responseKitCategory;
- (id)proactiveTrigger;
- (BOOL)isSecureContentCandidate;
@property(nonatomic) BOOL isFromTextChecker; // @synthesize isFromTextChecker=_isFromTextChecker;
@property(nonatomic) BOOL isFromPhraseDictionary; // @synthesize isFromPhraseDictionary=_isFromPhraseDictionary;
- (unsigned int)usageTrackingMask;
// - (void).cxx_destruct;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)candidateByReplacingWithCandidate:(id)arg1 input:(id)arg2 label:(id)arg3;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isAutocorrection;
- (NSUInteger)wordOriginFeedbackID;
- (id)initWithCandidate:(id)arg1 responseKitCategory:(id)arg2;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(NSUInteger)arg3 usageTrackingMask:(unsigned int)arg4 secureContentCandidate:(BOOL)arg5 proactiveTrigger:(id)arg6 proactivePredictedItem:(id)arg7;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(NSUInteger)arg3 usageTrackingMask:(unsigned int)arg4 secureContentCandidate:(BOOL)arg5 proactiveTrigger:(id)arg6 proactivePredictedItem:(id)arg7 responseKitCategory:(id)arg8;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(NSUInteger)arg3 usageTrackingMask:(unsigned int)arg4;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(NSUInteger)arg3;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;

@end

