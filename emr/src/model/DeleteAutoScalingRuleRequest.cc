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

#include <alibabacloud/emr/model/DeleteAutoScalingRuleRequest.h>

using AlibabaCloud::Emr::Model::DeleteAutoScalingRuleRequest;

DeleteAutoScalingRuleRequest::DeleteAutoScalingRuleRequest() :
	RpcServiceRequest("emr", "2021-03-20", "DeleteAutoScalingRule")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteAutoScalingRuleRequest::~DeleteAutoScalingRuleRequest()
{}

std::string DeleteAutoScalingRuleRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteAutoScalingRuleRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DeleteAutoScalingRuleRequest::getScalingRuleId()const
{
	return scalingRuleId_;
}

void DeleteAutoScalingRuleRequest::setScalingRuleId(const std::string& scalingRuleId)
{
	scalingRuleId_ = scalingRuleId;
	setParameter("ScalingRuleId", scalingRuleId);
}

std::string DeleteAutoScalingRuleRequest::getRegionId()const
{
	return regionId_;
}

void DeleteAutoScalingRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteAutoScalingRuleRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteAutoScalingRuleRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DeleteAutoScalingRuleRequest::getSystemDebug()const
{
	return systemDebug_;
}

void DeleteAutoScalingRuleRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

