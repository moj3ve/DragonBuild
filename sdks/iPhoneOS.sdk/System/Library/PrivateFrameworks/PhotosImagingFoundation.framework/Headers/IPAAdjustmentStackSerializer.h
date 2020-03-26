//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/IPAAdjustmentStackSerializer-Protocol.h>

@interface IPAAdjustmentStackSerializer : NSObject <IPAAdjustmentStackSerializer>
{
}

+ (id)JSONFromData:(id)arg1 error:(id )arg2;
+ (id)JSONFromData:(id)arg1;
+ (id)dataFromJSON:(id)arg1 error:(id )arg2;
+ (id)dataFromJSON:(id)arg1;
+ (id)propertyListFromData:(id)arg1 error:(id )arg2;
+ (id)propertyListFromData:(id)arg1;
+ (id)dataFromPropertyList:(id)arg1 error:(id )arg2;
+ (id)dataFromPropertyList:(id)arg1;
+ (id)archiveDictionary:(id)arg1 error:(id )arg2;
+ (id)archiveDictionary:(id)arg1;
+ (id)unarchiveData:(id)arg1 error:(id )arg2;
+ (id)unarchiveData:(id)arg1;
+ (id)decompressData:(id)arg1 error:(id )arg2;
+ (id)decompressData:(id)arg1;
+ (id)compressData:(id)arg1 error:(id )arg2;
+ (id)compressData:(id)arg1;
+ (id)dataFromB64String:(id)arg1;
+ (id)B64StringForData:(id)arg1;
- (id)archiveFromData:(id)arg1 error:(id )arg2;
- (id)_adjustmentStackFromData:(id)arg1 error:(id )arg2;
- (id)_dataFromAdjustmentStack:(id)arg1 error:(id )arg2;
- (id)dataFromArchive:(id)arg1 error:(id )arg2;
- (id)adjustmentStackFromData:(id)arg1 error:(id )arg2;
- (id)dataFromAdjustmentStack:(id)arg1 error:(id )arg2;

@end

