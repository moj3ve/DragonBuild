//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface BiometricKitEnrollProgressInfo : NSObject
{
    int _message;
    long long _progress;
    long long _currentPrimaryComponentID;
    NSDictionary *_captureImage;
    NSDictionary *_renderedImage;
    NSDictionary *_messageDetails;
}

@property(retain, nonatomic) NSDictionary *messageDetails; // @synthesize messageDetails=_messageDetails;
@property(nonatomic) int message; // @synthesize message=_message;
@property(retain, nonatomic) NSDictionary *renderedImage; // @synthesize renderedImage=_renderedImage;
@property(retain, nonatomic) NSDictionary *captureImage; // @synthesize captureImage=_captureImage;
@property(nonatomic) long long currentPrimaryComponentID; // @synthesize currentPrimaryComponentID=_currentPrimaryComponentID;
@property(nonatomic) long long progress; // @synthesize progress=_progress;
// - (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

