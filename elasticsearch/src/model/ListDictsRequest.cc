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

#include <alibabacloud/elasticsearch/model/ListDictsRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListDictsRequest;

ListDictsRequest::ListDictsRequest() :
	RoaServiceRequest("elasticsearch", "2017-06-13")
{
	setResourcePath("/openapi/instances/[InstanceId]/dicts");
	setMethod(HttpRequest::Method::Get);
}

ListDictsRequest::~ListDictsRequest()
{}

std::string ListDictsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListDictsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ListDictsRequest::getAnalyzerType()const
{
	return analyzerType_;
}

void ListDictsRequest::setAnalyzerType(const std::string& analyzerType)
{
	analyzerType_ = analyzerType;
	setParameter("AnalyzerType", analyzerType);
}

std::string ListDictsRequest::getName()const
{
	return name_;
}

void ListDictsRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

