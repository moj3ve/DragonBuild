//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSDOMHTMLCollection-Protocol.h>

@class IKDOMNode;

@interface IKDOMHTMLCollection : IKJSObject <IKJSDOMHTMLCollection>
{
    IKDOMNode *_parentNode;
}

@property(nonatomic) __weak IKDOMNode *parentNode; // @synthesize parentNode=_parentNode;
// - (void).cxx_destruct;
- (id)item:(NSUInteger)arg1;
@property(readonly) NSUInteger length;
- (id)initWithAppContext:(id)arg1 node:(id)arg2;

@end

