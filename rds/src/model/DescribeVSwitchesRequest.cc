/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/rds/model/DescribeVSwitchesRequest.h>

using AlibabaCloud::Rds::Model::DescribeVSwitchesRequest;

DescribeVSwitchesRequest::DescribeVSwitchesRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeVSwitches")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVSwitchesRequest::~DescribeVSwitchesRequest()
{}

long DescribeVSwitchesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVSwitchesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeVSwitchesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVSwitchesRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeVSwitchesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeVSwitchesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeVSwitchesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeVSwitchesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeVSwitchesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeVSwitchesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

long DescribeVSwitchesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVSwitchesRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeVSwitchesRequest::getDedicatedHostGroupId()const
{
	return dedicatedHostGroupId_;
}

void DescribeVSwitchesRequest::setDedicatedHostGroupId(const std::string& dedicatedHostGroupId)
{
	dedicatedHostGroupId_ = dedicatedHostGroupId;
	setParameter("DedicatedHostGroupId", dedicatedHostGroupId);
}

std::string DescribeVSwitchesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeVSwitchesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeVSwitchesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeVSwitchesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeVSwitchesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVSwitchesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeVSwitchesRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeVSwitchesRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string DescribeVSwitchesRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeVSwitchesRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

