//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>

#import <PhotoLibraryServices/PLAssetsdResourceWriteOnlyServiceProtocol-Protocol.h>

@interface PLAssetsdResourceWriteOnlyService : PLAbstractLibraryServicesManagerService <PLAssetsdResourceWriteOnlyServiceProtocol>
{
}

- (void)saveAssetWithDataAndPorts:(id)arg1 clientConnection:(id)arg2 imageSurface:(id)arg3 previewImageSurface:(id)arg4 reply:(id /* CDUnknownBlockType */)arg5;
- (void)saveAssetWithDataAndPorts:(id)arg1 imageSurface:(id)arg2 previewImageSurface:(id)arg3 reply:(id /* CDUnknownBlockType */)arg4;

@end

