//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Network/NWPrettyDescription-Protocol.h>

@class NSArray, NSData, NSDictionary, NSSet, NSString, NSURL, NSUUID, NWAddressEndpoint, NWInterface;
@protocol OS_nw_parameters;

@interface NWParameters : NSObject <NWPrettyDescription, NSSecureCoding, NSCopying>
{
    BOOL _enableSFO;
    NSObject<OS_nw_parameters> *_internalParameters;
    NSSet *_SSLCipherSuitesInternal;
    NSUInteger _minimumSSLProtocolVersionInternal;
    NSUInteger _maximumSSLProtocolVersionInternal;
}

+ (id)parametersWithProtocolBufferData:(id)arg1;
+ (id)parametersWithCParameters:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL enableSFO; // @synthesize enableSFO=_enableSFO;
@property(nonatomic) NSUInteger maximumSSLProtocolVersionInternal; // @synthesize maximumSSLProtocolVersionInternal=_maximumSSLProtocolVersionInternal;
@property(nonatomic) NSUInteger minimumSSLProtocolVersionInternal; // @synthesize minimumSSLProtocolVersionInternal=_minimumSSLProtocolVersionInternal;
@property(retain, nonatomic) NSSet *SSLCipherSuitesInternal; // @synthesize SSLCipherSuitesInternal=_SSLCipherSuitesInternal;
@property(retain) NSObject<OS_nw_parameters> *internalParameters; // @synthesize internalParameters=_internalParameters;
// - (void).cxx_destruct;
@property(nonatomic) BOOL allowDuplicateStateUpdates;
@property(nonatomic) BOOL allowJoiningConnectedFd;
@property(nonatomic) BOOL prohibitJoiningProtocols;
@property(nonatomic) BOOL attachProtocolListener;
@property(nonatomic) BOOL httpsProxyOverTLS;
@property(nonatomic) BOOL httpsProxyIsOpaque;
@property(nonatomic) BOOL preferNoProxy;
@property(nonatomic) BOOL allowUnusableAddresses;
- (id)createProtocolBufferObject;
@property(retain, nonatomic) NSData *metadata;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setProtocolAtLevel:(NSUInteger)arg1 protocol:(struct nw_protocol_identifier )arg2;
- (id)copyRequiredAgentsDescription;
@property(readonly, nonatomic, getter=isDryRun) BOOL dryRun;
- (BOOL)hasNonEmptyProxyConfiguration;
- (BOOL)hasProhibitedNetworkAgents;
- (BOOL)hasPreferredNetworkAgents;
- (BOOL)hasRequiredNetworkAgents;
@property(nonatomic, getter=isDiscretionary) BOOL discretionary;
@property(nonatomic) BOOL prohibitFallback;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
@property(copy, nonatomic) NSArray *protocolTransforms;
- (void)setInitialDataPayload:(id)arg1;
- (void)setSourceApplicationWithBundleID:(id)arg1;
- (void)setSourceApplicationWithToken:(CDStruct_6ad76789)arg1;
@property(nonatomic) NSUInteger maximumSSLProtocolVersion;
@property(nonatomic) NSUInteger minimumSSLProtocolVersion;
- (unsigned short)tlsVersionWithSSLProtocol:(int)arg1;
@property(nonatomic) BOOL keepAliveOffload;
@property(nonatomic) NSUInteger keepAliveInterval;
@property(nonatomic) NSUInteger keepAliveIdleTime;
@property(nonatomic) BOOL keepAlive;
@property(copy, nonatomic) NSSet *SSLCipherSuites;
@property(copy, nonatomic) NSData *TLSSessionID;
@property(nonatomic) BOOL enableTLS;
@property(nonatomic) BOOL noProxy;
@property(nonatomic) BOOL indefinite;
@property(nonatomic) BOOL multipathForceEnable;
@property(nonatomic) int multipathService;
@property(nonatomic) BOOL multipath;
@property(nonatomic) BOOL resolvePTR;
@property(nonatomic) BOOL useP2P;
@property(nonatomic) BOOL useAWDL;
@property(nonatomic) BOOL ignoreResolverStats;
@property(nonatomic) BOOL useLongOutstandingQueries;
@property(nonatomic) BOOL disableNagleAlgorithm;
@property(nonatomic) BOOL reduceBuffering;
@property(nonatomic) BOOL fastOpenForceEnable;
@property(nonatomic) BOOL useTFOHeuristics;
@property(nonatomic) BOOL enableTFONoCookie;
@property(nonatomic) BOOL enableTFO;
- (void)avoidNetworkAgentWithDomain:(id)arg1 type:(id)arg2;
- (void)avoidNetworkAgentWithUUID:(id)arg1;
- (void)preferNetworkAgentWithDomain:(id)arg1 type:(id)arg2;
- (void)preferNetworkAgentWithUUID:(id)arg1;
- (void)requireNetworkAgentWithDomain:(id)arg1 type:(id)arg2;
- (void)requireNetworkAgentWithUUID:(id)arg1;
@property(nonatomic) long long requiredInterfaceSubtype;
@property(nonatomic) long long requiredInterfaceType;
@property(retain, nonatomic) NWInterface *requiredInterface;
- (void)prohibitNetworkAgentsWithDomain:(id)arg1 type:(id)arg2;
- (void)prohibitNetworkAgentWithUUID:(id)arg1;
- (void)prohibitInterface:(id)arg1;
- (void)prohibitInterfaceSubtype:(long long)arg1;
- (void)prohibitInterfaceType:(long long)arg1;
@property(readonly, nonatomic) BOOL prohibitCellular;
@property(nonatomic) BOOL prohibitRoaming;
@property(nonatomic) BOOL prohibitConstrainedPaths;
@property(nonatomic) BOOL prohibitExpensivePaths;
@property(copy, nonatomic) NSDictionary *proxyConfiguration;
@property(readonly, nonatomic) NSURL *sanitizedURL;
@property(copy, nonatomic) NSURL *url;
@property(nonatomic) BOOL reuseLocalAddress;
@property(retain, nonatomic) NWAddressEndpoint *localAddress;
@property(nonatomic) unsigned char requiredAddressFamily;
@property(retain, nonatomic) NSUUID *parentID;
- (BOOL)copyEffectiveAuditToken:(CDStruct_6ad76789 )arg1;
@property(copy, nonatomic) NSString *effectiveBundleID;
@property(copy, nonatomic) NSUUID *effectiveProcessUUID;
- (BOOL)hasDelegatedProcessUUID;
@property(copy, nonatomic) NSUUID *processUUID;
@property(nonatomic) unsigned int uid;
- (BOOL)hasDelegatedPIDForOriginatingPID:(int)arg1;
@property(nonatomic) int pid;
@property(readonly, nonatomic) unsigned char transportProtocol;
@property(readonly, nonatomic) unsigned char ipProtocol;
@property(nonatomic) NSUInteger trafficClass;
@property(nonatomic) NSUInteger dataMode;
@property(copy, nonatomic) NSString *account;
@property(nonatomic) BOOL allowSocketAccess;
@property(nonatomic) BOOL trustInvalidCertificates;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, copy, nonatomic) NSString *privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;
- (id)copyCParameters;
- (id)initWithParameters:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

