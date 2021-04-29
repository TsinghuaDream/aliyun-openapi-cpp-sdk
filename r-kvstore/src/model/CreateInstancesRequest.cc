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

#include <alibabacloud/r-kvstore/model/CreateInstancesRequest.h>

using AlibabaCloud::R_kvstore::Model::CreateInstancesRequest;

CreateInstancesRequest::CreateInstancesRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "CreateInstances")
{
	setMethod(HttpRequest::Method::Post);
}

CreateInstancesRequest::~CreateInstancesRequest()
{}

long CreateInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateInstancesRequest::getInstances()const
{
	return instances_;
}

void CreateInstancesRequest::setInstances(const std::string& instances)
{
	instances_ = instances;
	setParameter("Instances", instances);
}

std::string CreateInstancesRequest::getCouponNo()const
{
	return couponNo_;
}

void CreateInstancesRequest::setCouponNo(const std::string& couponNo)
{
	couponNo_ = couponNo;
	setParameter("CouponNo", couponNo);
}

std::string CreateInstancesRequest::getEngineVersion()const
{
	return engineVersion_;
}

void CreateInstancesRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
}

std::string CreateInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateInstancesRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateInstancesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

bool CreateInstancesRequest::getRebuildInstance()const
{
	return rebuildInstance_;
}

void CreateInstancesRequest::setRebuildInstance(bool rebuildInstance)
{
	rebuildInstance_ = rebuildInstance;
	setParameter("RebuildInstance", rebuildInstance ? "true" : "false");
}

std::string CreateInstancesRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void CreateInstancesRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setParameter("BusinessInfo", businessInfo);
}

std::string CreateInstancesRequest::getAgentId()const
{
	return agentId_;
}

void CreateInstancesRequest::setAgentId(const std::string& agentId)
{
	agentId_ = agentId;
	setParameter("AgentId", agentId);
}

std::string CreateInstancesRequest::getRestoreTime()const
{
	return restoreTime_;
}

void CreateInstancesRequest::setRestoreTime(const std::string& restoreTime)
{
	restoreTime_ = restoreTime;
	setParameter("RestoreTime", restoreTime);
}

bool CreateInstancesRequest::getAutoPay()const
{
	return autoPay_;
}

void CreateInstancesRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setParameter("AutoPay", autoPay ? "true" : "false");
}

std::string CreateInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateInstancesRequest::getToken()const
{
	return token_;
}

void CreateInstancesRequest::setToken(const std::string& token)
{
	token_ = token;
	setParameter("Token", token);
}

std::string CreateInstancesRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void CreateInstancesRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setParameter("PrivateIpAddress", privateIpAddress);
}

std::string CreateInstancesRequest::getAutoRenew()const
{
	return autoRenew_;
}

void CreateInstancesRequest::setAutoRenew(const std::string& autoRenew)
{
	autoRenew_ = autoRenew;
	setParameter("AutoRenew", autoRenew);
}

