//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSPerson;

@interface CLSPersonResult : NSObject
{
    float _confidence;
    CLSPerson *_person;
}

+ (id)personResultWithPerson:(id)arg1 andConfidence:(float)arg2;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) CLSPerson *person; // @synthesize person=_person;
// - (void).cxx_destruct;
- (id)description;
- (void)mergeWithResult:(id)arg1;
- (BOOL)isSamePersonAsResult:(id)arg1;

@end

