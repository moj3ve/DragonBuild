//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIProductInfoAiringLayout : TVViewLayout
{
    VUITextLayout *_infoTextLayout;
    TVImageLayout *_logoImageLayout;
}

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
@property(readonly, nonatomic) TVImageLayout *logoImageLayout; // @synthesize logoImageLayout=_logoImageLayout;
@property(readonly, nonatomic) VUITextLayout *infoTextLayout; // @synthesize infoTextLayout=_infoTextLayout;
// - (void).cxx_destruct;
- (id)init;

@end

