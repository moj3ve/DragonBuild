//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSSet, NSString;
@protocol RBBundleProperties;

@protocol RBDomainAttributeManaging <NSObject>
- (BOOL)areTargetPropertiesValid:(id <RBBundleProperties>)arg1 forAttributeWithDomain:(NSString *)arg2 andName:(NSString *)arg3;
- (NSSet *)allEntitlements;
- (BOOL)containsAttributeWithDomain:(NSString *)arg1 andName:(NSString *)arg2;
- (NSString *)endowmentNamespaceForDomain:(NSString *)arg1 andName:(NSString *)arg2;
- (NSSet *)originatorEntitlementsForDomain:(NSString *)arg1 andName:(NSString *)arg2;
- (NSArray *)attributesForDomain:(NSString *)arg1 andName:(NSString *)arg2 targetProperties:(id <RBBundleProperties>)arg3 withError:(id )arg4;
@end

