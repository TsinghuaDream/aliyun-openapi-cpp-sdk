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

#include <alibabacloud/elasticsearch/model/CreateVpcEndpointResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

CreateVpcEndpointResult::CreateVpcEndpointResult() :
	ServiceResult()
{}

CreateVpcEndpointResult::CreateVpcEndpointResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateVpcEndpointResult::~CreateVpcEndpointResult()
{}

void CreateVpcEndpointResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["endpointId"].isNull())
		result_.endpointId = resultNode["endpointId"].asString();
	if(!resultNode["endpointName"].isNull())
		result_.endpointName = resultNode["endpointName"].asString();
	if(!resultNode["serviceId"].isNull())
		result_.serviceId = resultNode["serviceId"].asString();
	if(!resultNode["endpointDomain"].isNull())
		result_.endpointDomain = resultNode["endpointDomain"].asString();

}

CreateVpcEndpointResult::Result CreateVpcEndpointResult::getResult()const
{
	return result_;
}

