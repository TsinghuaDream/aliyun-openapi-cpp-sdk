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

#include <alibabacloud/mse/model/GetGovernanceKubernetesClusterListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

GetGovernanceKubernetesClusterListResult::GetGovernanceKubernetesClusterListResult() :
	ServiceResult()
{}

GetGovernanceKubernetesClusterListResult::GetGovernanceKubernetesClusterListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetGovernanceKubernetesClusterListResult::~GetGovernanceKubernetesClusterListResult()
{}

void GetGovernanceKubernetesClusterListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stoi(dataNode["TotalSize"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allResultNode = dataNode["Result"]["ClusterList"];
	for (auto dataNodeResultClusterList : allResultNode)
	{
		Data::ClusterList clusterListObject;
		if(!dataNodeResultClusterList["ClusterName"].isNull())
			clusterListObject.clusterName = dataNodeResultClusterList["ClusterName"].asString();
		if(!dataNodeResultClusterList["ClusterId"].isNull())
			clusterListObject.clusterId = dataNodeResultClusterList["ClusterId"].asString();
		if(!dataNodeResultClusterList["Region"].isNull())
			clusterListObject.region = dataNodeResultClusterList["Region"].asString();
		if(!dataNodeResultClusterList["K8sVersion"].isNull())
			clusterListObject.k8sVersion = dataNodeResultClusterList["K8sVersion"].asString();
		if(!dataNodeResultClusterList["NamespaceInfos"].isNull())
			clusterListObject.namespaceInfos = dataNodeResultClusterList["NamespaceInfos"].asString();
		if(!dataNodeResultClusterList["PilotStartTime"].isNull())
			clusterListObject.pilotStartTime = dataNodeResultClusterList["PilotStartTime"].asString();
		data_.result.push_back(clusterListObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetGovernanceKubernetesClusterListResult::getMessage()const
{
	return message_;
}

int GetGovernanceKubernetesClusterListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetGovernanceKubernetesClusterListResult::Data GetGovernanceKubernetesClusterListResult::getData()const
{
	return data_;
}

int GetGovernanceKubernetesClusterListResult::getCode()const
{
	return code_;
}

bool GetGovernanceKubernetesClusterListResult::getSuccess()const
{
	return success_;
}

