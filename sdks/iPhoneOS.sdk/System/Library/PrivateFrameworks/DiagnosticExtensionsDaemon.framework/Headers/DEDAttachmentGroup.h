//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>

@class DEDBugSession, DEDExtensionIdentifier, NSArray, NSString, NSURL;

@interface DEDAttachmentGroup : NSObject <DEDSecureArchiving>
{
    DEDBugSession *_fromBugSession;
    NSString *_deviceID;
    NSURL *_rootURL;
    NSString *_displayName;
    NSString *_extensionID;
    NSArray *_attachmentItems;
    DEDExtensionIdentifier *_dedExtensionIdentifier;
}

+ (id)archivedClasses;
+ (id)groupWithDEGroup:(id)arg1 identifier:(id)arg2;
+ (id)groupWithDictionary:(id)arg1;
@property(retain, nonatomic) DEDExtensionIdentifier *dedExtensionIdentifier; // @synthesize dedExtensionIdentifier=_dedExtensionIdentifier;
@property(retain) NSArray *attachmentItems; // @synthesize attachmentItems=_attachmentItems;
@property(retain) NSString *extensionID; // @synthesize extensionID=_extensionID;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) NSURL *rootURL; // @synthesize rootURL=_rootURL;
@property(retain) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain) DEDBugSession *fromBugSession; // @synthesize fromBugSession=_fromBugSession;
// - (void).cxx_destruct;
- (BOOL)isLocal;
@property(readonly, copy) NSString *description;
- (id)serialize;
- (id)archiveName;
- (id)totalFilesize;

@end

