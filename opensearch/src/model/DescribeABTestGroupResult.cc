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

#include <alibabacloud/opensearch/model/DescribeABTestGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

DescribeABTestGroupResult::DescribeABTestGroupResult() :
	ServiceResult()
{}

DescribeABTestGroupResult::DescribeABTestGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeABTestGroupResult::~DescribeABTestGroupResult()
{}

void DescribeABTestGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["id"].isNull())
		result_.id = resultNode["id"].asString();
	if(!resultNode["name"].isNull())
		result_.name = resultNode["name"].asString();
	if(!resultNode["status"].isNull())
		result_.status = std::stoi(resultNode["status"].asString());
	if(!resultNode["created"].isNull())
		result_.created = std::stoi(resultNode["created"].asString());
	if(!resultNode["updated"].isNull())
		result_.updated = std::stoi(resultNode["updated"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string DescribeABTestGroupResult::getRequestId()const
{
	return requestId_;
}

DescribeABTestGroupResult::Result DescribeABTestGroupResult::getResult()const
{
	return result_;
}

