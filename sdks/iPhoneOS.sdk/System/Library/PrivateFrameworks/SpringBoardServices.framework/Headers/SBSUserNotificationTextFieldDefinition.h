//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface SBSUserNotificationTextFieldDefinition : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_title;
    NSString *_value;
    BOOL _isSecure;
    BOOL _hasSetMaxLength;
    NSUInteger _maxLength;
    long long _keyboardType;
    long long _autocorrectionType;
    long long _autocapitalizationType;
}

+ (id)_definitionsFromSerializedDefinitions:(id)arg1;
@property(readonly, nonatomic) BOOL _hasSetMaxLength; // @synthesize _hasSetMaxLength;
@property(readonly, nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(readonly, nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(readonly, nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(readonly, nonatomic) NSUInteger maxLength; // @synthesize maxLength=_maxLength;
@property(readonly, nonatomic, getter=isSecure) BOOL secure; // @synthesize secure=_isSecure;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (id)mutableCopyWithZone:(_NSZone )arg1;
- (void)_copyPropertiesToDefinition:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)build;
- (id)_initWithDictionary:(id)arg1;
- (id)init;

@end

