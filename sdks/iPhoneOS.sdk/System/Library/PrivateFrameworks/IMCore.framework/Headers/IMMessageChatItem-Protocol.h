//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IMHandle, NSDate;

@protocol IMMessageChatItem <NSObject>
@property(readonly, nonatomic) IMHandle *sender;
@property(readonly, nonatomic) NSDate *time;
@property(readonly, nonatomic) BOOL failed;
@property(readonly, nonatomic) BOOL isFromMe;
@end

