//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriTasks/STAlarmAction.h>

@class STAlarm;

@interface STCreateAlarmAction : STAlarmAction
{
    STAlarm *_alarm;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)alarm;
- (id)_initWithAlarm:(id)arg1;

@end

