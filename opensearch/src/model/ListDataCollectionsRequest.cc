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

#include <alibabacloud/opensearch/model/ListDataCollectionsRequest.h>

using AlibabaCloud::OpenSearch::Model::ListDataCollectionsRequest;

ListDataCollectionsRequest::ListDataCollectionsRequest() :
	RoaServiceRequest("opensearch", "2017-12-25")
{
	setResourcePath("/v4/openapi/app-groups/[appGroupIdentity]/data-collections");
	setMethod(HttpRequest::Method::Get);
}

ListDataCollectionsRequest::~ListDataCollectionsRequest()
{}

int ListDataCollectionsRequest::getPageSize()const
{
	return pageSize_;
}

void ListDataCollectionsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListDataCollectionsRequest::getAppGroupIdentity()const
{
	return appGroupIdentity_;
}

void ListDataCollectionsRequest::setAppGroupIdentity(const std::string& appGroupIdentity)
{
	appGroupIdentity_ = appGroupIdentity;
	setParameter("AppGroupIdentity", appGroupIdentity);
}

int ListDataCollectionsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListDataCollectionsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

