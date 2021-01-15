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

#include <alibabacloud/opensearch/model/DescribeFirstRankResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

DescribeFirstRankResult::DescribeFirstRankResult() :
	ServiceResult()
{}

DescribeFirstRankResult::DescribeFirstRankResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFirstRankResult::~DescribeFirstRankResult()
{}

void DescribeFirstRankResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["name"].isNull())
		result_.name = resultNode["name"].asString();
	if(!resultNode["description"].isNull())
		result_.description = resultNode["description"].asString();
	if(!resultNode["active"].isNull())
		result_.active = resultNode["active"].asString() == "true";
	auto allmetaNode = resultNode["meta"]["metaItem"];
	for (auto resultNodemetametaItem : allmetaNode)
	{
		Result::MetaItem metaItemObject;
		if(!resultNodemetametaItem["attribute"].isNull())
			metaItemObject.attribute = resultNodemetametaItem["attribute"].asString();
		if(!resultNodemetametaItem["arg"].isNull())
			metaItemObject.arg = resultNodemetametaItem["arg"].asString();
		if(!resultNodemetametaItem["weight"].isNull())
			metaItemObject.weight = std::stof(resultNodemetametaItem["weight"].asString());
		result_.meta.push_back(metaItemObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string DescribeFirstRankResult::getRequestId()const
{
	return requestId_;
}

DescribeFirstRankResult::Result DescribeFirstRankResult::getResult()const
{
	return result_;
}

