//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUImageRenderRequest.h>

@protocol NUMutableBufferImage;

@interface NUBufferRenderRequest : NUImageRenderRequest
{
}

- (void)submit:(id /* CDUnknownBlockType */)arg1;
- (id)newRenderJob;
@property id <NUMutableBufferImage> targetBufferImage;

@end

