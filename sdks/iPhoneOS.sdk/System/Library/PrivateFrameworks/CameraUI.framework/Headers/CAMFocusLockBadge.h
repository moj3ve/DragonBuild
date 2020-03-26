//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraEditKit/CEKBadgeTextView.h>

@interface CAMFocusLockBadge : CEKBadgeTextView
{
    BOOL _focusLocked;
    BOOL _exposureLocked;
}

@property(nonatomic, getter=isExposureLocked) BOOL exposureLocked; // @synthesize exposureLocked=_exposureLocked;
@property(nonatomic, getter=isFocusLocked) BOOL focusLocked; // @synthesize focusLocked=_focusLocked;
- (void)_updateText;
- (id)initWithFrame:(CGRect)arg1;

@end

