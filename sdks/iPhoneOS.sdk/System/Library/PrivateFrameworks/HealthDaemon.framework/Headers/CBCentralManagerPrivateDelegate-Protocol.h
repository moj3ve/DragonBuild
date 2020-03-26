//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/CBCentralManagerDelegate-Protocol.h>

@class CBCentralManager, CBPeripheral, NSArray, NSData, NSError, NSNumber, NSString;

@protocol CBCentralManagerPrivateDelegate <CBCentralManagerDelegate>

@optional
- (void)centralManager:(CBCentralManager *)arg1 connectionEventDidOccur:(long long)arg2 forPeripheral:(CBPeripheral *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 canSendDataToPeripheral:(CBPeripheral *)arg2;
- (void)centralManager:(CBCentralManager *)arg1 didDiscoverMultiplePeripherals:(NSArray *)arg2;
- (void)centralManager:(CBCentralManager *)arg1 didReceiveData:(NSData *)arg2 fromPeripheral:(CBPeripheral *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didSendBytes:(NSNumber *)arg2 toPeripheral:(CBPeripheral *)arg3 withError:(NSError *)arg4;
- (void)centralManager:(CBCentralManager *)arg1 application:(NSString *)arg2 isActive:(BOOL)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didUpdateConnectionParameters:(CBPeripheral *)arg2 interval:(NSNumber *)arg3 latency:(NSNumber *)arg4 supervisionTimeout:(NSNumber *)arg5;
- (void)centralManager:(CBCentralManager *)arg1 didLoseZone:(NSData *)arg2 mask:(NSData *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didLosePeripheral:(CBPeripheral *)arg2 forType:(NSNumber *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didFindPeripheral:(CBPeripheral *)arg2 forType:(NSNumber *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didUpdatePeripheralConnectionState:(CBPeripheral *)arg2;
@end

