//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EDAnchor.h>

__attribute__((visibility("hidden")))
@interface EDTwoCellAnchor : EDAnchor
{
    struct EDCellAnchorMarker mFrom;
    struct EDCellAnchorMarker mTo;
    BOOL mIsRelative;
    int mEditAs;
}

- (id).cxx_construct;
- (void)setEditAs:(int)arg1;
- (int)editAs;
- (void)setRelative:(BOOL)arg1;
- (BOOL)isRelative;
- (void)setTo:(struct EDCellAnchorMarker)arg1;
- (struct EDCellAnchorMarker)to;
- (void)setFrom:(struct EDCellAnchorMarker)arg1;
- (struct EDCellAnchorMarker)from;
- (id)init;

@end

