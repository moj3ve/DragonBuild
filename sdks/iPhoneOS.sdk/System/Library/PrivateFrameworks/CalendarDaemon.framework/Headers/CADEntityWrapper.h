//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CADObjectID, NSArray;

@interface CADEntityWrapper : NSObject <NSSecureCoding>
{
    int _entityType;
    int _rowID;
    NSArray *_loadedValues;
    CADObjectID *_objectID;
    BOOL _deleted;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL deleted; // @synthesize deleted=_deleted;
// - (void).cxx_destruct;
- (id)objectID;
- (id)loadedValues;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCalEntity:(void )arg1 propertiesToLoad:(id)arg2;
- (id)initWithCalEntity:(void )arg1;

@end

