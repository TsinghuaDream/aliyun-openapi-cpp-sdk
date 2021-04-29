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

#include <alibabacloud/smartag/model/ModifyClientUserDNSRequest.h>

using AlibabaCloud::Smartag::Model::ModifyClientUserDNSRequest;

ModifyClientUserDNSRequest::ModifyClientUserDNSRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "ModifyClientUserDNS")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyClientUserDNSRequest::~ModifyClientUserDNSRequest()
{}

long ModifyClientUserDNSRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyClientUserDNSRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::vector<std::string> ModifyClientUserDNSRequest::getRecoveredDNS()const
{
	return recoveredDNS_;
}

void ModifyClientUserDNSRequest::setRecoveredDNS(const std::vector<std::string>& recoveredDNS)
{
	recoveredDNS_ = recoveredDNS;
	for(int dep1 = 0; dep1!= recoveredDNS.size(); dep1++) {
		setParameter("RecoveredDNS."+ std::to_string(dep1), recoveredDNS.at(dep1));
	}
}

std::vector<std::string> ModifyClientUserDNSRequest::getAppDNS()const
{
	return appDNS_;
}

void ModifyClientUserDNSRequest::setAppDNS(const std::vector<std::string>& appDNS)
{
	appDNS_ = appDNS;
	for(int dep1 = 0; dep1!= appDNS.size(); dep1++) {
		setParameter("AppDNS."+ std::to_string(dep1), appDNS.at(dep1));
	}
}

std::string ModifyClientUserDNSRequest::getRegionId()const
{
	return regionId_;
}

void ModifyClientUserDNSRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyClientUserDNSRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyClientUserDNSRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyClientUserDNSRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyClientUserDNSRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyClientUserDNSRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyClientUserDNSRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyClientUserDNSRequest::getSmartAGId()const
{
	return smartAGId_;
}

void ModifyClientUserDNSRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setParameter("SmartAGId", smartAGId);
}

