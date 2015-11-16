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


#ifndef MSDISCOVERYSERVICEINFO_H
#define MSDISCOVERYSERVICEINFO_H

#import <Foundation/Foundation.h>
#import "core/MSOrcChangesTrackingArray.h"

#import "core/MSOrcBaseEntity.h"
#import "api/MSOrcInteroperableWithDictionary.h"

/** Interface MSDiscoveryServiceInfo
 *
 */
@interface MSDiscoveryServiceInfo : MSOrcBaseEntity <MSOrcInteroperableWithDictionary>

/** Property capability
 *
 */
@property (nonatomic,  copy, setter=setCapability:, getter=capability) NSString * capability;

/** Property entityKey
 *
 */
@property (nonatomic,  copy, setter=setEntityKey:, getter=entityKey) NSString * entityKey;

/** Property providerId
 *
 */
@property (nonatomic,  copy, setter=setProviderId:, getter=providerId) NSString * providerId;

/** Property providerName
 *
 */
@property (nonatomic,  copy, setter=setProviderName:, getter=providerName) NSString * providerName;

/** Property serviceAccountType
 *
 */
@property (nonatomic,  setter=setServiceAccountType:, getter=serviceAccountType) int serviceAccountType;

/** Property serviceApiVersion
 *
 */
@property (nonatomic,  copy, setter=setServiceApiVersion:, getter=serviceApiVersion) NSString * serviceApiVersion;

/** Property serviceEndpointUri
 *
 */
@property (nonatomic,  copy, setter=setServiceEndpointUri:, getter=serviceEndpointUri) NSString * serviceEndpointUri;

/** Property serviceId
 *
 */
@property (nonatomic,  copy, setter=setServiceId:, getter=serviceId) NSString * serviceId;

/** Property serviceName
 *
 */
@property (nonatomic,  copy, setter=setServiceName:, getter=serviceName) NSString * serviceName;

/** Property serviceResourceId
 *
 */
@property (nonatomic,  copy, setter=setServiceResourceId:, getter=serviceResourceId) NSString * serviceResourceId;


+ (NSDictionary *) $$$_$$$propertiesNamesMappings;


@end

#endif
