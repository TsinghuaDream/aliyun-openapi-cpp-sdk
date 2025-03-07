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

#include <alibabacloud/ccc/model/ListUnassignedNumbersRequest.h>

using AlibabaCloud::CCC::Model::ListUnassignedNumbersRequest;

ListUnassignedNumbersRequest::ListUnassignedNumbersRequest() :
	RpcServiceRequest("ccc", "2020-07-01", "ListUnassignedNumbers")
{
	setMethod(HttpRequest::Method::Post);
}

ListUnassignedNumbersRequest::~ListUnassignedNumbersRequest()
{}

int ListUnassignedNumbersRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListUnassignedNumbersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListUnassignedNumbersRequest::getSearchPattern()const
{
	return searchPattern_;
}

void ListUnassignedNumbersRequest::setSearchPattern(const std::string& searchPattern)
{
	searchPattern_ = searchPattern;
	setParameter("SearchPattern", searchPattern);
}

std::string ListUnassignedNumbersRequest::getInstanceId()const
{
	return instanceId_;
}

void ListUnassignedNumbersRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ListUnassignedNumbersRequest::getPageSize()const
{
	return pageSize_;
}

void ListUnassignedNumbersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

