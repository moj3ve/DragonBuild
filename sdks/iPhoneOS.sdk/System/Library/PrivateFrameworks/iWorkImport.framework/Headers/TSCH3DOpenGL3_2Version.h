//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DGLVersion.h>

__attribute__((visibility("hidden")))
@interface TSCH3DOpenGL3_2Version : TSCH3DGLVersion
{
}

+ (id)allocWithZone:(_NSZone )arg1;
+ (id)version;
+ (id)_singletonAlloc;
- (id)additionalConclusionsForShaderType:(struct TSCH3DShaderType)arg1;
- (id)additionalGlobalsForShaderType:(struct TSCH3DShaderType)arg1;
- (id)vertexVaryingQualifierForShaderType:(struct TSCH3DShaderType)arg1;
- (id)vertexAttributeQualifierForShaderType:(struct TSCH3DShaderType)arg1;
- (void)addCompatibilityFunctionsForShaderProgram:(id)arg1;
- (id)preprocessorDefinitions;
- (BOOL)deprecatesLuminanceAlpha;
- (BOOL)supportsClipDistances;
// - (id)copyWithZone:(_NSZone )arg1;

@end

