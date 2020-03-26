//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSNumber, NSString, NSURL;

@interface BLPurchaseRequest : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _audiobook;
    BOOL _preOrder;
    BOOL _restore;
    NSString *_buyParameters;
    NSNumber *_storeIdentifier;
    NSURL *_permlink;
    NSString *_permlinkTitle;
    NSNumber *_accountIdentifier;
    NSDictionary *_analyticsInfo;
}

+ (BOOL)supportsSecureCoding;
+ (id)requestWithPermlink:(id)arg1 title:(id)arg2;
+ (id)requestWithBuyParameters:(id)arg1 storeIdentifier:(id)arg2;
@property(nonatomic, getter=isRestore) BOOL restore; // @synthesize restore=_restore;
@property(retain, nonatomic) NSDictionary *analyticsInfo; // @synthesize analyticsInfo=_analyticsInfo;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSString *permlinkTitle; // @synthesize permlinkTitle=_permlinkTitle;
@property(retain, nonatomic) NSURL *permlink; // @synthesize permlink=_permlink;
@property(retain, nonatomic) NSNumber *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(nonatomic, getter=isPreOrder) BOOL preOrder; // @synthesize preOrder=_preOrder;
@property(nonatomic, getter=isAudiobook) BOOL audiobook; // @synthesize audiobook=_audiobook;
@property(copy, nonatomic) NSString *buyParameters; // @synthesize buyParameters=_buyParameters;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

