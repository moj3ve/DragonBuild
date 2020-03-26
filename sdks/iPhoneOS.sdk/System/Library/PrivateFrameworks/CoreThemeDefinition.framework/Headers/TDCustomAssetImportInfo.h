//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUIRenditionKey, NSDate, NSString;
@protocol TDCustomAssetSource;

@interface TDCustomAssetImportInfo : NSObject
{
    BOOL _optOutOfThinning;
    CUIRenditionKey *_renditionKey;
    NSString *_elementName;
    NSString *_partName;
    NSObject<TDCustomAssetSource> *_customAsset;
    NSDate *_modificationDate;
    long long _renditionType;
    long long _resizingMode;
    long long _templateRenderingMode;
    NSString *_name;
    CGSize _resizableSliceSize;
    CDStruct_3c058996 _sliceInsets;
    CGRect _alignmentRect;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) CGRect alignmentRect; // @synthesize alignmentRect=_alignmentRect;
@property(nonatomic) BOOL optOutOfThinning; // @synthesize optOutOfThinning=_optOutOfThinning;
@property(nonatomic) long long templateRenderingMode; // @synthesize templateRenderingMode=_templateRenderingMode;
@property(nonatomic) CGSize resizableSliceSize; // @synthesize resizableSliceSize=_resizableSliceSize;
@property(nonatomic) long long resizingMode; // @synthesize resizingMode=_resizingMode;
@property(nonatomic) long long renditionType; // @synthesize renditionType=_renditionType;
@property(nonatomic) CDStruct_3c058996 sliceInsets; // @synthesize sliceInsets=_sliceInsets;
@property(copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain) NSObject<TDCustomAssetSource> *customAsset; // @synthesize customAsset=_customAsset;
@property(copy, nonatomic) NSString *partName; // @synthesize partName=_partName;
@property(copy, nonatomic) NSString *elementName; // @synthesize elementName=_elementName;
@property(copy, nonatomic) CUIRenditionKey *renditionKey; // @synthesize renditionKey=_renditionKey;
@property(nonatomic) BOOL isTemplate;
- (long long)renditionSubtype;
- (void)dealloc;

@end

