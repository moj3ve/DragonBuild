//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EDProcessor.h>

__attribute__((visibility("hidden")))
@interface CHPChangeDirection : EDProcessor
{
}

- (void)changeChartDirection:(id)arg1 sheet:(id)arg2;
- (void)changeBarColumnDirection:(id)arg1;
- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;
- (BOOL)isObjectSupported:(id)arg1;
- (void)cleanUpOldSeriesCollection:(id)arg1;
- (void)addDataValue:(id)arg1 to:(id)arg2 withIndex:(NSUInteger)arg3;
- (id)getGraphicPropertiesForSeriesWithIndex:(NSUInteger)arg1 fromCollection:(id)arg2 isVaryColors:(BOOL)arg3 forChart:(id)arg4;
- (void)mapSeriesValues:(id)arg1 to:(id)arg2 forIndex:(NSUInteger)arg3 byRow:(BOOL)arg4 forChart:(id)arg5;
- (void)mapSeriesCollection:(id)arg1 from:(id)arg2 forChart:(id)arg3;
- (id)getSeriesCollectionForOrthogonalDirection:(id)arg1 forChart:(id)arg2;
- (id)createNewSeriesCollectionForOrthogonalDirection:(id)arg1 forChart:(id)arg2;

@end

