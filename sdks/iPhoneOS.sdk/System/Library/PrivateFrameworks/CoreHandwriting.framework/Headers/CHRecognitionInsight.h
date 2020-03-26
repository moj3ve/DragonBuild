//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CHDrawing, CHRecognitionInsightRequest, CHTokenizedTextResult, NSArray, NSCharacterSet, NSDictionary, NSError, NSLocale, NSString;

@interface CHRecognitionInsight : NSObject
{
    int _recognizerRecognitionMode;
    int _recognizerContentType;
    CHRecognitionInsightRequest *_insightRequest;
    NSLocale *_recognizerLocale;
    NSCharacterSet *_recognizerActiveCharacterSet;
    NSDictionary *_recognizerOptions;
    NSUInteger _recognizerMaxRecognitionResultCount;
    CHDrawing *_inputDrawing;
    NSArray *_inputDrawingCutPoints;
    NSArray *_spaceProbabilities;
    NSArray *_charBoundaryProbabilities;
    NSArray *_delayedStrokeProbabilities;
    CHTokenizedTextResult *_textResult;
    NSError *_recognitionError;
    CGSize _recognizerMinimumDrawingSize;
}

@property(copy, nonatomic) NSError *recognitionError; // @synthesize recognitionError=_recognitionError;
@property(copy, nonatomic) CHTokenizedTextResult *textResult; // @synthesize textResult=_textResult;
@property(copy, nonatomic) NSArray *delayedStrokeProbabilities; // @synthesize delayedStrokeProbabilities=_delayedStrokeProbabilities;
@property(copy, nonatomic) NSArray *charBoundaryProbabilities; // @synthesize charBoundaryProbabilities=_charBoundaryProbabilities;
@property(copy, nonatomic) NSArray *spaceProbabilities; // @synthesize spaceProbabilities=_spaceProbabilities;
@property(copy, nonatomic) NSArray *inputDrawingCutPoints; // @synthesize inputDrawingCutPoints=_inputDrawingCutPoints;
@property(copy, nonatomic) CHDrawing *inputDrawing; // @synthesize inputDrawing=_inputDrawing;
@property(nonatomic) CGSize recognizerMinimumDrawingSize; // @synthesize recognizerMinimumDrawingSize=_recognizerMinimumDrawingSize;
@property(nonatomic) NSUInteger recognizerMaxRecognitionResultCount; // @synthesize recognizerMaxRecognitionResultCount=_recognizerMaxRecognitionResultCount;
@property(copy, nonatomic) NSDictionary *recognizerOptions; // @synthesize recognizerOptions=_recognizerOptions;
@property(copy, nonatomic) NSCharacterSet *recognizerActiveCharacterSet; // @synthesize recognizerActiveCharacterSet=_recognizerActiveCharacterSet;
@property(nonatomic) int recognizerContentType; // @synthesize recognizerContentType=_recognizerContentType;
@property(nonatomic) int recognizerRecognitionMode; // @synthesize recognizerRecognitionMode=_recognizerRecognitionMode;
@property(copy, nonatomic) NSLocale *recognizerLocale; // @synthesize recognizerLocale=_recognizerLocale;
@property(retain, nonatomic) CHRecognitionInsightRequest *insightRequest; // @synthesize insightRequest=_insightRequest;
@property(readonly, nonatomic) NSString *recognizerContentTypeDescription;
@property(readonly, nonatomic) NSString *recognizerRecognitionModeDescription;
- (void)dealloc;
- (id)description;
- (void)recordTextResult:(id)arg1 recognitionError:(id)arg2;
- (void)recordDelayedStrokeProbabilities:(const vector_8f06c10f )arg1;
- (void)recordCharBoundaryProbabilities:(const vector_8f06c10f )arg1;
- (void)recordSpaceProbabilities:(const vector_8f06c10f )arg1;
- (void)recordInputDrawingCutPoints:(id)arg1;
- (void)recordInputDrawing:(id)arg1;
- (void)recordConfigurationForRecognizer:(id)arg1 options:(id)arg2;
- (void)recordInsightRequest:(id)arg1;

@end

