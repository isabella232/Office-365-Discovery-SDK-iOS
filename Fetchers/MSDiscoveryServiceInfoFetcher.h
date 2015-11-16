/*******************************************************************************
**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).

Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the Apache License 2.0; see LICENSE in the source repository
root for authoritative license information.﻿
******************************************************************************/



#ifndef MSDISCOVERYSERVICEINFOFETCHER_H
#define MSDISCOVERYSERVICEINFOFETCHER_H

#import "MSDiscoveryModels.h"
#import "api/api.h"
#import "core/core.h"
#import "core/MSOrcEntityFetcher.h"

@class MSDiscoveryServiceInfoOperations;


/** MSDiscoveryServiceInfoFetcher
 *
 */
@interface MSDiscoveryServiceInfoFetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSDiscoveryServiceInfoOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSDiscoveryServiceInfo *, MSOrcError *))callback;
- (void)update:(MSDiscoveryServiceInfo *)ServiceInfo callback:(void (^)(MSDiscoveryServiceInfo *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSDiscoveryServiceInfoFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSDiscoveryServiceInfoFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSDiscoveryServiceInfoFetcher *)select:(NSString *)params;
- (MSDiscoveryServiceInfoFetcher *)expand:(NSString *)value;

@end

#endif
