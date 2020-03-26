//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface TDAsset : NSManagedObject
{
    unsigned int _scaleFactor;
}

+ (long long)subtypeFromImageFilename:(id)arg1;
+ (long long)idiomFromImageFilename:(id)arg1;
+ (BOOL)isTemplateFromImageFilename:(id)arg1;
+ (unsigned int)scaleFactorFromImageFilename:(id)arg1;
+ (id)_filenameRegex;
@property(readonly, nonatomic) NSString *baseName;
- (void)setHasProduction:(id)arg1;
- (BOOL)hasProduction;
- (id)fileURLWithDocument:(id)arg1;
- (id)sourceRelativePath;
- (id)_sourceRelativePathComponents;
- (unsigned int)scaleFactor;
- (void)setScaleFactor:(unsigned int)arg1;

@end

