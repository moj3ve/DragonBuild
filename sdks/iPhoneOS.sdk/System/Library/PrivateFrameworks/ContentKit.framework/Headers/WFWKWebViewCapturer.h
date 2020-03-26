//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContentKit/WKNavigationDelegate-Protocol.h>

@class WFWebResource, WKNavigation, WKWebView;

@interface WFWKWebViewCapturer : NSObject <WKNavigationDelegate>
{
    WKWebView *_webView;
    WKNavigation *_pageNavigation;
    WFWebResource *_webResource;
    id /* CDUnknownBlockType */ _completionHandler;
}

+ (void)loadWebResource:(id)arg1 withSize:(CGSize)arg2 configuration:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) WFWebResource *webResource; // @synthesize webResource=_webResource;
@property(retain, nonatomic) WKNavigation *pageNavigation; // @synthesize pageNavigation=_pageNavigation;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
// - (void).cxx_destruct;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)loadWebResource:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)initWithSize:(CGSize)arg1 configuration:(id)arg2;

@end

