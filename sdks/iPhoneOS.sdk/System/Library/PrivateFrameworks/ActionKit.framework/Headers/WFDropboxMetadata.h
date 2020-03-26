//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/MTLModel.h>

#import <ActionKit/MTLJSONSerializing-Protocol.h>
#import <ActionKit/WFNaming-Protocol.h>
#import <ActionKit/WFRemoteFile-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface WFDropboxMetadata : MTLModel <WFRemoteFile, WFNaming, MTLJSONSerializing>
{
    NSString *_name;
    NSString *_path;
    NSString *_identifier;
    NSString *_revision;
    NSString *_contentHash;
    NSNumber *_fileSize;
    NSDate *_clientModifiedDate;
    NSDate *_serverModifiedDate;
    NSString *_itemKind;
}

+ (id)serverModifiedDateJSONTransformer;
+ (id)clientModifiedDateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *itemKind; // @synthesize itemKind=_itemKind;
@property(readonly, nonatomic) NSDate *serverModifiedDate; // @synthesize serverModifiedDate=_serverModifiedDate;
@property(readonly, nonatomic) NSDate *clientModifiedDate; // @synthesize clientModifiedDate=_clientModifiedDate;
@property(readonly, nonatomic) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, copy, nonatomic) NSString *contentHash; // @synthesize contentHash=_contentHash;
@property(readonly, copy, nonatomic) NSString *revision; // @synthesize revision=_revision;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *wfName;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) BOOL isDirectory;
- (BOOL)wfIsEqualToFile:(id)arg1;
- (id)wfFileType;
- (id)wfLastModifiedDate;
- (id)wfFileSize;
- (id)wfPath;
- (BOOL)wfIsDirectory;

@end

