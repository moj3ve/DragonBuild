//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/WKUIDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL, UIDragItem, UIDropProposal, UIGestureRecognizer, UIImage, UIScrollView, UITargetedDragPreview, UIViewController, WKContextMenuElementInfo, WKFrameInfo, WKNavigationAction, WKSecurityOrigin, WKWebView, WKWebViewConfiguration, WKWindowFeatures, _WKActivatedElementInfo, _WKAttachment, _WKFrameHandle, _WKWebAuthenticationPanel;
@protocol NSSecureCoding, UIContextMenuInteractionCommitAnimating, UIDragSession, UIDropSession;

@protocol WKUIDelegatePrivate <WKUIDelegate>

@optional
- (void)_webView:(WKWebView *)arg1 shouldAllowDeviceOrientationAndMotionAccessRequestedByFrame:(WKFrameInfo *)arg2 decisionHandler:(void (^)(BOOL))arg3;
- (BOOL)_webView:(WKWebView *)arg1 gestureRecognizerCouldPinch:(UIGestureRecognizer *)arg2;
- (void)_webView:(WKWebView *)arg1 didDismissFocusedElementViewController:(UIViewController *)arg2;
- (void)_webView:(WKWebView *)arg1 didPresentFocusedElementViewController:(UIViewController *)arg2;
- (void)_webView:(WKWebView *)arg1 didChangeSafeAreaShouldAffectObscuredInsets:(BOOL)arg2;
- (long long)_webView:(WKWebView *)arg1 dataOwnerForDragSession:(id <UIDragSession>)arg2;
- (long long)_webView:(WKWebView *)arg1 dataOwnerForDropSession:(id <UIDropSession>)arg2;
- (NSArray *)_webView:(WKWebView *)arg1 willPerformDropWithSession:(id <UIDropSession>)arg2;
- (UITargetedDragPreview *)_webView:(WKWebView *)arg1 previewForCancellingItem:(UIDragItem *)arg2 withDefault:(UITargetedDragPreview *)arg3;
- (UITargetedDragPreview *)_webView:(WKWebView *)arg1 previewForLiftingItem:(UIDragItem *)arg2 session:(id <UIDragSession>)arg3;
- (UIDropProposal *)_webView:(WKWebView *)arg1 willUpdateDropProposalToProposal:(UIDropProposal *)arg2 forSession:(id <UIDropSession>)arg3;
- (NSUInteger)_webView:(WKWebView *)arg1 willUpdateDataInteractionOperationToOperation:(NSUInteger)arg2 forSession:(id)arg3;
- (void)_webView:(WKWebView *)arg1 dataInteractionOperationWasHandled:(BOOL)arg2 forSession:(id)arg3 itemProviders:(NSArray *)arg4;
- (void)_webView:(WKWebView *)arg1 dataInteraction:(id)arg2 session:(id)arg3 didEndWithOperation:(NSUInteger)arg4;
- (void)_webView:(WKWebView *)arg1 dataInteraction:(id)arg2 sessionWillBegin:(id)arg3;
- (BOOL)_webView:(WKWebView *)arg1 performDataInteractionOperationWithItemProviders:(NSArray *)arg2;
- (NSArray *)_webView:(WKWebView *)arg1 adjustedDataInteractionItemProvidersForItemProvider:(id)arg2 representingObjects:(NSArray *)arg3 additionalData:(NSDictionary *)arg4;
- (NSArray *)_webView:(WKWebView *)arg1 adjustedDataInteractionItemProviders:(NSArray *)arg2;
- (UIViewController *)_webView:(WKWebView *)arg1 previewViewControllerForImage:(UIImage *)arg2 alternateURL:(NSURL *)arg3 defaultActions:(NSArray *)arg4 elementInfo:(_WKActivatedElementInfo *)arg5;
- (NSURL *)_webView:(WKWebView *)arg1 alternateURLFromImage:(UIImage *)arg2 userInfo:(id )arg3;
- (void)_webView:(WKWebView *)arg1 getAlternateURLFromImage:(UIImage *)arg2 completionHandler:(void (^)(NSURL *, NSDictionary *))arg3;
- (UIViewController *)_presentingViewControllerForWebView:(WKWebView *)arg1;
- (UIViewController *)_webView:(WKWebView *)arg1 previewViewControllerForAnimatedImageAtURL:(NSURL *)arg2 defaultActions:(NSArray *)arg3 elementInfo:(_WKActivatedElementInfo *)arg4 imageSize:(CGSize)arg5;
- (UIViewController *)_webView:(WKWebView *)arg1 previewViewControllerForURL:(NSURL *)arg2 defaultActions:(NSArray *)arg3 elementInfo:(_WKActivatedElementInfo *)arg4;
- (UIEdgeInsets)_webView:(WKWebView *)arg1 finalObscuredInsetsForScrollView:(UIScrollView *)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint )arg4;
- (NSUInteger)_webView:(WKWebView *)arg1 indexIntoAttachmentListForElement:(_WKActivatedElementInfo *)arg2;
- (NSArray *)_attachmentListForWebView:(WKWebView *)arg1 sourceIsManaged:(BOOL )arg2;
- (NSArray *)_attachmentListForWebView:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 alternateActionForURL:(NSURL *)arg2;
- (BOOL)_webView:(WKWebView *)arg1 showCustomSheetForElement:(_WKActivatedElementInfo *)arg2;
- (void)_webView:(WKWebView *)arg1 contextMenuDidEndForElement:(WKContextMenuElementInfo *)arg2;
- (void)_webView:(WKWebView *)arg1 contextMenuWillPresentForElement:(WKContextMenuElementInfo *)arg2;
- (void)_webView:(WKWebView *)arg1 contextMenuForElement:(WKContextMenuElementInfo *)arg2 willCommitWithAnimator:(id <UIContextMenuInteractionCommitAnimating>)arg3;
- (void)_webView:(WKWebView *)arg1 contextMenuConfigurationForElement:(WKContextMenuElementInfo *)arg2 completionHandler:(void (^)(UIContextMenuConfiguration *))arg3;
- (void)_webView:(WKWebView *)arg1 didDismissPreviewViewController:(UIViewController *)arg2;
- (void)_webView:(WKWebView *)arg1 didDismissPreviewViewController:(UIViewController *)arg2 committing:(BOOL)arg3;
- (void)_webView:(WKWebView *)arg1 commitPreviewedImageWithURL:(NSURL *)arg2;
- (void)_webView:(WKWebView *)arg1 willPreviewImageWithURL:(NSURL *)arg2;
- (void)_webView:(WKWebView *)arg1 commitPreviewedViewController:(UIViewController *)arg2;
- (UIViewController *)_webView:(WKWebView *)arg1 previewViewControllerForURL:(NSURL *)arg2;
- (void)_webView:(WKWebView *)arg1 requestGeolocationAuthorizationForURL:(NSURL *)arg2 frame:(WKFrameInfo *)arg3 decisionHandler:(void (^)(BOOL))arg4;
- (BOOL)_webView:(WKWebView *)arg1 shouldRequestGeolocationAuthorizationForURL:(NSURL *)arg2 isMainFrame:(BOOL)arg3 mainFrameURL:(NSURL *)arg4;
- (void)_webView:(WKWebView *)arg1 didNotHandleTapAsClickAtPoint:(CGPoint)arg2;
- (NSArray *)_webView:(WKWebView *)arg1 actionsForElement:(_WKActivatedElementInfo *)arg2 defaultActions:(NSArray *)arg3;
- (BOOL)_webView:(WKWebView *)arg1 shouldIncludeAppLinkActionsForElement:(_WKActivatedElementInfo *)arg2;
- (void)_webView:(WKWebView *)arg1 runWebAuthenticationPanel:(_WKWebAuthenticationPanel *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 completionHandler:(void (^)(long long))arg4;
- (void)_webView:(WKWebView *)arg1 takeFocus:(long long)arg2;
- (void)_webView:(WKWebView *)arg1 didChangeFontAttributes:(NSDictionary *)arg2;
- (void)_webView:(WKWebView *)arg1 requestStorageAccessPanelForDomain:(NSString *)arg2 underCurrentDomain:(NSString *)arg3 completionHandler:(void (^)(BOOL))arg4;
- (void)_webView:(WKWebView *)arg1 didResignInputElementStrongPasswordAppearanceWithUserInfo:(id <NSSecureCoding>)arg2;
- (void)_webView:(WKWebView *)arg1 didInvalidateDataForAttachment:(_WKAttachment *)arg2;
- (void)_webView:(WKWebView *)arg1 didInsertAttachment:(_WKAttachment *)arg2 withSource:(NSString *)arg3;
- (void)_webView:(WKWebView *)arg1 didRemoveAttachment:(_WKAttachment *)arg2;
- (void)_webView:(WKWebView *)arg1 editorStateDidChange:(NSDictionary *)arg2;
- (void)_webView:(WKWebView *)arg1 runBeforeUnloadConfirmPanelWithMessage:(NSString *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 completionHandler:(void (^)(BOOL))arg4;
- (void)_webView:(WKWebView *)arg1 requestGeolocationPermissionForFrame:(WKFrameInfo *)arg2 decisionHandler:(void (^)(BOOL))arg3;
- (void)_webView:(WKWebView *)arg1 createWebViewWithConfiguration:(WKWebViewConfiguration *)arg2 forNavigationAction:(WKNavigationAction *)arg3 windowFeatures:(WKWindowFeatures *)arg4 completionHandler:(void (^)(WKWebView *))arg5;
- (NSUInteger)_webView:(WKWebView *)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2;
- (void)_webView:(WKWebView *)arg1 mediaCaptureStateDidChange:(NSUInteger)arg2;
- (void)_webView:(WKWebView *)arg1 checkUserMediaPermissionForURL:(NSURL *)arg2 mainFrameURL:(NSURL *)arg3 frameIdentifier:(NSUInteger)arg4 decisionHandler:(void (^)(NSString *, BOOL))arg5;
- (void)_webView:(WKWebView *)arg1 requestUserMediaAuthorizationForDevices:(NSUInteger)arg2 url:(NSURL *)arg3 mainFrameURL:(NSURL *)arg4 decisionHandler:(void (^)(BOOL))arg5;
- (void)_webView:(WKWebView *)arg1 includeSensitiveMediaDeviceDetails:(void (^)(BOOL))arg2;
- (void)_webView:(WKWebView *)arg1 requestMediaCaptureAuthorization:(NSUInteger)arg2 decisionHandler:(void (^)(BOOL))arg3;
- (NSDictionary *)_dataDetectionContextForWebView:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 imageOrMediaDocumentSizeChanged:(CGSize)arg2;
- (void)_webView:(WKWebView *)arg1 hasVideoInPictureInPictureDidChange:(BOOL)arg2;
- (void)_webViewDidLosePointerLock:(WKWebView *)arg1;
- (void)_webViewDidShowSafeBrowsingWarning:(WKWebView *)arg1;
- (void)_webViewDidRequestPointerLock:(WKWebView *)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)_webViewRequestPointerLock:(WKWebView *)arg1;
- (void)_webViewDidExitFullscreen:(WKWebView *)arg1;
- (void)_webViewDidEnterFullscreen:(WKWebView *)arg1;
- (void)_webViewFullscreenMayReturnToInline:(WKWebView *)arg1;
- (void)_webViewClose:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 printFrame:(_WKFrameHandle *)arg2;
- (void)_webView:(WKWebView *)arg1 decideWebApplicationCacheQuotaForSecurityOrigin:(WKSecurityOrigin *)arg2 currentQuota:(NSUInteger)arg3 totalBytesNeeded:(NSUInteger)arg4 decisionHandler:(void (^)(NSUInteger))arg5;
- (void)_webView:(WKWebView *)arg1 decideDatabaseQuotaForSecurityOrigin:(WKSecurityOrigin *)arg2 databaseName:(NSString *)arg3 displayName:(NSString *)arg4 currentQuota:(NSUInteger)arg5 currentOriginUsage:(NSUInteger)arg6 currentDatabaseUsage:(NSUInteger)arg7 expectedUsage:(NSUInteger)arg8 decisionHandler:(void (^)(NSUInteger))arg9;
- (void)_webView:(WKWebView *)arg1 decideDatabaseQuotaForSecurityOrigin:(WKSecurityOrigin *)arg2 currentQuota:(NSUInteger)arg3 currentOriginUsage:(NSUInteger)arg4 currentDatabaseUsage:(NSUInteger)arg5 expectedUsage:(NSUInteger)arg6 decisionHandler:(void (^)(NSUInteger))arg7;
@end

