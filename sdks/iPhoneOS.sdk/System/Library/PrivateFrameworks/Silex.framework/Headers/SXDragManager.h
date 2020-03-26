//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UIDragInteraction;
@protocol SXDragManagerDataSource;

@interface SXDragManager : NSObject <UIDragInteractionDelegate>
{
    BOOL _enabled;
    id <SXDragManagerDataSource> _dataSource;
    NSUInteger _sharingPolicy;
    UIDragInteraction *_dragInteraction;
}

@property(readonly, nonatomic) UIDragInteraction *dragInteraction; // @synthesize dragInteraction=_dragInteraction;
@property(readonly, nonatomic) NSUInteger sharingPolicy; // @synthesize sharingPolicy=_sharingPolicy;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <SXDragManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (void)updateAccessibilityDragSourceDescriptorsForDraggableElement:(id)arg1;
- (BOOL)dragSession:(id)arg1 containsDragItemWithIdentifier:(id)arg2;
- (id)dragItemForObject:(id)arg1 withSession:(id)arg2;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(NSUInteger)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (id)itemsForSession:(id)arg1 atLocation:(CGPoint)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (void)dealloc;
- (id)initWithSharingPolicy:(NSUInteger)arg1 dataSource:(id)arg2;

@end

