//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, XCTestExpectation;

@interface CLIntersiloServiceMockPayload : NSObject
{
    BOOL _inUse;
    XCTestExpectation *_expectation;
    NSDictionary *_inputDictionary;
    NSDictionary *_outputDictionary;
}

@property(nonatomic) BOOL inUse; // @synthesize inUse=_inUse;
@property(readonly, nonatomic) NSDictionary *outputDictionary; // @synthesize outputDictionary=_outputDictionary;
@property(readonly, nonatomic) NSDictionary *inputDictionary; // @synthesize inputDictionary=_inputDictionary;
@property(readonly, nonatomic) XCTestExpectation *expectation; // @synthesize expectation=_expectation;
// - (void).cxx_destruct;
- (void)setOutput:(id)arg1 forKey:(id)arg2;
- (id)initWithExpectation:(id)arg1 inputDictionary:(id)arg2;

@end

