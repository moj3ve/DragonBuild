//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOServiceRequester.h>

#import <GeoServices/_GEODirectionsRequesterServerProxy-Protocol.h>

__attribute__((visibility("hidden")))
@interface _GEODirectionsRequesterServerLocalProxy : GEOServiceRequester <_GEODirectionsRequesterServerProxy>
{
}

- (id)_validateResponse:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)startRequest:(id)arg1 auditToken:(id)arg2 isDoomRequest:(BOOL)arg3 requestPriority:(id)arg4 callbackQueue:(id)arg5 finished:(id /* CDUnknownBlockType */)arg6 networkActivity:(id /* CDUnknownBlockType */)arg7 error:(id /* CDUnknownBlockType */)arg8;

@end

