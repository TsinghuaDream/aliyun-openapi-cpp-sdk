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

#include <alibabacloud/sas/model/DescribeImageGroupedVulListRequest.h>

using AlibabaCloud::Sas::Model::DescribeImageGroupedVulListRequest;

DescribeImageGroupedVulListRequest::DescribeImageGroupedVulListRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribeImageGroupedVulList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeImageGroupedVulListRequest::~DescribeImageGroupedVulListRequest()
{}

std::string DescribeImageGroupedVulListRequest::getType()const
{
	return type_;
}

void DescribeImageGroupedVulListRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

long DescribeImageGroupedVulListRequest::getLastTsEnd()const
{
	return lastTsEnd_;
}

void DescribeImageGroupedVulListRequest::setLastTsEnd(long lastTsEnd)
{
	lastTsEnd_ = lastTsEnd;
	setParameter("LastTsEnd", std::to_string(lastTsEnd));
}

long DescribeImageGroupedVulListRequest::getCreateTsStart()const
{
	return createTsStart_;
}

void DescribeImageGroupedVulListRequest::setCreateTsStart(long createTsStart)
{
	createTsStart_ = createTsStart;
	setParameter("CreateTsStart", std::to_string(createTsStart));
}

int DescribeImageGroupedVulListRequest::getIsLatest()const
{
	return isLatest_;
}

void DescribeImageGroupedVulListRequest::setIsLatest(int isLatest)
{
	isLatest_ = isLatest;
	setParameter("IsLatest", std::to_string(isLatest));
}

std::string DescribeImageGroupedVulListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeImageGroupedVulListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeImageGroupedVulListRequest::getImageTag()const
{
	return imageTag_;
}

void DescribeImageGroupedVulListRequest::setImageTag(const std::string& imageTag)
{
	imageTag_ = imageTag;
	setParameter("ImageTag", imageTag);
}

std::string DescribeImageGroupedVulListRequest::getLevel()const
{
	return level_;
}

void DescribeImageGroupedVulListRequest::setLevel(const std::string& level)
{
	level_ = level;
	setParameter("Level", level);
}

std::string DescribeImageGroupedVulListRequest::getGroupId()const
{
	return groupId_;
}

void DescribeImageGroupedVulListRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string DescribeImageGroupedVulListRequest::getOrderBy()const
{
	return orderBy_;
}

void DescribeImageGroupedVulListRequest::setOrderBy(const std::string& orderBy)
{
	orderBy_ = orderBy;
	setParameter("OrderBy", orderBy);
}

std::string DescribeImageGroupedVulListRequest::getAliasName()const
{
	return aliasName_;
}

void DescribeImageGroupedVulListRequest::setAliasName(const std::string& aliasName)
{
	aliasName_ = aliasName;
	setParameter("AliasName", aliasName);
}

long DescribeImageGroupedVulListRequest::getPatchId()const
{
	return patchId_;
}

void DescribeImageGroupedVulListRequest::setPatchId(long patchId)
{
	patchId_ = patchId;
	setParameter("PatchId", std::to_string(patchId));
}

std::string DescribeImageGroupedVulListRequest::getName()const
{
	return name_;
}

void DescribeImageGroupedVulListRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

long DescribeImageGroupedVulListRequest::getCreateTsEnd()const
{
	return createTsEnd_;
}

void DescribeImageGroupedVulListRequest::setCreateTsEnd(long createTsEnd)
{
	createTsEnd_ = createTsEnd;
	setParameter("CreateTsEnd", std::to_string(createTsEnd));
}

std::string DescribeImageGroupedVulListRequest::getNecessity()const
{
	return necessity_;
}

void DescribeImageGroupedVulListRequest::setNecessity(const std::string& necessity)
{
	necessity_ = necessity;
	setParameter("Necessity", necessity);
}

std::string DescribeImageGroupedVulListRequest::getUuids()const
{
	return uuids_;
}

void DescribeImageGroupedVulListRequest::setUuids(const std::string& uuids)
{
	uuids_ = uuids;
	setParameter("Uuids", uuids);
}

