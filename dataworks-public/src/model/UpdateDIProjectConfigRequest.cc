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

#include <alibabacloud/dataworks-public/model/UpdateDIProjectConfigRequest.h>

using AlibabaCloud::Dataworks_public::Model::UpdateDIProjectConfigRequest;

UpdateDIProjectConfigRequest::UpdateDIProjectConfigRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "UpdateDIProjectConfig")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateDIProjectConfigRequest::~UpdateDIProjectConfigRequest()
{}

std::string UpdateDIProjectConfigRequest::getDestinationType()const
{
	return destinationType_;
}

void UpdateDIProjectConfigRequest::setDestinationType(const std::string& destinationType)
{
	destinationType_ = destinationType;
	setParameter("DestinationType", destinationType);
}

std::string UpdateDIProjectConfigRequest::getSourceType()const
{
	return sourceType_;
}

void UpdateDIProjectConfigRequest::setSourceType(const std::string& sourceType)
{
	sourceType_ = sourceType;
	setParameter("SourceType", sourceType);
}

std::string UpdateDIProjectConfigRequest::getProjectConfig()const
{
	return projectConfig_;
}

void UpdateDIProjectConfigRequest::setProjectConfig(const std::string& projectConfig)
{
	projectConfig_ = projectConfig;
	setParameter("ProjectConfig", projectConfig);
}

long UpdateDIProjectConfigRequest::getProjectId()const
{
	return projectId_;
}

void UpdateDIProjectConfigRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

