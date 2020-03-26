//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class BRObservableFile, NSOperationQueue, NSURL;

__attribute__((visibility("hidden")))
@interface _BRObservableFilePresenter : NSObject <NSFilePresenter>
{
    NSURL *_presentedItemURL;
    NSOperationQueue *_presentedItemOperationQueue;
    BRObservableFile *_parent;
}

@property(nonatomic) __weak BRObservableFile *parent; // @synthesize parent=_parent;
@property(retain) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue=_presentedItemOperationQueue;
@property(copy) NSURL *presentedItemURL; // @synthesize presentedItemURL=_presentedItemURL;
// - (void).cxx_destruct;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)presentedItemUbiquityDidChange;
- (void)presentedItemDidChange;

@end

