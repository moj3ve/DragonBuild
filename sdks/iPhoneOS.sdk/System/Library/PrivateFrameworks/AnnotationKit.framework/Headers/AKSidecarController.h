//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKAnnotation, AKController, AKInkOverlayView, NSMutableSet, PKStroke;
@protocol AKSidecarControllerDelegate, OS_dispatch_source;

@interface AKSidecarController : NSObject
{
    PKStroke *_currentStroke;
    AKInkOverlayView *_currentStrokeOverlay;
    NSObject<OS_dispatch_source> *_strokeTimer;
    BOOL _updatingModel;
    BOOL _ignoreKVOChanges;
    BOOL _handlingUndoRedo;
    BOOL _sendingCheckpoint;
    BOOL _needCheckpointSent;
    NSMutableSet *_coalescingAnnotationKeys;
    AKAnnotation *_coalescingAnnotationChange;
    NSObject<OS_dispatch_source> *_coalescingAnnotationSource;
    BOOL _shouldObserveEdits;
    id <AKSidecarControllerDelegate> _delegate;
    AKController *_controller;
    NSMutableSet *_observedPageModelControllers;
    NSMutableSet *_observedAnnotations;
}

+ (BOOL)validateInitialMessage:(id)arg1 applicationData:(id /* CDUnknownBlockType */)arg2;
@property(retain) NSMutableSet *observedAnnotations; // @synthesize observedAnnotations=_observedAnnotations;
@property(retain) NSMutableSet *observedPageModelControllers; // @synthesize observedPageModelControllers=_observedPageModelControllers;
@property __weak AKController *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak id <AKSidecarControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL shouldObserveEdits; // @synthesize shouldObserveEdits=_shouldObserveEdits;
// - (void).cxx_destruct;
- (void)_sendDictionary:(id)arg1;
- (void)_selectionChangedOnPageController:(id)arg1;
- (void)_annotation:(id)arg1 modifiedInPageController:(NSUInteger)arg2 properties:(id)arg3;
- (void)_annotation:(id)arg1 removedFromPageController:(NSUInteger)arg2;
- (void)_annotation:(id)arg1 addedToPageController:(NSUInteger)arg2 selected:(BOOL)arg3 atIndex:(NSUInteger)arg4;
- (void)_stopObservingAnnotations:(id)arg1;
- (void)_startObservingAnnotations:(id)arg1;
- (void)_annotationsWillBeRemoved:(id)arg1 onPageController:(id)arg2 isUndoingRedoing:(BOOL)arg3;
- (void)_annotationsWereAdded:(id)arg1 onPageController:(id)arg2 isUndoingRedoing:(BOOL)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)observePageControllerRequestsEnableRegistration:(id)arg1;
- (void)observePageControllerRequestsDisableRegistration:(id)arg1;
- (void)_startChangeUndoGroup;
- (void)_handleUndoCheckpoint:(id)arg1;
- (void)_handleRedo:(id)arg1;
- (void)_handleUndo:(id)arg1;
- (void)_coalesceAnnotationChange:(id)arg1 keyChange:(id)arg2;
- (void)_actuallySendAnnotationChange;
- (void)handleLiveStrokeComplete:(BOOL)arg1;
- (void)_handleLiveStrokeUpdate;
- (BOOL)handleLiveStrokeBegan:(id)arg1 onInkOverlayView:(id)arg2;
- (void)_handleSelectionChanged:(id)arg1;
- (void)_handleAnnotationModify:(id)arg1;
- (void)_handleAnnotationRemove:(id)arg1;
- (void)_handleAnnotationAdd:(id)arg1;
- (void)handleIncomingOPACKObject:(id)arg1;
- (BOOL)_removeAnnotationUUID:(id)arg1 fromPageModelController:(id)arg2;
- (id)_inkAnnotationFromPageModelController:(id)arg1;
- (BOOL)_replaceAnnotation:(id)arg1 inPageModelController:(id)arg2;
- (id)_annotationWithUUID:(id)arg1 inPageModelController:(id)arg2;
- (NSUInteger)_indexOfAnnotationUUID:(id)arg1 annotations:(id)arg2;
- (void)stopObservingPageModelController:(id)arg1;
- (void)startObservingPageModelController:(id)arg1;
- (void)_handleInternalFailure;
- (void)done;
- (void)_unregisterObservers;
- (void)_registerObservers;
- (void)dealloc;
- (id)initWithController:(id)arg1;

@end

