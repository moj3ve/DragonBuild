//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKShareParticipant.h>

@interface CKShareParticipant (CKDaemonExtensions)
- (void)_decryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection )arg1 inShareWithID:(id)arg2 pcsManager:(id)arg3;
- (void)_encryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection )arg1 inShareWithID:(id)arg2 pcsManager:(id)arg3;
- (BOOL)hasEncryptedPersonalInfo;
@end

