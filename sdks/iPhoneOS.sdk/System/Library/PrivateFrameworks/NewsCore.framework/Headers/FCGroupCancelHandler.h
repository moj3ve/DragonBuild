//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationCanceling-Protocol.h>

@class NSArray;

@interface FCGroupCancelHandler : NSObject <FCOperationCanceling>
{
    NSArray *_cancelHandlers;
}

+ (id)groupCancelHandlerWithCancelHandlers:(id)arg1;
@property(copy, nonatomic) NSArray *cancelHandlers; // @synthesize cancelHandlers=_cancelHandlers;
// - (void).cxx_destruct;
- (void)cancel;
- (id)initWithCancelHandlers:(id)arg1;

@end

