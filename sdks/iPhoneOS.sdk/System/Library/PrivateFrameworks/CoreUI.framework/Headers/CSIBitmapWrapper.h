//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CSIBitmapWrapper : NSObject
{
    CGContext _bitmapContext;
    NSData *_pixelData;
    unsigned int _pixelFormat;
    unsigned int _width;
    unsigned int _height;
    NSUInteger _rowbytes;
    BOOL _allowsMultiPassEncoding;
    BOOL _allowsOptimalRowbytesPacking;
    BOOL _allowsCompactCompression;
    BOOL _allowsPaletteImageCompression;
    BOOL _allowsHevcCompression;
    BOOL _allowsDeepmapImageCompression;
    BOOL _allowsDeepmap2ImageCompression;
    BOOL _flipped;
    CGImage _sourceImage;
    long long _texturePixelFormat;
    unsigned int _imageAlpha;
    double _compressionQuality;
    long long _compressionType;
    NSUInteger _colorSpaceID;
    long long _textureInterpretation;
    int _exifOrientation;
    long long _targetPlatform;
    NSString *_name;
}

@property(nonatomic) NSString *name; // @synthesize name=_name;
@property BOOL allowsDeepmap2ImageCompression; // @synthesize allowsDeepmap2ImageCompression=_allowsDeepmap2ImageCompression;
@property BOOL allowsDeepmapImageCompression; // @synthesize allowsDeepmapImageCompression=_allowsDeepmapImageCompression;
@property(nonatomic) int exifOrientation; // @synthesize exifOrientation=_exifOrientation;
@property(nonatomic) long long textureInterpretation; // @synthesize textureInterpretation=_textureInterpretation;
@property(nonatomic) NSUInteger colorSpaceID; // @synthesize colorSpaceID=_colorSpaceID;
@property long long targetPlatform; // @synthesize targetPlatform=_targetPlatform;
@property long long compressionType; // @synthesize compressionType=_compressionType;
@property(nonatomic) double compressionQuality; // @synthesize compressionQuality=_compressionQuality;
@property(nonatomic) BOOL flipped; // @synthesize flipped=_flipped;
@property BOOL allowsHevcCompression; // @synthesize allowsHevcCompression=_allowsHevcCompression;
@property BOOL allowsPaletteImageCompression; // @synthesize allowsPaletteImageCompression=_allowsPaletteImageCompression;
@property(nonatomic) unsigned int pixelFormat; // @synthesize pixelFormat=_pixelFormat;
- (id)compressedData:(BOOL)arg1 usedEncoding:(int )arg2 andRowChunkSize:(unsigned int )arg3;
@property BOOL allowsCompactCompression;
@property BOOL allowsOptimalRowbytesPacking; // @synthesize allowsOptimalRowbytesPacking=_allowsOptimalRowbytesPacking;
@property BOOL allowsMultiPassEncoding; // @synthesize allowsMultiPassEncoding=_allowsMultiPassEncoding;
- (id)pixelData;
- (void)setPixelData:(id)arg1;
- (unsigned int)sourceAlphaInfo;
- (void)setSourceAlphaInfo:(unsigned int)arg1;
- (CGContext )bitmapContext;
- (NSUInteger)rowbytes;
- (unsigned int)width;
- (unsigned int)height;
- (void)dealloc;
- (id)initWithCGImage:(CGImage )arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 texturePixelFormat:(long long)arg4;
- (id)initWithPixelWidth:(unsigned int)arg1 pixelHeight:(unsigned int)arg2;

@end

