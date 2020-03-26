//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMLocalObject;
@protocol OS_voucher, OS_xpc_object;

@interface IMMessageContext : NSObject
{
    NSObject<OS_xpc_object> *_xpcMessage;
    IMLocalObject *_localObject;
    id _context;
    BOOL _boost;
    NSObject<OS_voucher> *_voucher;
}

@property(retain) NSObject<OS_voucher> *voucher; // @synthesize voucher=_voucher;
@property(retain) id context; // @synthesize context=_context;
@property BOOL shouldBoost; // @synthesize shouldBoost=_boost;
@property(retain) IMLocalObject *localObject; // @synthesize localObject=_localObject;
@property(retain) NSObject<OS_xpc_object> *xpcMessage; // @synthesize xpcMessage=_xpcMessage;
- (void)dealloc;
- (id)init;

@end

