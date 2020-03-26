//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InstallCoordination/IXOwnedDataPromiseSeed.h>


@class NSURL;

@interface IXPromisedTransferToPathSeed : IXOwnedDataPromiseSeed <NSSecureCoding, NSCopying>
{
    BOOL _shouldCopy;
    BOOL _tryDeltaCopy;
    NSURL *_transferPath;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL tryDeltaCopy; // @synthesize tryDeltaCopy=_tryDeltaCopy;
@property(nonatomic) BOOL shouldCopy; // @synthesize shouldCopy=_shouldCopy;
@property(retain, nonatomic) NSURL *transferPath; // @synthesize transferPath=_transferPath;
// - (void).cxx_destruct;
- (Class)clientPromiseClass;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

