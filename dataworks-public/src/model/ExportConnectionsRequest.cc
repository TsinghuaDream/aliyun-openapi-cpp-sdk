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

#include <alibabacloud/dataworks-public/model/ExportConnectionsRequest.h>

using AlibabaCloud::Dataworks_public::Model::ExportConnectionsRequest;

ExportConnectionsRequest::ExportConnectionsRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "ExportConnections")
{
	setMethod(HttpRequest::Method::Get);
}

ExportConnectionsRequest::~ExportConnectionsRequest()
{}

std::string ExportConnectionsRequest::getDataSourceType()const
{
	return dataSourceType_;
}

void ExportConnectionsRequest::setDataSourceType(const std::string& dataSourceType)
{
	dataSourceType_ = dataSourceType;
	setParameter("DataSourceType", dataSourceType);
}

int ExportConnectionsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ExportConnectionsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ExportConnectionsRequest::getSubType()const
{
	return subType_;
}

void ExportConnectionsRequest::setSubType(const std::string& subType)
{
	subType_ = subType;
	setParameter("SubType", subType);
}

std::string ExportConnectionsRequest::getName()const
{
	return name_;
}

void ExportConnectionsRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int ExportConnectionsRequest::getEnvType()const
{
	return envType_;
}

void ExportConnectionsRequest::setEnvType(int envType)
{
	envType_ = envType;
	setParameter("EnvType", std::to_string(envType));
}

int ExportConnectionsRequest::getPageSize()const
{
	return pageSize_;
}

void ExportConnectionsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long ExportConnectionsRequest::getProjectId()const
{
	return projectId_;
}

void ExportConnectionsRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

