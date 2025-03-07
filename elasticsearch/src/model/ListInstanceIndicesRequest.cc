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

#include <alibabacloud/elasticsearch/model/ListInstanceIndicesRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListInstanceIndicesRequest;

ListInstanceIndicesRequest::ListInstanceIndicesRequest() :
	RoaServiceRequest("elasticsearch", "2017-06-13")
{
	setResourcePath("/openapi/instances/[InstanceId]/indices");
	setMethod(HttpRequest::Method::Get);
}

ListInstanceIndicesRequest::~ListInstanceIndicesRequest()
{}

bool ListInstanceIndicesRequest::getAll()const
{
	return all_;
}

void ListInstanceIndicesRequest::setAll(bool all)
{
	all_ = all;
	setParameter("All", all ? "true" : "false");
}

std::string ListInstanceIndicesRequest::getInstanceId()const
{
	return instanceId_;
}

void ListInstanceIndicesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

bool ListInstanceIndicesRequest::getIsManaged()const
{
	return isManaged_;
}

void ListInstanceIndicesRequest::setIsManaged(bool isManaged)
{
	isManaged_ = isManaged;
	setParameter("IsManaged", isManaged ? "true" : "false");
}

int ListInstanceIndicesRequest::getSize()const
{
	return size_;
}

void ListInstanceIndicesRequest::setSize(int size)
{
	size_ = size;
	setParameter("Size", std::to_string(size));
}

std::string ListInstanceIndicesRequest::getName()const
{
	return name_;
}

void ListInstanceIndicesRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int ListInstanceIndicesRequest::getPage()const
{
	return page_;
}

void ListInstanceIndicesRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

bool ListInstanceIndicesRequest::getIsOpenstore()const
{
	return isOpenstore_;
}

void ListInstanceIndicesRequest::setIsOpenstore(bool isOpenstore)
{
	isOpenstore_ = isOpenstore;
	setParameter("IsOpenstore", isOpenstore ? "true" : "false");
}

