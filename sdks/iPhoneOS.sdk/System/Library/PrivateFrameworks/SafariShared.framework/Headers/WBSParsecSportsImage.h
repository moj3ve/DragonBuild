//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSParsecModel.h>

@class NSString, WBSParsecImageRepresentation;

@interface WBSParsecSportsImage : WBSParsecModel
{
    long long _alignment;
    WBSParsecImageRepresentation *_imageRepresentation;
    NSString *_label;
    NSString *_name;
}

+ (id)schema;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) WBSParsecImageRepresentation *imageRepresentation; // @synthesize imageRepresentation=_imageRepresentation;
@property(readonly, nonatomic) long long alignment; // @synthesize alignment=_alignment;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

