//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IconServices/ISScalableCompositorResource-Protocol.h>

@class CUICatalog, ISImageBag, NSString;

@interface ISAssetCatalogResource : NSObject <ISScalableCompositorResource>
{
    ISImageBag *_imageBag;
    CUICatalog *_catalog;
    NSString *_imageName;
    NSString *_symbolName;
}

+ (id)assetCatalogResourceWithURL:(id)arg1 imageName:(id)arg2 symbolName:(id)arg3 error:(id )arg4;
+ (id)coreGlyphsCatalog;
+ (id)assetCatalogResourceWithURL:(id)arg1 symbolName:(id)arg2 error:(id )arg3;
+ (id)assetCatalogResourceWithURL:(id)arg1 imageName:(id)arg2 error:(id )arg3;
@property(readonly) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(readonly) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly) CUICatalog *catalog; // @synthesize catalog=_catalog;
// - (void).cxx_destruct;
@property(readonly, getter=isPrecomposed) BOOL precomposed;
- (id)imageForSize:(CGSize)arg1 scale:(double)arg2;
@property(readonly) ISImageBag *imageBag; // @synthesize imageBag=_imageBag;
- (id)imageWithName:(id)arg1 scale:(double)arg2;
- (id)multisizedImageWithName:(id)arg1 size:(CGSize)arg2 scale:(double)arg3;
- (long long)deviceIdiomWithName:(id)arg1;
- (id)initWithCatalog:(id)arg1 imageName:(id)arg2 symbolName:(id)arg3;
- (id)symbolImageForFontSize:(double)arg1 scale:(double)arg2 symbolSize:(NSUInteger)arg3 symbolWeight:(long long)arg4;
- (id)symbolImageForSize:(CGSize)arg1 scale:(double)arg2;

@end

