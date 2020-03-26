//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/STSiriModelObject.h>

#import <AssistantServices/AFTranscriptionType-Protocol.h>

@class NSSet, NSString;

@interface STPerson : STSiriModelObject <AFTranscriptionType>
{
    NSSet *_contactHandles;
    NSString *_fullName;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(copy, nonatomic) NSSet *contactHandles; // @synthesize contactHandles=_contactHandles;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;

@end

