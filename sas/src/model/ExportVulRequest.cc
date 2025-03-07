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

#include <alibabacloud/sas/model/ExportVulRequest.h>

using AlibabaCloud::Sas::Model::ExportVulRequest;

ExportVulRequest::ExportVulRequest() :
	RpcServiceRequest("sas", "2018-12-03", "ExportVul")
{
	setMethod(HttpRequest::Method::Post);
}

ExportVulRequest::~ExportVulRequest()
{}

std::string ExportVulRequest::getStatusList()const
{
	return statusList_;
}

void ExportVulRequest::setStatusList(const std::string& statusList)
{
	statusList_ = statusList;
	setParameter("StatusList", statusList);
}

std::string ExportVulRequest::getTargetType()const
{
	return targetType_;
}

void ExportVulRequest::setTargetType(const std::string& targetType)
{
	targetType_ = targetType;
	setParameter("TargetType", targetType);
}

int ExportVulRequest::getMinScore()const
{
	return minScore_;
}

void ExportVulRequest::setMinScore(int minScore)
{
	minScore_ = minScore;
	setParameter("MinScore", std::to_string(minScore));
}

std::string ExportVulRequest::getRemark()const
{
	return remark_;
}

void ExportVulRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setParameter("Remark", remark);
}

std::string ExportVulRequest::getAttachTypes()const
{
	return attachTypes_;
}

void ExportVulRequest::setAttachTypes(const std::string& attachTypes)
{
	attachTypes_ = attachTypes;
	setParameter("AttachTypes", attachTypes);
}

std::string ExportVulRequest::getType()const
{
	return type_;
}

void ExportVulRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string ExportVulRequest::getVpcInstanceIds()const
{
	return vpcInstanceIds_;
}

void ExportVulRequest::setVpcInstanceIds(const std::string& vpcInstanceIds)
{
	vpcInstanceIds_ = vpcInstanceIds;
	setParameter("VpcInstanceIds", vpcInstanceIds);
}

std::string ExportVulRequest::getContainerFieldName()const
{
	return containerFieldName_;
}

void ExportVulRequest::setContainerFieldName(const std::string& containerFieldName)
{
	containerFieldName_ = containerFieldName;
	setParameter("ContainerFieldName", containerFieldName);
}

std::string ExportVulRequest::getSourceIp()const
{
	return sourceIp_;
}

void ExportVulRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ExportVulRequest::getContainerFieldValue()const
{
	return containerFieldValue_;
}

void ExportVulRequest::setContainerFieldValue(const std::string& containerFieldValue)
{
	containerFieldValue_ = containerFieldValue;
	setParameter("ContainerFieldValue", containerFieldValue);
}

std::string ExportVulRequest::getLang()const
{
	return lang_;
}

void ExportVulRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string ExportVulRequest::getLevel()const
{
	return level_;
}

void ExportVulRequest::setLevel(const std::string& level)
{
	level_ = level;
	setParameter("Level", level);
}

std::string ExportVulRequest::getResource()const
{
	return resource_;
}

void ExportVulRequest::setResource(const std::string& resource)
{
	resource_ = resource;
	setParameter("Resource", resource);
}

std::string ExportVulRequest::getGroupId()const
{
	return groupId_;
}

void ExportVulRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string ExportVulRequest::getDealed()const
{
	return dealed_;
}

void ExportVulRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setParameter("Dealed", dealed);
}

std::string ExportVulRequest::getClusterId()const
{
	return clusterId_;
}

void ExportVulRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ExportVulRequest::getBatchName()const
{
	return batchName_;
}

void ExportVulRequest::setBatchName(const std::string& batchName)
{
	batchName_ = batchName;
	setParameter("BatchName", batchName);
}

std::string ExportVulRequest::getAliasName()const
{
	return aliasName_;
}

void ExportVulRequest::setAliasName(const std::string& aliasName)
{
	aliasName_ = aliasName;
	setParameter("AliasName", aliasName);
}

std::string ExportVulRequest::getSearchTags()const
{
	return searchTags_;
}

void ExportVulRequest::setSearchTags(const std::string& searchTags)
{
	searchTags_ = searchTags;
	setParameter("SearchTags", searchTags);
}

std::string ExportVulRequest::getName()const
{
	return name_;
}

void ExportVulRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ExportVulRequest::getNecessity()const
{
	return necessity_;
}

void ExportVulRequest::setNecessity(const std::string& necessity)
{
	necessity_ = necessity;
	setParameter("Necessity", necessity);
}

std::string ExportVulRequest::getUuids()const
{
	return uuids_;
}

void ExportVulRequest::setUuids(const std::string& uuids)
{
	uuids_ = uuids;
	setParameter("Uuids", uuids);
}

