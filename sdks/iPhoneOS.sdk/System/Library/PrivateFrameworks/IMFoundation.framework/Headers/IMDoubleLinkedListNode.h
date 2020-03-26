//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMDoubleLinkedListNode : NSObject
{
    IMDoubleLinkedListNode *_prev;
    IMDoubleLinkedListNode *_next;
    id _object;
}

@property(retain) id object; // @synthesize object=_object;
@property(retain) IMDoubleLinkedListNode *next; // @synthesize next=_next;
@property(retain) IMDoubleLinkedListNode *prev; // @synthesize prev=_prev;
- (void)orphan;
- (void)removeFromList;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end

