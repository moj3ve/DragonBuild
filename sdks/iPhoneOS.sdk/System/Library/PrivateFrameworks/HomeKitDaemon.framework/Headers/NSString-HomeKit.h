//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (HomeKit)
+ (id)stringWithSQLite3Column:(struct sqlite3_stmt )arg1 column:(int)arg2;
+ (id)parsedFromData:(id)arg1 error:(id )arg2;
- (id)generateSHA1;
- (id)serializeWithError:(id )arg1;
@end

