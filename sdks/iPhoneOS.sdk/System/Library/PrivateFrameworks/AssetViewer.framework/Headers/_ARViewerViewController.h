//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AssetViewer/ARViewerVendorProtocol-Protocol.h>

@protocol ARViewerVendorProtocol;

@interface _ARViewerViewController : UIViewController <ARViewerVendorProtocol>
{
    id <ARViewerVendorProtocol> _arviewerDelegate;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property(retain) id <ARViewerVendorProtocol> arviewerDelegate; // @synthesize arviewerDelegate=_arviewerDelegate;
// - (void).cxx_destruct;
- (oneway void)setStatusBarOrientation:(long long)arg1;
- (oneway long long)statusBarOrientation;
- (oneway BOOL)isIgnoringInteractionEvents;

@end

