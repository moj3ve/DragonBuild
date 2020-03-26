//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCCommand.h>

@class NSString;

@interface FCSubscribeToEmailCommand : FCCommand
{
    NSString *_DSID;
    NSString *_storeFrontID;
    NSString *_primaryLanguage;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *primaryLanguage; // @synthesize primaryLanguage=_primaryLanguage;
@property(copy, nonatomic) NSString *storeFrontID; // @synthesize storeFrontID=_storeFrontID;
@property(copy, nonatomic) NSString *DSID; // @synthesize DSID=_DSID;
// - (void).cxx_destruct;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDSID:(id)arg1 storeFrontID:(id)arg2 primaryLanguage:(id)arg3;

@end

