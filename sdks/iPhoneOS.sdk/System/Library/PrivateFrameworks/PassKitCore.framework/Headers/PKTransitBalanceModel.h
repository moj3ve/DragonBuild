//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, PKTransitPassProperties;

@interface PKTransitBalanceModel : NSObject
{
    NSDictionary *_balancesByID;
    NSArray *_balanceFields;
    PKTransitPassProperties *_transitProperties;
    NSArray *_displayableBalances;
}

@property(readonly, nonatomic) NSArray *displayableBalances; // @synthesize displayableBalances=_displayableBalances;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *primaryDisplayableBalance; // @dynamic primaryDisplayableBalance;
- (void)_updatePrimaryDisplayableBalance;
@property(readonly, nonatomic) BOOL hasContent;
- (void)setTransitProperties:(id)arg1;
- (void)setServerBalancesByID:(id)arg1;
- (void)setServerBalances:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithPass:(id)arg1;

@end

