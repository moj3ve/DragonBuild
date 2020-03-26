//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class INInteraction, NSArray, NSDictionary;
@protocol INUICKPViewControllerAllocatingDelegate;

@protocol INUICKPViewControllerAllocating <NSObject>
@property(readonly, copy, nonatomic) NSArray *redundantInterfaceSections;
@property(readonly, copy, nonatomic) NSDictionary *viewControllersByInitialInterfaceSection;
@property(readonly, copy, nonatomic) NSArray *allocatedViewControllers;
@property(nonatomic) BOOL requiresUserConsent;
- (void)performAllocationsFromInteraction:(INInteraction *)arg1 initialInterfaceSections:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;

@optional
@property(nonatomic) __weak id <INUICKPViewControllerAllocatingDelegate> delegate;
@end

