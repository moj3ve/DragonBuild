//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface NTPBArticleScrollNotw : PBCodable <NSCopying>
{
    NSString *_articleId;
    float _maxScrollDepth;
    NSString *_sourceChannelId;
    NSString *_windowId;
    struct {
        unsigned int maxScrollDepth:1;
    } _has;
}

@property(retain, nonatomic) NSString *windowId; // @synthesize windowId=_windowId;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(nonatomic) float maxScrollDepth; // @synthesize maxScrollDepth=_maxScrollDepth;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasWindowId;
@property(readonly, nonatomic) BOOL hasSourceChannelId;
@property(readonly, nonatomic) BOOL hasArticleId;
@property(nonatomic) BOOL hasMaxScrollDepth;

@end

