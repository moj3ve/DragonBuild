//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface PLResourceRecipe : NSObject <NSCopying>
{
}

+ (id)recipeFromID:(unsigned int)arg1;
+ (Class)classFromRecipeID:(unsigned int)arg1;
- (long long)adjustedIngredientsForAsset:(id)arg1 ingredients:(id)arg2 version:(unsigned int)arg3;
- (unsigned short)recipeClassID;
- (BOOL)isDerivative;
- (BOOL)isMarkedFullSize;
- (id)maxPixelCountForAssetWidth:(long long)arg1 height:(long long)arg2;
- (id)expectedFileURLForVersion:(unsigned int)arg1 asset:(id)arg2;
- (id)supportedVersionsForLocalResourceGeneration;
- (BOOL)colorSpaceIsNativeForDisplay;
- (id)utiInContext:(id)arg1;
- (id)expectedSizeFromWidth:(long long)arg1 height:(long long)arg2;
- (void)generateAndStoreForAsset:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 progress:(id )arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (id)chooseIngredientsFrom:(id)arg1 version:(unsigned int)arg2;
- (id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2;
- (id)codecInContext:(id)arg1;
- (unsigned int)recipeID;
- (id)initWithRecipeID:(unsigned int)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

