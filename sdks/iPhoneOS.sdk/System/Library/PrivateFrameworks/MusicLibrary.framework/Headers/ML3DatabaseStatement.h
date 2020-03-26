//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ML3DatabaseStatement : NSObject
{
    NSString *_sql;
    BOOL _clearBindingsAfterRunning;
    BOOL _isExecuting;
    struct sqlite3_stmt _sqliteStatement;
}

@property(nonatomic) BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
@property(nonatomic) BOOL clearBindingsAfterRunning; // @synthesize clearBindingsAfterRunning=_clearBindingsAfterRunning;
@property(readonly, nonatomic) struct sqlite3_stmt sqliteStatement; // @synthesize sqliteStatement=_sqliteStatement;
// - (void).cxx_destruct;
- (void)bindValuesInArray:(id)arg1;
- (void)bindValuesForParameterNames:(id)arg1;
- (void)bindValue:(id)arg1 forParameterAtPosition:(int)arg2;
- (void)bindUTF8StringNoCopy:(const char )arg1 length:(int)arg2 forParameterAtPosition:(int)arg3;
- (void)bindUTF8StringNoCopy:(const char )arg1 forParameterAtPosition:(int)arg2;
- (void)bindUTF8String:(const char )arg1 forParameterAtPosition:(int)arg2;
- (void)bindBytesNoCopy:(const void )arg1 length:(int)arg2 forParameterAtPosition:(int)arg3;
- (void)bindBytes:(const void )arg1 length:(int)arg2 forParameterAtPosition:(int)arg3;
- (void)bindNullForParameterAtPosition:(int)arg1;
- (void)bindDouble:(double)arg1 forParameterAtPosition:(int)arg2;
- (void)bindInt64:(long long)arg1 forParameterAtPosition:(int)arg2;
- (void)bindInt:(int)arg1 forParameterAtPosition:(int)arg2;
- (int)clearBindings;
- (BOOL)isBusy;
- (BOOL)isReadOnly;
- (int)finalizeStatement;
- (int)reset;
- (int)step;
@property(readonly, nonatomic) NSString *sql;
- (id)description;
- (void)dealloc;
- (id)initWithSQLiteStatement:(struct sqlite3_stmt )arg1 SQL:(id)arg2;

@end

