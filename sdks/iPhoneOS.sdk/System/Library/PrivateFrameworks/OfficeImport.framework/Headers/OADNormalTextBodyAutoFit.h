//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADTextBodyAutoFit.h>

__attribute__((visibility("hidden")))
@interface OADNormalTextBodyAutoFit : OADTextBodyAutoFit
{
    float mFontScalePercent;
    float mLineSpacingReductionPercent;
}

- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (float)lineSpacingReductionPercent;
- (float)fontScalePercent;
- (id)initWithFontScalePercent:(float)arg1 lineSpacingReductionPercent:(float)arg2;

@end