std::string DescribeImageGroupedVulListRequest::getRepoId()const
{
	return repoId_;
}

void DescribeImageGroupedVulListRequest::setRepoId(const std::string& repoId)
{
	repoId_ = repoId;
	setParameter("RepoId", repoId);
}

std::string DescribeImageGroupedVulListRequest::getStatusList()const
{
	return statusList_;
}

void DescribeImageGroupedVulListRequest::setStatusList(const std::string& statusList)
{
	statusList_ = statusList;
	setParameter("StatusList", statusList);
}

std::string DescribeImageGroupedVulListRequest::getCveId()const
{
	return cveId_;
}

void DescribeImageGroupedVulListRequest::setCveId(const std::string& cveId)
{
	cveId_ = cveId;
	setParameter("CveId", cveId);
}

std::string DescribeImageGroupedVulListRequest::getRemark()const
{
	return remark_;
}

void DescribeImageGroupedVulListRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setParameter("Remark", remark);
}

std::string DescribeImageGroupedVulListRequest::getRepoNamespace()const
{
	return repoNamespace_;
}

void DescribeImageGroupedVulListRequest::setRepoNamespace(const std::string& repoNamespace)
{
	repoNamespace_ = repoNamespace;
	setParameter("RepoNamespace", repoNamespace);
}

std::string DescribeImageGroupedVulListRequest::getImageDigest()const
{
	return imageDigest_;
}

void DescribeImageGroupedVulListRequest::setImageDigest(const std::string& imageDigest)
{
	imageDigest_ = imageDigest;
	setParameter("ImageDigest", imageDigest);
}

int DescribeImageGroupedVulListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeImageGroupedVulListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeImageGroupedVulListRequest::getLang()const
{
	return lang_;
}

void DescribeImageGroupedVulListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

long DescribeImageGroupedVulListRequest::getLastTsStart()const
{
	return lastTsStart_;
}

void DescribeImageGroupedVulListRequest::setLastTsStart(long lastTsStart)
{
	lastTsStart_ = lastTsStart;
	setParameter("LastTsStart", std::to_string(lastTsStart));
}

std::string DescribeImageGroupedVulListRequest::getDirection()const
{
	return direction_;
}

void DescribeImageGroupedVulListRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setParameter("Direction", direction);
}

std::string DescribeImageGroupedVulListRequest::getDealed()const
{
	return dealed_;
}

void DescribeImageGroupedVulListRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setParameter("Dealed", dealed);
}

int DescribeImageGroupedVulListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeImageGroupedVulListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeImageGroupedVulListRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeImageGroupedVulListRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DescribeImageGroupedVulListRequest::getSearchTags()const
{
	return searchTags_;
}

void DescribeImageGroupedVulListRequest::setSearchTags(const std::string& searchTags)
{
	searchTags_ = searchTags;
	setParameter("SearchTags", searchTags);
}

std::string DescribeImageGroupedVulListRequest::getRepoName()const
{
	return repoName_;
}

void DescribeImageGroupedVulListRequest::setRepoName(const std::string& repoName)
{
	repoName_ = repoName;
	setParameter("RepoName", repoName);
}

std::string DescribeImageGroupedVulListRequest::getRepoInstanceId()const
{
	return repoInstanceId_;
}

void DescribeImageGroupedVulListRequest::setRepoInstanceId(const std::string& repoInstanceId)
{
	repoInstanceId_ = repoInstanceId;
	setParameter("RepoInstanceId", repoInstanceId);
}

std::string DescribeImageGroupedVulListRequest::getImageLayer()const
{
	return imageLayer_;
}

void DescribeImageGroupedVulListRequest::setImageLayer(const std::string& imageLayer)
{
	imageLayer_ = imageLayer;
	setParameter("ImageLayer", imageLayer);
}

std::string DescribeImageGroupedVulListRequest::getRepoRegionId()const
{
	return repoRegionId_;
}

void DescribeImageGroupedVulListRequest::setRepoRegionId(const std::string& repoRegionId)
{
	repoRegionId_ = repoRegionId;
	setParameter("RepoRegionId", repoRegionId);
}

