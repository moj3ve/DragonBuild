//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Cards/CRJSObjectExport-Protocol.h>

@interface CRJSObject : NSObject <CRJSObjectExport>
{
    id _backingObject;
}

+ (id)objectWithClassName:(id)arg1 objectType:(id)arg2;
@property(readonly, nonatomic) id backingObject; // @synthesize backingObject=_backingObject;
// - (void).cxx_destruct;
- (id)_backingObjectForJSValue:(id)arg1;
- (void)_logErrorLog:(id)arg1;
- (id)backingObjectValueForKey:(id)arg1;
- (void)setBackingObjectValue:(id)arg1 forKey:(id)arg2;
- (id)initWithClassName:(id)arg1 objectType:(long long)arg2;

@end

