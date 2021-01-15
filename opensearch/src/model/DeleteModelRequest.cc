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

#include <alibabacloud/opensearch/model/DeleteModelRequest.h>

using AlibabaCloud::OpenSearch::Model::DeleteModelRequest;

DeleteModelRequest::DeleteModelRequest() :
	RoaServiceRequest("opensearch", "2017-12-25")
{
	setResourcePath("/v4/openapi/app-groups/[appGroupIdentity]/algorithm/models/[modelName]");
	setMethod(HttpRequest::Method::Delete);
}

DeleteModelRequest::~DeleteModelRequest()
{}

std::string DeleteModelRequest::getModelName()const
{
	return modelName_;
}

void DeleteModelRequest::setModelName(const std::string& modelName)
{
	modelName_ = modelName;
	setParameter("ModelName", modelName);
}

std::string DeleteModelRequest::getAppGroupIdentity()const
{
	return appGroupIdentity_;
}

void DeleteModelRequest::setAppGroupIdentity(const std::string& appGroupIdentity)
{
	appGroupIdentity_ = appGroupIdentity;
	setParameter("AppGroupIdentity", appGroupIdentity);
}

