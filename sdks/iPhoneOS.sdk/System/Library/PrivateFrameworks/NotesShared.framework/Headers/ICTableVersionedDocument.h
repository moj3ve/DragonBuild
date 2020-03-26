//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/TTVersionedDocument.h>

@class CRDocument, ICTable, NSUUID;

@interface ICTableVersionedDocument : TTVersionedDocument
{
    NSUUID *_replica;
    CRDocument *_innerTableDocument;
    ICTable *_table;
}

+ (id)tableDocWithColumnCount:(NSUInteger)arg1 rowCount:(NSUInteger)arg2;
+ (id)tableDoc;
+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;
@property(retain, nonatomic) ICTable *table; // @synthesize table=_table;
// - (void).cxx_destruct;
- (id)serializeCurrentVersion:(unsigned int )arg1;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
@property(readonly) CRDocument *innerTableDocument; // @synthesize innerTableDocument=_innerTableDocument;
@property(readonly, nonatomic) NSUUID *replica; // @synthesize replica=_replica;
- (NSUInteger)mergeWithTableVersionedDocument:(id)arg1;

@end

