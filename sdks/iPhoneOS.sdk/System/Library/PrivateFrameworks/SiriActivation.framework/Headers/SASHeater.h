//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol SASHeaterDelegate;

@interface SASHeater : NSObject
{
    BOOL _predictedRecordRouteIsZLL;
    id <SASHeaterDelegate> _delegate;
    double _preparationStartTime;
    NSTimer *_defrostTimer;
    NSTimer *_preheatTimer;
}

@property(retain, nonatomic) NSTimer *preheatTimer; // @synthesize preheatTimer=_preheatTimer;
@property(retain, nonatomic) NSTimer *defrostTimer; // @synthesize defrostTimer=_defrostTimer;
@property(nonatomic) BOOL predictedRecordRouteIsZLL; // @synthesize predictedRecordRouteIsZLL=_predictedRecordRouteIsZLL;
@property(nonatomic, getter=_preparationStartTime, setter=_setPreparationStartTime:) double preparationStartTime; // @synthesize preparationStartTime=_preparationStartTime;
@property(nonatomic) __weak id <SASHeaterDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_updatePredictedRouteIsZLL;
- (void)_suggestPreheat;
- (void)_suggestDefrost;
- (void)_cancelPreparation;
- (void)cancelPreparation;
- (void)prepareForUseAfterTimeInterval:(double)arg1;

@end

