//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLSNowPlayingStreamConverter : NSObject
{
    NSUInteger _options;
}

+ (id)recognizedMusicSources;
+ (NSUInteger)defaultOptions;
@property(nonatomic) NSUInteger options; // @synthesize options=_options;
- (BOOL)_canUseEvent:(id)arg1;
- (id)eventsFromDuetKnowledgeEvents:(id)arg1;
- (id)eventFromDuetKnoweledgeEvent:(id)arg1;
- (id)init;

@end

