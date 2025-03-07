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

#include <alibabacloud/polardb/model/CreateDBNodesRequest.h>

using AlibabaCloud::Polardb::Model::CreateDBNodesRequest;

CreateDBNodesRequest::CreateDBNodesRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "CreateDBNodes")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDBNodesRequest::~CreateDBNodesRequest()
{}

long CreateDBNodesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDBNodesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateDBNodesRequest::getClientToken()const
{
	return clientToken_;
}

void CreateDBNodesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateDBNodesRequest::getEndpointBindList()const
{
	return endpointBindList_;
}

void CreateDBNodesRequest::setEndpointBindList(const std::string& endpointBindList)
{
	endpointBindList_ = endpointBindList;
	setParameter("EndpointBindList", endpointBindList);
}

std::string CreateDBNodesRequest::getPlannedEndTime()const
{
	return plannedEndTime_;
}

void CreateDBNodesRequest::setPlannedEndTime(const std::string& plannedEndTime)
{
	plannedEndTime_ = plannedEndTime;
	setParameter("PlannedEndTime", plannedEndTime);
}

std::string CreateDBNodesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDBNodesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateDBNodesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDBNodesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateDBNodesRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void CreateDBNodesRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string CreateDBNodesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateDBNodesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateDBNodesRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDBNodesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDBNodesRequest::getPlannedStartTime()const
{
	return plannedStartTime_;
}

void CreateDBNodesRequest::setPlannedStartTime(const std::string& plannedStartTime)
{
	plannedStartTime_ = plannedStartTime;
	setParameter("PlannedStartTime", plannedStartTime);
}

std::vector<CreateDBNodesRequest::DBNode> CreateDBNodesRequest::getDBNode()const
{
	return dBNode_;
}

void CreateDBNodesRequest::setDBNode(const std::vector<DBNode>& dBNode)
{
	dBNode_ = dBNode;
	for(int dep1 = 0; dep1!= dBNode.size(); dep1++) {
		auto dBNodeObj = dBNode.at(dep1);
		std::string dBNodeObjStr = "DBNode." + std::to_string(dep1 + 1);
		setParameter(dBNodeObjStr + ".TargetClass", dBNodeObj.targetClass);
		setParameter(dBNodeObjStr + ".ZoneId", dBNodeObj.zoneId);
	}
}

std::string CreateDBNodesRequest::getImciSwitch()const
{
	return imciSwitch_;
}

void CreateDBNodesRequest::setImciSwitch(const std::string& imciSwitch)
{
	imciSwitch_ = imciSwitch;
	setParameter("ImciSwitch", imciSwitch);
}

