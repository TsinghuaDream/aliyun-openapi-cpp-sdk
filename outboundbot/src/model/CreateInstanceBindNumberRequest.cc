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

#include <alibabacloud/outboundbot/model/CreateInstanceBindNumberRequest.h>

using AlibabaCloud::OutboundBot::Model::CreateInstanceBindNumberRequest;

CreateInstanceBindNumberRequest::CreateInstanceBindNumberRequest() :
	RpcServiceRequest("outboundbot", "2019-12-26", "CreateInstanceBindNumber")
{
	setMethod(HttpRequest::Method::Post);
}

CreateInstanceBindNumberRequest::~CreateInstanceBindNumberRequest()
{}

std::string CreateInstanceBindNumberRequest::getInstanceList()const
{
	return instanceList_;
}

void CreateInstanceBindNumberRequest::setInstanceList(const std::string& instanceList)
{
	instanceList_ = instanceList;
	setParameter("InstanceList", instanceList);
}

std::string CreateInstanceBindNumberRequest::getNumber()const
{
	return number_;
}

void CreateInstanceBindNumberRequest::setNumber(const std::string& number)
{
	number_ = number;
	setParameter("Number", number);
}

