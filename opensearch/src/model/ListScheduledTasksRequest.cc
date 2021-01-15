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

#include <alibabacloud/opensearch/model/ListScheduledTasksRequest.h>

using AlibabaCloud::OpenSearch::Model::ListScheduledTasksRequest;

ListScheduledTasksRequest::ListScheduledTasksRequest() :
	RoaServiceRequest("opensearch", "2017-12-25")
{
	setResourcePath("/v4/openapi/app-groups/[appGroupIdentity]/scheduled-tasks");
	setMethod(HttpRequest::Method::Get);
}

ListScheduledTasksRequest::~ListScheduledTasksRequest()
{}

int ListScheduledTasksRequest::getPageSize()const
{
	return pageSize_;
}

void ListScheduledTasksRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListScheduledTasksRequest::getType()const
{
	return type_;
}

void ListScheduledTasksRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string ListScheduledTasksRequest::getAppGroupIdentity()const
{
	return appGroupIdentity_;
}

void ListScheduledTasksRequest::setAppGroupIdentity(const std::string& appGroupIdentity)
{
	appGroupIdentity_ = appGroupIdentity;
	setParameter("AppGroupIdentity", appGroupIdentity);
}

int ListScheduledTasksRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListScheduledTasksRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

