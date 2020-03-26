//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/PQLValuable-Protocol.h>

@class NSData, NSNumber, NSString;

@interface BRCGenerationID : NSObject <NSCopying, NSSecureCoding, PQLValuable>
{
    unsigned int _generationID;
    NSData *_signature;
}

+ (id)newFromSqliteValue:(struct sqlite3_value )arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSData *signature; // @synthesize signature=_signature;
// - (void).cxx_destruct;
- (BOOL)isEqualToFSGenerationID:(unsigned int)arg1;
- (BOOL)isEqualToGenerationID:(id)arg1 orSignature:(id)arg2;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (void)sqliteBind:(struct sqlite3_stmt )arg1 index:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithRelativePath:(id)arg1;
- (id)initWithFSGenerationID:(unsigned int)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithSignature:(const void )arg1 length:(NSUInteger)arg2;
@property(readonly, nonatomic) const char UTF8String;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *generationIDString;
@property(readonly, nonatomic) NSNumber *fsGenerationID;

@end

